/*
 * XREFs of sub_1409AD704 @ 0x1409AD704
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140A9B0FC @ 0x140A9B0FC (sub_140A9B0FC.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1406399B4 @ 0x1406399B4 (sub_1406399B4.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1409F8DD8 @ 0x1409F8DD8 (sub_1409F8DD8.c)
 */

__int64 __fastcall sub_1409AD704(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  ULONG_PTR v4; // rax
  unsigned int v5; // ebx

  v4 = sub_14066B3D8(a1);
  v5 = 0;
  if ( v4 )
  {
    if ( a2 )
      v5 = sub_1409F8DD8(v4, *(unsigned int *)(a2 + 4));
    else
      sub_1406399B4(v4);
    sub_1402AD030(a1 + 139);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v5;
}
