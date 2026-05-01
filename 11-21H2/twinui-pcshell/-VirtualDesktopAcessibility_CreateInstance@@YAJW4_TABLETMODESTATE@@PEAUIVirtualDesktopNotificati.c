/*
 * XREFs of ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DA494
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DAAF4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopAccessi.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ @ 0x1801536E4 (-InternalRelease@-$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18015F950 (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 VirtualDesktopAcessibility_CreateInstance(int a1, ...)
{
  _QWORD *v1; // rdi
  int v2; // eax
  int CanCastTo; // ebx
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rcx
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
  __int64 v22; // [rsp+78h] [rbp+48h]
  _QWORD *v23; // [rsp+80h] [rbp+50h] BYREF
  va_list va4; // [rsp+80h] [rbp+50h]
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
  v22 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v23 = va_arg(va5, _QWORD *);
  v13 = a1;
  v1 = v23;
  *v23 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease((_QWORD **)va4);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAcessibility,VirtualDesktopAcessibility,enum _TABLETMODESTATE &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
         (unsigned int)va4,
         (unsigned int)&v13,
         (unsigned int)va,
         (unsigned int)va1,
         (__int64)va2,
         (__int64)va3);
  CanCastTo = v2;
  if ( v2 < 0 )
  {
    v9 = (unsigned int)v2;
    v10 = 175LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)v9);
    goto LABEL_8;
  }
  *v1 = 0LL;
  if ( !InlineIsEqualGUID(&GUID_06ca098c_9621_4172_8a11_a49c3c499839, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v4, &GUID_cd403e52_deed_4c13_b437_b98380f2b1e8) )
    {
      *v1 = v23;
    }
    else
    {
      if ( !InlineIsEqualGUID(v5, &GUID_9975b71d_0a84_4909_bdde_b455bbfa55c6) )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                      v6 + 8,
                      v7,
                      v1);
        if ( CanCastTo < 0 )
          goto LABEL_7;
        goto LABEL_6;
      }
      *v1 = v6;
    }
    CanCastTo = 0;
LABEL_6:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
    goto LABEL_7;
  }
  v11 = v23;
  *v1 = v23;
  (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
  CanCastTo = 0;
LABEL_7:
  if ( CanCastTo < 0 )
  {
    v9 = (unsigned int)CanCastTo;
    v10 = 176LL;
    goto LABEL_15;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease((_QWORD **)va4);
  return (unsigned int)CanCastTo;
}
