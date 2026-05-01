/*
 * XREFs of ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x180196520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x1801965E4 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

LSTATUS __fastcall VirtualDesktopRegistryHelpers::ReadData(
        VirtualDesktopRegistryHelpers *this,
        bool a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        void **pcbData,
        unsigned __int64 *a7)
{
  void **v7; // rsi
  int v8; // edi
  unsigned __int64 *v9; // r14
  unsigned __int8 v12; // dl
  __int64 v13; // rcx
  HKEY v14; // r12
  LSTATUS result; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  void *pvData; // rbx
  unsigned int ValueW; // eax
  void *v20; // rcx
  unsigned int pdwType; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = pcbData;
  v8 = 0;
  v9 = a7;
  *pcbData = 0LL;
  *v9 = 0LL;
  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
  {
    v16 = -2147024894;
    v17 = 62LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)v16);
    return v16;
  }
  v14 = *(HKEY *)(v13 + 8LL * v12 + 16);
  result = SHRegGetValueW(v14, a3, a4, 0xFFFF, (DWORD *)&a7, 0LL, (DWORD *)&pcbData);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
    return result;
  }
  if ( (_DWORD)a7 != a5 )
  {
    v16 = -2147023267;
    v17 = 70LL;
    goto LABEL_8;
  }
  pvData = CoTaskMemAlloc((unsigned int)pcbData);
  if ( pvData )
  {
    ValueW = SHRegGetValueW(v14, a3, a4, 0xFFFF, 0LL, pvData, (DWORD *)&pcbData);
    if ( ValueW )
    {
      v8 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x4A,
             (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
             (const char *)ValueW,
             pdwType);
    }
    else
    {
      v20 = pvData;
      pvData = 0LL;
      *v7 = v20;
      *v9 = (unsigned int)pcbData;
    }
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)0x8007000ELL);
  }
  CoTaskMemFree(pvData);
  return v8;
}
