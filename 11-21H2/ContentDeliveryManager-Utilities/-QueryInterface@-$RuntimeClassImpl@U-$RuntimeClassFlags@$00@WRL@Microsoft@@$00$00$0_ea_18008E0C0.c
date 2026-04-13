/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@567@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E0C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@567@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E1E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18008E1E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@567@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E200 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18008E200.c)
 *     ?QueryInterface@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008ECF0 (-QueryInterface@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationMod.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 != -1350114592 )
    {
      if ( *a2 == 693115335
        && a2[1] == *(_DWORD *)&GUID_295019c7_d9e9_5485_991a_0826b2af7e3d.Data2
        && a2[2] == *(_DWORD *)GUID_295019c7_d9e9_5485_991a_0826b2af7e3d.Data4
        && a2[3] == *(_DWORD *)&GUID_295019c7_d9e9_5485_991a_0826b2af7e3d.Data4[4] )
      {
LABEL_23:
        *a3 = a1;
        a1 = *a3;
        goto LABEL_24;
      }
LABEL_15:
      v5 = a1 + 8;
      a1 += 8LL;
      if ( *a2 != 56
        || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        a1 = v5 + 8;
        if ( *a2 != -1230936869
          || a2[1] != *(_DWORD *)&GUID_b6a164db_6a48_56a8_addb_35ff07040814.Data2
          || a2[2] != *(_DWORD *)GUID_b6a164db_6a48_56a8_addb_35ff07040814.Data4
          || a2[3] != *(_DWORD *)&GUID_b6a164db_6a48_56a8_addb_35ff07040814.Data4[4] )
        {
          return (unsigned int)-2147467262;
        }
      }
      goto LABEL_23;
    }
    if ( a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      goto LABEL_15;
    }
    v4 = *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4];
  }
  else
  {
    if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      goto LABEL_15;
    }
    v4 = *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4];
  }
  if ( a2[3] != v4 )
    goto LABEL_15;
  *a3 = a1;
LABEL_24:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
