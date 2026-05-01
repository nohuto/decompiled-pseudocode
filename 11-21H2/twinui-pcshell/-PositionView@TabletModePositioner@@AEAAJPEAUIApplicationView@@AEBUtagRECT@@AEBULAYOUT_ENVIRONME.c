/*
 * XREFs of ?PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONMENT_DETAILS@@PEAUIApplicationViewOperation@@@Z @ 0x180505C48
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::PositionView(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        const RECT *a4,
        struct IApplicationViewOperation *a5)
{
  BOOL v6; // eax
  __int64 v7; // r9
  int v8; // edi
  __int64 v9; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  RECT v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = EqualRect(a3, a4);
  v7 = *(_QWORD *)a5;
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(v7 + 48))(a5, 3LL);
    if ( v8 < 0 )
    {
      v9 = 2728LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
  }
  else
  {
    v13 = *a3;
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, RECT *))(v7 + 56))(a5, &v13);
    if ( v8 < 0 )
    {
      v9 = 2733LL;
      goto LABEL_4;
    }
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 48LL))(a5, 4LL);
    if ( v8 < 0 )
    {
      v9 = 2734LL;
      goto LABEL_4;
    }
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 64LL))(a5, 3LL);
    if ( v8 < 0 )
    {
      v9 = 2735LL;
      goto LABEL_4;
    }
  }
  v11 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)a5 + 72LL))(a5, 1LL);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB2,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
