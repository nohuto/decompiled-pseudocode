/*
 * XREFs of ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x18049D468
 * Callers:
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x18049BDDC (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1801A8F88 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___ @ 0x18049B6E0 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_7900d5c1cfc51d603dc477285f886.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppThumbnailWindow::SetRectAndCallback(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  unsigned int AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v16; // [rsp+38h] [rbp-21h] BYREF
  std::_Ref_count_base *v17; // [rsp+40h] [rbp-19h]
  __int64 v18; // [rsp+48h] [rbp-11h] BYREF
  std::_Ref_count_base *v19; // [rsp+50h] [rbp-9h]
  char v20; // [rsp+58h] [rbp-1h]
  __int64 v21; // [rsp+60h] [rbp+7h] BYREF
  std::_Ref_count_base *v22; // [rsp+68h] [rbp+Fh]
  char v23; // [rsp+70h] [rbp+17h]
  _QWORD v24[2]; // [rsp+78h] [rbp+1Fh] BYREF
  char v25; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  if ( *a2 >= a2[2] || a2[1] >= a2[3] )
  {
    AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = -2147467259;
    v10 = 375LL;
    goto LABEL_18;
  }
  if ( !a3 )
  {
    AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = -2147024882;
    v10 = 376LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723);
    return AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723;
  }
  std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this(a1, &v16);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v21,
    &v16);
  v23 = a5;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 120));
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v18,
    &v21);
  v20 = a5;
  *(_QWORD *)(a1 + 120) = 0LL;
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v24,
    &v18);
  v25 = a5;
  AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___(0LL, (__int64)v24, v11, (_QWORD *)(a1 + 120));
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  if ( (AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 & 0x80000000) == 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)a3 + 24LL))(
            a3,
            a2,
            a4,
            *(_QWORD *)(a1 + 120));
    AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = v14;
    if ( v14 >= 0 )
    {
      AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723 = 0;
      goto LABEL_13;
    }
    v12 = (unsigned int)v14;
    v13 = 390LL;
  }
  else
  {
    v12 = AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723;
    v13 = 389LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
    (const char *)v12);
LABEL_13:
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  return AnimationHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723;
}
