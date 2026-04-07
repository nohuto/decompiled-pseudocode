/*
 * XREFs of ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280
 * Callers:
 *     wil::details::lambda_call__lambda_045db25f8a47e5f147b6debc0b2d1fdb___::_lambda_call__lambda_045db25f8a47e5f147b6debc0b2d1fdb___ @ 0x1800998F0 (wil--details--lambda_call__lambda_045db25f8a47e5f147b6debc0b2d1fdb___--_lambda_call__lambda_045d.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x180099970 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ?OnAnimationComplete@CAcrylicSheet@@UEAAJI@Z @ 0x18009A7A0 (-OnAnimationComplete@CAcrylicSheet@@UEAAJI@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x18009AA6C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z @ 0x18009AC60 (-StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z.c)
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z @ 0x18009B0A8 (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@@Z.c)
 *     ?StopArrangementAnimation@CAcrylicSheet@@UEAAJXZ @ 0x18009B4C0 (-StopArrangementAnimation@CAcrylicSheet@@UEAAJXZ.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18009B538 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18009B848 (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180014410 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180014600 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?MovePrevious@VisualCollectionIterator@@QEAA_NXZ @ 0x180015084 (-MovePrevious@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___ @ 0x1800628C4 (wil--details--lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___--_lambda_call__lambda_b6ad.c)
 *     ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800998C4 (--1-$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Hide@CAcrylicSheet@@UEAAXXZ @ 0x18009A670 (-Hide@CAcrylicSheet@@UEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009BD40 (-reset@-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAcrylicSheet::StopAnimations(CAcrylicSheet *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al
  __int64 v5; // rax
  char v6; // al
  CAnimationEngine *v7; // rax
  CAnimationEngine *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rcx
  struct tagPOINT *v14; // rbx
  CAcrylicSheet *v16; // [rsp+20h] [rbp-30h] BYREF
  char v17; // [rsp+28h] [rbp-28h]
  char *v18; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+38h] [rbp-18h]
  unsigned int v20; // [rsp+3Ch] [rbp-14h]
  __int16 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct tagPOINT v23; // [rsp+80h] [rbp+30h] BYREF
  CAnimationEngine *v24; // [rsp+88h] [rbp+38h] BYREF
  struct tagPOINT *v25; // [rsp+90h] [rbp+40h]

  v16 = this;
  v17 = 1;
  v2 = *((_QWORD *)this + 71);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    CDesktopManager::s_fTimelineDirty = v4;
    *((_QWORD *)this + 71) = 0LL;
  }
  v5 = *((_QWORD *)this + 73);
  if ( v5 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 145) - 0.0) & _xmm) > 0.0000011920929
      || (CAcrylicSheet::Hide((CAcrylicSheet *)((char *)this + 296)), (v5 = *((_QWORD *)this + 73)) != 0) )
    {
      v3 = (*(_DWORD *)(v5 + 8))-- == 1;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v3 )
        v6 = 1;
      CDesktopManager::s_fTimelineDirty = v6;
      *((_QWORD *)this + 73) = 0LL;
    }
  }
  if ( *((_DWORD *)this + 122) == -1 )
    goto LABEL_33;
  v7 = CDesktopManager::AcquireAnimationEngine();
  v8 = v7;
  v24 = v7;
  if ( !v7 )
  {
LABEL_18:
    v13 = *((_QWORD *)this + 44);
    if ( v13 )
    {
      v9 = VisualCollection::RemoveAll((VisualCollection *)(v13 + 32));
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 949LL;
        goto LABEL_23;
      }
      v9 = VisualCollection::Remove((CAcrylicSheet *)((char *)this + 32), *((struct CVisual **)this + 44));
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 950LL;
        goto LABEL_23;
      }
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset((char *)this + 352);
    }
    v19 = *((_DWORD *)this + 20);
    v18 = (char *)this + 32;
    v20 = -1;
    v21 = 0;
    if ( VisualCollectionIterator::MovePrevious((VisualCollectionIterator *)&v18) )
    {
      v23.x = 0;
      v23.y = 0;
      do
      {
        v14 = *(struct tagPOINT **)(*((_QWORD *)v18 + 2) + 8LL * v20);
        v25 = v14;
        if ( v14 )
        {
          _InterlockedAdd((volatile signed __int32 *)&v14[1], 1u);
          v14 = v25;
        }
        CVisual::SetOffset(v14, &v23);
        if ( v14 )
          CBaseObject::Release((CBaseObject *)v14);
      }
      while ( VisualCollectionIterator::MovePrevious((VisualCollectionIterator *)&v18) );
    }
    *((_DWORD *)this + 122) = -1;
    wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(&v24);
LABEL_33:
    v10 = 0;
    goto LABEL_34;
  }
  v9 = CAnimationEngine::UnregisterForAnimationCompleteNotification(v7, (CAcrylicSheet *)((char *)this + 288));
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_DWORD *)this + 122);
    if ( v12 != -1 )
    {
      v9 = CAnimationEngine::ScheduleStopAnimation(v8, v12);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 943LL;
        goto LABEL_23;
      }
    }
    goto LABEL_18;
  }
  v11 = 939LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v9);
  wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(&v24);
LABEL_34:
  wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___((__int64)&v16);
  return v10;
}
