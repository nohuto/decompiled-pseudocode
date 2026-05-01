/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800043F0
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015C30 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015C50 (-QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015C70 (-QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015C90 (-QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015CB0 (-QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180004530 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2@System@Windows@@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180004560 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int CanCastTo; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r11
  const struct _GUID *v7; // rcx
  _DWORD *v8; // r9
  const struct _GUID *v9; // rcx
  __int64 v10; // r10
  const struct _GUID *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10

  CanCastTo = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return CanCastTo;
  }
  if ( *v8 == 53
    && v8[1] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
    && v8[2] == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
    && v8[3] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
  {
    *v5 = v6;
    goto LABEL_10;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
    || (unsigned int)InlineIsEqualGUID(v9, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *v5 = v10;
    goto LABEL_10;
  }
  if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
    *v5 = v13;
  else
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastTo(
                  v13 + 8,
                  v12);
  if ( CanCastTo != -2147467262 )
  {
    if ( (CanCastTo & 0x80000000) != 0 )
      return CanCastTo;
LABEL_10:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return CanCastTo;
  }
  return 2147500034LL;
}
