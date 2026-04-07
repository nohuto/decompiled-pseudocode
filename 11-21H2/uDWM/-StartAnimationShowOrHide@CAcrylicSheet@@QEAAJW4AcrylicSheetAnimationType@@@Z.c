/*
 * XREFs of ?StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z @ 0x18009AC60
 * Callers:
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1801045C0 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180018DCC (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180047D5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@PEAUIAnimatedVisual@@@?$vector@PEAUIAnimatedVisual@@V?$allocator@PEAUIAnimatedVisual@@@std@@@std@@QEAAPEAPEAUIAnimatedVisual@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x180099698 (--$_Emplace_reallocate@PEAUIAnimatedVisual@@@-$vector@PEAUIAnimatedVisual@@V-$allocator@PEAUIAni.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009BD40 (-reset@-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAcrylicSheet::StartAnimationShowOrHide(unsigned __int64 a1, int a2)
{
  char v4; // r15
  struct IAnimatedVisual **v5; // r12
  int v6; // eax
  unsigned int v7; // esi
  struct IAnimatedVisual **v8; // rbx
  struct CAnimationEngine *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  struct IAnimatedVisual **v13; // r14
  volatile signed __int32 *v14; // rbx
  int v15; // eax
  CAnimatedTransitionVisual *v16; // rdi
  __int64 v17; // rdx
  int inserted; // eax
  int v19; // eax
  int started; // eax
  int v22; // [rsp+38h] [rbp-59h]
  struct IAnimatedVisual **v23[2]; // [rsp+40h] [rbp-51h] BYREF
  struct IAnimatedVisual **v24; // [rsp+50h] [rbp-41h]
  CAnimatedTransitionVisual *v25; // [rsp+58h] [rbp-39h] BYREF
  struct tagPOINT v26; // [rsp+60h] [rbp-31h] BYREF
  CAnimationEngine *v27; // [rsp+68h] [rbp-29h]
  unsigned __int64 v28; // [rsp+70h] [rbp-21h] BYREF
  int v29; // [rsp+78h] [rbp-19h]
  unsigned int v30; // [rsp+7Ch] [rbp-15h]
  __int16 v31; // [rsp+80h] [rbp-11h]
  volatile signed __int32 *v32; // [rsp+88h] [rbp-9h]
  _QWORD v33[2]; // [rsp+90h] [rbp-1h] BYREF
  char v34; // [rsp+A0h] [rbp+Fh]
  struct CAnimationEngine *v35; // [rsp+A8h] [rbp+17h]
  struct tagRECT rc; // [rsp+B0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v33[1] = a1;
  v4 = 1;
  v34 = 1;
  CAcrylicSheet::StopAnimations((CAcrylicSheet *)a1);
  *(_OWORD *)v23 = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset(a1 + 352);
  v6 = CVisual::Create((struct CVisual **)(a1 + 352));
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x172,
      (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v6);
    v8 = v23[0];
    goto LABEL_42;
  }
  v9 = CDesktopManager::AcquireAnimationEngine();
  v27 = v9;
  v35 = v9;
  if ( v9 )
  {
    v26.x = -32000;
    v26.y = -32000;
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v7 = -2147024809;
        v10 = 2147942487LL;
        v11 = 381LL;
        goto LABEL_12;
      }
      v22 = 2;
    }
    else
    {
      v22 = 1;
    }
    v12 = CVisual::RenderRecursive((CVisual *)a1);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v29 = *(_DWORD *)(a1 + 80);
      v28 = a1 + 32;
      v30 = -1;
      v31 = 0;
      v13 = v23[1];
      while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v28) )
      {
        v14 = *(volatile signed __int32 **)(*(_QWORD *)(v28 + 16) + 8LL * v30);
        v32 = v14;
        if ( v14 )
        {
          _InterlockedAdd(v14 + 2, 1u);
          v5 = v24;
          v13 = v23[1];
          v14 = v32;
        }
        v25 = 0LL;
        v15 = CAnimatedTransitionVisual::Create(&v25);
        v7 = v15;
        v16 = v25;
        if ( v15 < 0 )
        {
          v17 = 398LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
            (const char *)(unsigned int)v15);
          if ( v16 )
            CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v16 + 8));
          if ( v14 )
            CBaseObject::Release((CBaseObject *)v14);
LABEL_32:
          v9 = v27;
LABEL_35:
          v8 = v23[0];
LABEL_38:
          v4 = v34;
          goto LABEL_40;
        }
        rc = *(struct tagRECT *)(a1 + 304);
        OffsetRect(&rc, -rc.left, -rc.top);
        v15 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v16, (struct CVisual *)v14, 1, &rc);
        v7 = v15;
        if ( v15 < 0 )
        {
          v17 = 403LL;
          goto LABEL_26;
        }
        CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v16, &rc);
        *(struct tagRECT *)((char *)v16 + 872) = rc;
        CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v16 + 8), 4096);
        *((_DWORD *)v16 + 184) = 102;
        *((_DWORD *)v16 + 185) = v22;
        VisualCollection::InsertRelative(
          (VisualCollection *)(*(_QWORD *)(a1 + 352) + 32LL),
          (CAnimatedTransitionVisual *)((char *)v16 + 8),
          0LL,
          0,
          1);
        v33[0] = v16;
        if ( v13 == v5 )
        {
          std::vector<IAnimatedVisual *>::_Emplace_reallocate<IAnimatedVisual *>((__int64)v23, v13, v33);
          v5 = v24;
          v13 = v23[1];
        }
        else
        {
          *v13++ = v16;
          v23[1] = v13;
        }
        CVisual::SetOffset((struct tagPOINT *)v14, &v26);
        CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v16 + 8));
        if ( v14 )
          CBaseObject::Release((CBaseObject *)v14);
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(a1 + 32),
                   *(struct CVisual **)(a1 + 352),
                   0LL,
                   0,
                   1);
      v7 = inserted;
      if ( inserted < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A0,
          (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
          (const char *)(unsigned int)inserted);
        goto LABEL_32;
      }
      v9 = v27;
      v19 = CAnimationEngine::RegisterForAnimationCompleteNotification(
              v27,
              (struct IAnimationListener *)((a1 + 288) & ((unsigned __int128)-(__int128)a1 >> 64)));
      v7 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A1,
          (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
          (const char *)(unsigned int)v19);
        goto LABEL_35;
      }
      v8 = v23[0];
      started = CAnimationEngine::ScheduleStartAnimation(v9, 102, v23[0], v13 - v23[0], (unsigned int *)(a1 + 488));
      v7 = started;
      if ( started < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A5,
          (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
          (const char *)(unsigned int)started);
        goto LABEL_38;
      }
      v4 = 0;
      v7 = 0;
      goto LABEL_40;
    }
    v10 = (unsigned int)v12;
    v11 = 385LL;
  }
  else
  {
    v7 = -2147024882;
    v10 = 2147942414LL;
    v11 = 374LL;
  }
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)v10);
  v8 = v23[0];
LABEL_40:
  if ( v9 )
    CAnimationEngine::Release(v9);
LABEL_42:
  if ( v8 )
    std::_Deallocate<16,0>(v8, 8 * (v5 - v8));
  if ( v4 )
    CAcrylicSheet::StopAnimations((CAcrylicSheet *)a1);
  return v7;
}
