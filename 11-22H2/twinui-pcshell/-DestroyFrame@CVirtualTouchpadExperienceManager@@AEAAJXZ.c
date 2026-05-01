/*
 * XREFs of ?DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801AEB3C
 * Callers:
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1801AEAB0 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180453CC0 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::DestroyFrame(CVirtualTouchpadExperienceManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 93) )
  {
    v6 = RevokeScaleChangeNotificationsForWindow(*((_QWORD *)this + 44));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x359,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    *((_DWORD *)this + 93) = 0;
  }
  if ( *((_DWORD *)this + 92) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 48LL))(*((_QWORD *)this + 42));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    *((_DWORD *)this + 92) = 0;
  }
  v2 = (__int64 *)((char *)this + 344);
  v10 = 0LL;
  v3 = 0LL;
  if ( &v10 != (__int64 *)((char *)this + 344) )
  {
    v10 = *v2;
    v4 = v10;
    *v2 = 0LL;
    v3 = v4;
  }
  if ( v3 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 32LL))(*((_QWORD *)this + 42));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x367,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  *((_DWORD *)this + 190) = 4;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  return 0LL;
}
