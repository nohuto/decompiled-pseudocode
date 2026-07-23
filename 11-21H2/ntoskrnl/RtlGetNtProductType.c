/*
 * XREFs of RtlGetNtProductType @ 0x140245CC0
 * Callers:
 *     sub_140551F78 @ 0x140551F78 (sub_140551F78.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 *     sub_14059388C @ 0x14059388C (sub_14059388C.c)
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 *     sub_14074F220 @ 0x14074F220 (sub_14074F220.c)
 *     sub_1409BABB4 @ 0x1409BABB4 (sub_1409BABB4.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     sub_14080A670 @ 0x14080A670 (sub_14080A670.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  BOOLEAN v2; // bl
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
    if ( ThreadServerSilo )
      v5 = *(_QWORD **)(ThreadServerSilo + 1464);
    else
      v5 = &unk_140D32580;
    v2 = 1;
    *NtProductType = *(PNT_PRODUCT_TYPE)(v5[165] + 16LL);
  }
  else
  {
    v2 = 1;
    if ( MEMORY[0xFFFFF78000000268] )
    {
      *NtProductType = MEMORY[0xFFFFF78000000264];
    }
    else if ( KeGetCurrentIrql() > 1u || (int)sub_14080A670(NtProductType) < 0 )
    {
      *NtProductType = NtProductWinNt;
      return 0;
    }
  }
  return v2;
}
