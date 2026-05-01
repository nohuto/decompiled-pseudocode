/*
 * XREFs of ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x1801607C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18008EA88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x180160884 (-_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z.c)
 */

LSTATUS __fastcall VirtualDesktopRegistryHelpers::ReadData(
        VirtualDesktopRegistryHelpers *this,
        bool a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        void **pcbData,
        unsigned __int64 *pdwType)
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
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = pcbData;
  v8 = 0;
  v9 = pdwType;
  *pcbData = 0LL;
  *v9 = 0LL;
  if ( !VirtualDesktopRegistryHelpers::_IsKeyAvailable(this, a2) )
  {
    v16 = -2147024894;
    v17 = 61LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)v16);
    return v16;
  }
  v14 = *(HKEY *)(v13 + 8LL * v12 + 16);
  result = SHRegGetValueW(v14, a3, a4, 0xFFFF, (DWORD *)&pdwType, 0LL, (DWORD *)&pcbData);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
    return result;
  }
  if ( (_DWORD)pdwType != a5 )
  {
    v16 = -2147023267;
    v17 = 69LL;
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
             (void *)0x49,
             (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
             (const char *)ValueW);
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
      (void *)0x48,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)0x8007000ELL);
  }
  CoTaskMemFree(pvData);
  return v8;
}
