/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18006C600
 * Callers:
 *     ??$MakeAndInitialize@VActivityToastNotificationCallback@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18006CD9C (--$MakeAndInitialize@VActivityToastNotificationCallback@ToastNotification@@UIUnknown@@$$V@Detail.c)
 *     ??R_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEBA@XZ @ 0x18006E874 (--R_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEBA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070AA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180070AA0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002FE80 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     InlineIsEqualGUID @ 0x180037A04 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>>(
        __int64 a1,
        struct _GUID *a2,
        _QWORD *a3)
{
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rdx
  _DWORD *v8; // rcx
  void **v9; // r8
  __int64 v10; // r9
  int CanCastTo; // ebx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  void *v14; // r9
  __int64 v15; // r9
  int v16; // r10d

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v8, v7) )
    {
LABEL_4:
      *v9 = (void *)v10;
      CanCastTo = 0;
      goto LABEL_14;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), a2, v9, v10);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
        goto LABEL_4;
      if ( InlineIsEqualGUID(v12, &GUID_53e31837_6600_4a81_9395_75cffe746f94) )
      {
        *v9 = v14;
LABEL_9:
        CanCastTo = 0;
        goto LABEL_13;
      }
      if ( InlineIsEqualGUID(v13, &GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a) )
      {
        *v9 = (void *)(v15 + 8);
        goto LABEL_9;
      }
      CanCastTo = v16;
    }
LABEL_13:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_14:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)CanCastTo;
  }
  *v5 = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return 0LL;
}
