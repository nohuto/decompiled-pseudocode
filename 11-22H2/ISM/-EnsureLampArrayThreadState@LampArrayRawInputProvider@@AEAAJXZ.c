/*
 * XREFs of ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800627B4
 * Callers:
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x18004B910 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180019E50 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?IsSessionRemote@@YAJPEA_N@Z @ 0x180062B4C (-IsSessionRemote@@YAJPEA_N@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800F87B8 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::EnsureLampArrayThreadState(LampArrayRawInputProvider *this)
{
  int v2; // eax
  HMODULE *v3; // rsi
  const char *v4; // r9
  signed int LastError; // eax
  unsigned int v7; // edi
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
  {
    v2 = IsSessionRemote(&v10);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x51,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v2,
        v8);
    if ( GetSystemMetrics(67) || v10 )
    {
      LampArrayRawInputProvider::Shutdown((ULONG_PTR)this);
      return 0LL;
    }
    if ( *((_QWORD *)this + 22) )
      LampArrayRawInputProvider::Shutdown((ULONG_PTR)this);
  }
  v3 = (HMODULE *)((char *)this + 168);
  if ( !GetModuleHandleExW(4u, (LPCWSTR)LampArrayRawInputProvider::WorkerThreadProcThunk, (HMODULE *)this + 21) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x67,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
             v4);
  _InterlockedIncrement((volatile signed __int32 *)this + 8);
  _InterlockedExchange64(
    (volatile __int64 *)this + 22,
    (__int64)CreateThread(
               0LL,
               0LL,
               (LPTHREAD_START_ROUTINE)LampArrayRawInputProvider::WorkerThreadProcThunk,
               this,
               0,
               0LL));
  if ( *((_QWORD *)this + 22) )
    return 0LL;
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError > 0 )
    v7 = (unsigned __int16)LastError | 0x80070000;
  FreeLibrary(*v3);
  *v3 = 0LL;
  LampArrayRawInputProvider::Release(this);
  return v7;
}
