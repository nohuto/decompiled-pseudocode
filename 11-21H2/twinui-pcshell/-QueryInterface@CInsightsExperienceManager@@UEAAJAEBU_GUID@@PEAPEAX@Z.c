/*
 * XREFs of ?QueryInterface@CInsightsExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012ECB0
 * Callers:
 *     ?QueryInterface@CInsightsExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F54A0 (-QueryInterface@CInsightsExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CInsightsExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F54C0 (-QueryInterface@CInsightsExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CInsightsExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F54E0 (-QueryInterface@CInsightsExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CInsightsExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F5500 (-QueryInterface@CInsightsExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CInsightsExperienceManager::QueryInterface(
        CInsightsExperienceManager *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11
  _DWORD *v10; // rcx
  __int64 v11; // r10
  _DWORD *v12; // r9
  __int64 v13; // rcx
  int v14; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e) )
  {
    *v8 = v9;
    goto LABEL_12;
  }
  if ( InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || InlineIsEqualGUID(v10, &GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb) )
  {
    *v8 = v11;
LABEL_12:
    v14 = 0;
LABEL_13:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)v14;
  }
  v13 = v11 + 8;
  if ( *v12 == -1811144131
    && v12[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && v12[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && v12[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4]
    || (v13 = v11 + 16, *v12 == -136041057)
    && v12[1] == *(_DWORD *)&GUID_f7e42d9f_f76a_4f44_a458_6ecbdd76d2b9.Data2
    && v12[2] == *(_DWORD *)GUID_f7e42d9f_f76a_4f44_a458_6ecbdd76d2b9.Data4
    && v12[3] == *(_DWORD *)&GUID_f7e42d9f_f76a_4f44_a458_6ecbdd76d2b9.Data4[4] )
  {
    *v8 = v13;
    v14 = 0;
  }
  else
  {
    v14 = -2147467262;
  }
  if ( v14 >= 0 )
    goto LABEL_13;
  return (unsigned int)v14;
}
