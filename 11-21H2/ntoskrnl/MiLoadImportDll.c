/*
 * XREFs of MiLoadImportDll @ 0x14082ECCC
 * Callers:
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 * Callees:
 *     MiFreeDriverInitialization @ 0x14075F194 (MiFreeDriverInitialization.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     MmCallDllInitialize @ 0x14082ED84 (MmCallDllInitialize.c)
 */

__int64 __fastcall MiLoadImportDll(__int64 a1, __int64 a2, int a3, ULONG_PTR *a4, _QWORD *a5)
{
  char v5; // si
  int v7; // edi
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  v12 = 0LL;
  v5 = a3;
  v7 = MmLoadSystemImageEx(a1, a2, 0LL, 0LL, a3 | 8u, &BugCheckParameter2, &v12);
  if ( v7 >= 0 )
  {
    v8 = BugCheckParameter2;
    v9 = BugCheckParameter2;
    *(_DWORD *)(BugCheckParameter2 + 104) |= 0x4000000u;
    v7 = MmCallDllInitialize(v9, &PsLoadedModuleList);
    if ( v7 < 0 )
    {
      MmUnloadSystemImage(v8);
    }
    else
    {
      if ( (v5 & 1) == 0 )
        MiFreeDriverInitialization(v8);
      *a4 = BugCheckParameter2;
      *a5 = v12;
    }
  }
  return (unsigned int)v7;
}
