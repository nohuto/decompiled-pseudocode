/*
 * XREFs of _lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator() @ 0x1804521EC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___::Run @ 0x180454100 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x180452D10 (-ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x180452EB4 (-GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18045509C (-UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_::operator()(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  HMONITOR v3; // rax
  int FramePosition; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h] BYREF
  char v10; // [rsp+40h] [rbp-20h]
  struct tagRECT v11; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v1 = *a1;
  v8[0] = a1[1];
  v2 = v8[0];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = v1;
  v9 = v2;
  v8[0] = 0LL;
  v10 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
  if ( *(_DWORD *)(v1 + 760) != 2 )
    goto LABEL_9;
  v3 = MonitorFromWindow(*(HWND *)(v1 + 352), 2u);
  FramePosition = CVirtualTouchpadExperienceManager::ComputeDesiredSizeForMonitor(
                    (CVirtualTouchpadExperienceManager *)v1,
                    v3);
  v5 = FramePosition;
  if ( FramePosition >= 0 )
  {
    FramePosition = CVirtualTouchpadExperienceManager::GetFramePosition((CVirtualTouchpadExperienceManager *)v1, &v11);
    v5 = FramePosition;
    if ( FramePosition < 0 )
    {
      v6 = 820LL;
      goto LABEL_8;
    }
    *(_DWORD *)(v1 + 320) = v11.left + *(_DWORD *)(v1 + 300) / 2;
    *(_DWORD *)(v1 + 324) = v11.top + *(_DWORD *)(v1 + 304) / 2;
    FramePosition = CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize((CVirtualTouchpadExperienceManager *)v1);
    v5 = FramePosition;
    if ( FramePosition < 0 )
    {
      v6 = 823LL;
      goto LABEL_8;
    }
LABEL_9:
    v5 = 0;
    goto LABEL_10;
  }
  v6 = 818LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)FramePosition);
LABEL_10:
  v10 = 0;
  *(_BYTE *)(v1 + 808) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return v5;
}
