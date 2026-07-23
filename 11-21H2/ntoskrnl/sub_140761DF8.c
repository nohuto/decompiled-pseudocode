/*
 * XREFs of sub_140761DF8 @ 0x140761DF8
 * Callers:
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 */

_QWORD *sub_140761DF8()
{
  struct _KTHREAD *v0; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdi
  struct _KTHREAD *v3; // rax
  unsigned __int64 v4; // rsi

  v0 = sub_1406F5B50();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)v0;
  while ( v1 != &PsLoadedModuleList )
  {
    v4 = (unsigned __int64)v1[6];
    if ( (unsigned int)sub_14027B080(v4) == 1 && sub_1402DBF3C(v4) )
    {
      sub_1406F5AF0(v2);
      MmUnloadSystemImage((ULONG_PTR)v1);
      v3 = sub_1406F5B50();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = (__int64)v3;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return sub_1406F5AF0(v2);
}
