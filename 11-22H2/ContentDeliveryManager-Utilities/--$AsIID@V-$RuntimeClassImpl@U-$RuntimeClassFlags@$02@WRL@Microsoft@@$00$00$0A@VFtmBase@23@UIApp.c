/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIAppInstallInfoRecord@ContentManagement@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIAppInstallInfoRecord@ContentManagement@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18004666C
 * Callers:
 *     ??$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180047608 (--$MakeAndInitialize@VAppInstallInfoRecordImpl@ContentManagement@@UIInspectable@@$$V@Details@WRL.c)
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004AD80 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002FE80 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     InlineIsEqualGUID @ 0x180037A04 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>>(
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
  __int64 v13; // r9
  int v14; // r10d

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v8, v7) )
    {
LABEL_4:
      *v9 = (void *)v10;
      CanCastTo = 0;
      goto LABEL_11;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), a2, v9, v10);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
        goto LABEL_4;
      if ( InlineIsEqualGUID(v12, &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476) )
      {
        *v9 = (void *)(v13 + 8);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = v14;
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_11:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)CanCastTo;
  }
  *v5 = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return 0LL;
}
