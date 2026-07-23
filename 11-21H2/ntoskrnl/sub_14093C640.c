/*
 * XREFs of sub_14093C640 @ 0x14093C640
 * Callers:
 *     sub_14093C164 @ 0x14093C164 (sub_14093C164.c)
 *     sub_14093CFC8 @ 0x14093CFC8 (sub_14093CFC8.c)
 * Callees:
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_14080051C @ 0x14080051C (sub_14080051C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14093C640(__int64 a1)
{
  unsigned int i; // edi
  unsigned __int64 *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 888) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 880); ++i )
    {
      v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 888) + 16LL * i);
      if ( *v3 )
        sub_14080051C(*v3);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 888), 0x706D644Cu);
    *(_QWORD *)(a1 + 888) = 0LL;
    *(_DWORD *)(a1 + 880) = 0;
  }
}
