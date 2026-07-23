/*
 * XREFs of sub_1407623F0 @ 0x1407623F0
 * Callers:
 *     sub_1407623BC @ 0x1407623BC (sub_1407623BC.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall sub_1407623F0(ULONG_PTR BugCheckParameter2)
{
  void *v1; // rdi
  __int16 v3; // ax
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  int v7; // eax
  int (*ExportedRoutineByName)(void); // rax
  __int64 v9; // rdx

  v1 = *(void **)(BugCheckParameter2 + 48);
  if ( (unsigned int)sub_14027B080((unsigned __int64)v1) == 1 )
  {
    v5 = sub_1402DBF3C((unsigned __int64)v1);
    v6 = v5;
    if ( !v5 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
      if ( (*(_DWORD *)(v9 + 4) & 2) == 0 )
        KeBugCheckEx(0x1Au, 0x2200uLL, BugCheckParameter2, (ULONG_PTR)v1, *(unsigned int *)(v9 + 8));
      return 0LL;
    }
    v7 = *((_DWORD *)v5 + 15);
    if ( v7 != 1 )
    {
      *((_DWORD *)v6 + 15) = v7 - 1;
      return 0LL;
    }
  }
  else
  {
    v3 = *(_WORD *)(BugCheckParameter2 + 108);
    if ( v3 != 1 )
    {
      *(_WORD *)(BugCheckParameter2 + 108) = v3 - 1;
      return 0LL;
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 196) & 0x20) == 0 )
  {
    ExportedRoutineByName = (int (*)(void))RtlFindExportedRoutineByName(v1, "DllUnload");
    if ( !ExportedRoutineByName || ExportedRoutineByName() < 0 )
      return 0LL;
  }
  return 1LL;
}
