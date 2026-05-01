/*
 * XREFs of ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x180766B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d8337cec3c4c00d5a2902422a142059f___ @ 0x180761C20 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_d8337cec3c4c00d5a2902422a142059f___.c)
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x180763A14 (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAltTabViewHost::ViewLoaded(XamlAltTabViewHost *this)
{
  int TickCount64; // eax
  int v3; // edi
  XamlAltTabViewHost *v4; // rbx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // r8
  int v7; // edi
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  XamlAltTabViewHost *v12; // [rsp+40h] [rbp+8h] BYREF

  TickCount64 = GetTickCount64();
  try
  {
    v3 = dword_18098C49C - (TickCount64 - *((_DWORD *)this + 102));
    v4 = (XamlAltTabViewHost *)((char *)this - 120);
    if ( v3 <= 0 )
    {
      XamlAltTabViewHost::DisplayAltTab(v4);
    }
    else
    {
      v12 = v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v10[0] = (__int64)v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
      v10[1] = (__int64)v4;
      v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d8337cec3c4c00d5a2902422a142059f___(
             v5,
             (unsigned int)v3,
             v6,
             (volatile signed __int32 *)v10);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10);
      if ( v7 < 0 )
        XamlAltTabViewHost::DisplayAltTab(v4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x230,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v8);
  }
  return result;
}
