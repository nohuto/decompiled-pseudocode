/*
 * XREFs of MiLoadImportDll @ 0x140813328
 * Callers:
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 * Callees:
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     MiFreeDriverInitialization @ 0x140703584 (MiFreeDriverInitialization.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MmCallDllInitialize @ 0x1408133E0 (MmCallDllInitialize.c)
 */

__int64 __fastcall MiLoadImportDll(__int64 a1, __int64 a2, int a3, ULONG_PTR *a4, _QWORD *a5)
{
  char v5; // si
  int v7; // edi
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rcx
  ULONG_PTR v11; // [rsp+40h] [rbp-18h] BYREF
  PVOID v12; // [rsp+48h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v5 = a3;
  v7 = MmLoadSystemImageEx(a1, a2, 0LL, 0LL, a3 | 8u, &v11, &v12);
  if ( v7 >= 0 )
  {
    v8 = v11;
    v9 = v11;
    *(_DWORD *)(v11 + 104) |= 0x4000000u;
    v7 = MmCallDllInitialize(v9, &PsLoadedModuleList);
    if ( v7 < 0 )
    {
      MmUnloadSystemImage(v8);
    }
    else
    {
      if ( (v5 & 1) == 0 )
        MiFreeDriverInitialization(v8);
      *a4 = v11;
      *a5 = v12;
    }
  }
  return (unsigned int)v7;
}
