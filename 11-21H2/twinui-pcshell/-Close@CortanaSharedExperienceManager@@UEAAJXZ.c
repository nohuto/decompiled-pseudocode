/*
 * XREFs of ?Close@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180358510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180359004 (-GetDesktopView@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceView@Cortana@.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Close(CortanaSharedExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  CortanaSharedExperienceManager::GetDesktopView((char *)this - 16, &v6);
  if ( v6 && (v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6), v3 = v2, v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2ED,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 58) + 48LL))(*((_QWORD *)this + 58));
    v3 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return v3;
}
