/*
 * XREFs of ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180515F74
 * Callers:
 *     ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18014A300 (-WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 *     _lambda_31c7893660c14ce258f6c87fb5d11c82_::operator() @ 0x18020732C (_lambda_31c7893660c14ce258f6c87fb5d11c82_--operator().c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$HostedPosSet@URect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAURect@Foundation@Windows@@@Z @ 0x1802DA056 (--$HostedPosSet@URect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAURect.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::SetHostedPos(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrame *a3,
        const struct tagRECT *a4)
{
  struct IApplicationFrame *v5; // r9
  __int64 (__fastcall *v7)(struct IApplicationFrameWrapper *, struct IApplicationFrame **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // kr00_8
  __int64 v12; // kr08_8
  int v13; // eax
  __int128 v15; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IApplicationFrame *v17; // [rsp+50h] [rbp+20h] BYREF
  int v18; // [rsp+60h] [rbp+30h] BYREF
  int v19; // [rsp+64h] [rbp+34h]

  v5 = a3;
  v17 = 0LL;
  if ( !a3 )
  {
    v7 = *(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, struct IApplicationFrame **))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
    v8 = v7(a2, &v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1175LL;
      goto LABEL_9;
    }
    v5 = v17;
  }
  v11 = a4->right - a4->left;
  v18 = (HIDWORD(v11) ^ v11) - HIDWORD(v11);
  v12 = a4->bottom - a4->top;
  v19 = (HIDWORD(v12) ^ v12) - HIDWORD(v12);
  v13 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, int *, _QWORD))(*(_QWORD *)v5 + 184LL))(v5, &v18, 0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x49C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, const struct tagRECT *))(*(_QWORD *)a2 + 64LL))(
         a2,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *(float *)&v15 = (float)a4->left;
    *((float *)&v15 + 1) = (float)a4->top;
    *((float *)&v15 + 2) = (float)(a4->right - a4->left);
    *((float *)&v15 + 3) = (float)(a4->bottom - a4->top);
    TouchKeyboardExperienceTelemetryLogger::HostedPosSet<Windows::Foundation::Rect>(&v15);
    v9 = 0;
    goto LABEL_11;
  }
  v10 = 1181LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  return v9;
}
