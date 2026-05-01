/*
 * XREFs of ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180195928
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800FAD6C (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModePolicy@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013CE58 (--$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualD.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801402AC (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 VirtualDesktopTabletModePolicy_CreateInstance(int a1, ...)
{
  void **v1; // rdi
  int v2; // eax
  int CanCastTo; // ebx
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _DWORD *v6; // rcx
  const struct _GUID *v7; // r9
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF
  va_list va; // [rsp+58h] [rbp+28h]
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  va_list va1; // [rsp+60h] [rbp+30h]
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  va_list va2; // [rsp+68h] [rbp+38h]
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF
  va_list va3; // [rsp+70h] [rbp+40h]
  __int64 *v22; // [rsp+78h] [rbp+48h] BYREF
  va_list va4; // [rsp+78h] [rbp+48h]
  void **v24; // [rsp+80h] [rbp+50h]
  va_list va5; // [rsp+88h] [rbp+58h] BYREF

  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v20 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  va_arg(va5, _QWORD);
  v24 = va_arg(va5, void **);
  v13 = a1;
  v1 = v24;
  *v24 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)va4);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopTabletModePolicy,VirtualDesktopTabletModePolicy,enum _TABLETMODESTATE &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
         (__int64 **)va4,
         &v13,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2,
         (__int64 *)va3);
  CanCastTo = v2;
  if ( v2 < 0 )
  {
    v9 = (unsigned int)v2;
    v10 = 152LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
      (const char *)v9);
    goto LABEL_12;
  }
  *v1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_1a147df6_551e_4e5a_b227_8a9ad37f7f78, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v22;
    *v1 = v22;
    (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
    CanCastTo = 0;
    goto LABEL_11;
  }
  if ( InlineIsEqualGUID(v4, v5) || InlineIsEqualGUID(v6, &GUID_56b32065_0bb3_42e2_975d_a559de1316e8) )
  {
    *v1 = v22;
    CanCastTo = 0;
LABEL_10:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v1 + 8LL))(*v1);
    goto LABEL_11;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v22 + 1), v7, v1);
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
  if ( CanCastTo >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( CanCastTo < 0 )
  {
    v9 = (unsigned int)CanCastTo;
    v10 = 153LL;
    goto LABEL_16;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)va4);
  return (unsigned int)CanCastTo;
}
