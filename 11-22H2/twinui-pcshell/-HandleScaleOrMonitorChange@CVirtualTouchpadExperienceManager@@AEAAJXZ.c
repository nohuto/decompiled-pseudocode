/*
 * XREFs of ?HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1804530F8
 * Callers:
 *     ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180453AD0 (-OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?ScaleChanged@CVirtualTouchpadExperienceManager@@UEAAJI@Z @ 0x180454300 (-ScaleChanged@CVirtualTouchpadExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___ @ 0x180451B70 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::HandleScaleOrMonitorChange(
        CVirtualTouchpadExperienceManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // r8
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVirtualTouchpadExperienceManager *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 190) == 2 )
  {
    v10 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    *(_QWORD *)v7 = this;
    v8[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
    if ( !*((_BYTE *)this + 808) )
    {
      *((_BYTE *)this + 808) = 1;
      v5 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___(
             v3,
             v2,
             v4,
             v7);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x33F,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        *((_BYTE *)this + 808) = 0;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  }
  return 0LL;
}
