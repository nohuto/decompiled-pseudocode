/*
 * XREFs of RtlHpHeapManagerStart @ 0x14038851C
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14038873C (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlpHpMetadataHeapCreate @ 0x1403885C0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x140388B78 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x1403898D4 (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(union _RTL_RUN_ONCE *a1)
{
  __int64 result; // rax
  __int128 Parameter; // [rsp+30h] [rbp-18h] BYREF

  a1[1].Value = 0xFFFF800000000000uLL;
  result = RtlCSparseBitmapStart(&a1[2], 0x10000000LL, 1LL);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((int)a1 + 88, 1, 1, 0, 0x7FFFFFFFFFFFLL);
    if ( (int)result >= 0 )
    {
      Parameter = 0LL;
      *(_WORD *)((char *)&Parameter + 1) = 1;
      LOBYTE(Parameter) = 3;
      RtlpHpMetadataHeapCreate(a1 + 1814, &Parameter, 0LL);
      return 0LL;
    }
  }
  return result;
}
