/*
 * XREFs of ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x1805FDB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d8337cec3c4c00d5a2902422a142059f___ @ 0x1801E8AD8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_d8337cec3c4c00d5a2902422a142059f___.c)
 *     _lambda_d8337cec3c4c00d5a2902422a142059f_::_lambda_d8337cec3c4c00d5a2902422a142059f_ @ 0x1801E8C48 (_lambda_d8337cec3c4c00d5a2902422a142059f_--_lambda_d8337cec3c4c00d5a2902422a142059f_.c)
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x1801E8D1C (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 *     ??$?0UIUnknown@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x1802DB060 (--$-0UIUnknown@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAltTabViewHost::ViewLoaded(XamlAltTabViewHost *this)
{
  int TickCount64; // eax
  __int64 v3; // rdx
  signed int v4; // ebx
  XamlAltTabViewHost *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  TickCount64 = GetTickCount64();
  try
  {
    v4 = dword_1807B1DE8 - (TickCount64 - *((_DWORD *)this + 106));
    v5 = (XamlAltTabViewHost *)((char *)this - 120);
    if ( v4 <= 0 )
    {
      XamlAltTabViewHost::DisplayAltTab(v5, v3);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown>(&v15, (__int64)v5);
      v6 = lambda_d8337cec3c4c00d5a2902422a142059f_::_lambda_d8337cec3c4c00d5a2902422a142059f_(v13, &v15, (__int64)v5);
      v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d8337cec3c4c00d5a2902422a142059f___(
             v7,
             v4,
             v8,
             (volatile signed __int32 *)v6);
      CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)v13);
      if ( v9 < 0 )
        XamlAltTabViewHost::DisplayAltTab(v5, v10);
      CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)&v15);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F4,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v11);
  }
  return result;
}
