/*
 * XREFs of ?QueryInterface@CPeopleBarFlyoutExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E290
 * Callers:
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3C10 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3C30 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3C50 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3C70 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleBarFlyoutExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F3C90 (-QueryInterface@CPeopleBarFlyoutExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::QueryInterface(
        CPeopleBarFlyoutExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // r10
  _DWORD *v12; // r9
  __int64 v13; // rcx
  int v14; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c) )
  {
    *v8 = v9;
LABEL_13:
    v14 = 0;
LABEL_14:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)v14;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || (unsigned int)InlineIsEqualGUID(v10, &GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb) )
  {
    *v8 = v11;
    goto LABEL_13;
  }
  v13 = v11 + 8;
  if ( *v12 == 819308585
    && v12[1] == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data2
    && v12[2] == *(_DWORD *)GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4
    && v12[3] == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4[4]
    || (v13 = v11 + 16, *v12 == -189734543)
    && v12[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
    && v12[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
    && v12[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4]
    || (v13 = v11 + 24, *v12 == -1738762077)
    && v12[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
    && v12[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
    && v12[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
  {
    *v8 = v13;
    v14 = 0;
  }
  else
  {
    v14 = -2147467262;
  }
  if ( v14 >= 0 )
    goto LABEL_14;
  return (unsigned int)v14;
}
