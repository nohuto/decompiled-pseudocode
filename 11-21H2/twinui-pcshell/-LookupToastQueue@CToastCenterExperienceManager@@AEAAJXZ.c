/*
 * XREFs of ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6798
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6424 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803643C0 (-OnViewDestroyed@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a72360de32f5be54d81fefae94be82a6___ @ 0x180196208 (Windows--Internal--ComTaskPool--QueueTask__lambda_a72360de32f5be54d81fefae94be82a6___.c)
 */

__int64 __fastcall CToastCenterExperienceManager::LookupToastQueue(CToastCenterExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CToastCenterExperienceManager *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  v1 = Windows::Internal::ComTaskPool::QueueTask__lambda_a72360de32f5be54d81fefae94be82a6___(this, &v5);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
