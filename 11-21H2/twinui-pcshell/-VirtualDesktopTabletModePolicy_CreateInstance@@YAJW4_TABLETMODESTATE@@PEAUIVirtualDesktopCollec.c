/*
 * XREFs of ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110EB4
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModePolicy@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180112120 (--$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualD.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C908 (-InternalRelease@-$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 VirtualDesktopTabletModePolicy_CreateInstance(int a1, ...)
{
  void **v1; // rdi
  int v2; // eax
  int v3; // ebx
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _DWORD *v6; // rcx
  const struct _GUID *v7; // r9
  int CanCastTo; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  void **v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  va_list va; // [rsp+58h] [rbp+28h]
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF
  va_list va1; // [rsp+60h] [rbp+30h]
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF
  va_list va2; // [rsp+68h] [rbp+38h]
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  va_list va3; // [rsp+70h] [rbp+40h]
  __int64 v23; // [rsp+78h] [rbp+48h]
  void **v24; // [rsp+80h] [rbp+50h] BYREF
  va_list va4; // [rsp+80h] [rbp+50h]
  va_list va5; // [rsp+88h] [rbp+58h] BYREF

  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  v23 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v24 = va_arg(va5, void **);
  v14 = a1;
  v1 = v24;
  *v24 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopAnimationSyncNotifications>::InternalRelease((void ***)va4);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopTabletModePolicy,VirtualDesktopTabletModePolicy,enum _TABLETMODESTATE &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
         (unsigned int)va4,
         (unsigned int)&v14,
         (unsigned int)va,
         (unsigned int)va1,
         (__int64)va2,
         (__int64)va3);
  v3 = v2;
  if ( v2 < 0 )
  {
    v10 = (unsigned int)v2;
    v11 = 153LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
      (const char *)v10);
    goto LABEL_8;
  }
  *v1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_1a147df6_551e_4e5a_b227_8a9ad37f7f78, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v24;
    *v1 = v24;
    (*((void (__fastcall **)(void **))*v12 + 1))(v12);
    v3 = 0;
    goto LABEL_7;
  }
  if ( InlineIsEqualGUID(v4, v5) || InlineIsEqualGUID(v6, &GUID_56b32065_0bb3_42e2_975d_a559de1316e8) )
  {
    *v1 = v24;
    v3 = 0;
LABEL_10:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v1 + 8LL))(*v1);
    goto LABEL_7;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v24 + 1), v7, v1);
  v3 = -2147467262;
  if ( CanCastTo != -2147467262 )
  {
    v3 = CanCastTo;
    if ( CanCastTo >= 0 )
      goto LABEL_10;
  }
LABEL_7:
  if ( v3 < 0 )
  {
    v10 = (unsigned int)v3;
    v11 = 154LL;
    goto LABEL_14;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<VirtualDesktopAnimationSyncNotifications>::InternalRelease((void ***)va4);
  return (unsigned int)v3;
}
