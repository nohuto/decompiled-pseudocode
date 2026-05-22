/*
 * XREFs of ?QueryInterface@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B490
 * Callers:
 *     ?QueryInterface@CDevice@DirectComposition@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8C90 (-QueryInterface@CDevice@DirectComposition@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDevice@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8CB0 (-QueryInterface@CDevice@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDevice@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8CD0 (-QueryInterface@CDevice@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDevice@DirectComposition@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8CF0 (-QueryInterface@CDevice@DirectComposition@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDevice@DirectComposition@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8D10 (-QueryInterface@CDevice@DirectComposition@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDevice@DirectComposition@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8D30 (-QueryInterface@CDevice@DirectComposition@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDevice@DirectComposition@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8D50 (-QueryInterface@CDevice@DirectComposition@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDevice@DirectComposition@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8D70 (-QueryInterface@CDevice@DirectComposition@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDevice@DirectComposition@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8D90 (-QueryInterface@CDevice@DirectComposition@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x18002B6E8 (--8@YA_NAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::QueryInterface(
        DirectComposition::CDevice *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  int *v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx

  v3 = 0;
  if ( a3 )
  {
    if ( (unsigned __int8)operator==(a2, &GUID_6b556968_2d25_11e2_99f6_8bc36088709b, a3, this) )
    {
LABEL_4:
      v7 = (unsigned __int64)(v6 + 10);
LABEL_5:
      v8 = v7 & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64);
LABEL_40:
      *v5 = v8;
      (*(void (__fastcall **)(int *))(*(_QWORD *)v6 + 8LL))(v6);
      return v3;
    }
    if ( !(unsigned __int8)operator==(v4, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, v5, v6) )
    {
      if ( (unsigned __int8)operator==(v9, &GUID_75f6468d_1b8e_447c_9bc6_75fea80b5b25, v5, v6) && v6[92] >= 1 )
      {
LABEL_9:
        v7 = (unsigned __int64)(v6 + 4);
        goto LABEL_5;
      }
      if ( (unsigned __int8)operator==(v10, &GUID_0987cb06_f916_48bf_8d35_ce7641781bd9, v5, v6) && v6[92] >= 2 )
        goto LABEL_12;
      if ( (unsigned __int8)operator==(v11, &GUID_5f4633fe_1e08_4cb8_8c75_ce24333f5602, v5, v6) && v6[92] >= 1
        || (unsigned __int8)operator==(v12, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, v5, v6)
        || (unsigned __int8)operator==(v13, &GUID_69e42256_0d75_4c43_b817_044f4ad942e9, v5, v6) )
      {
        goto LABEL_9;
      }
      if ( (unsigned __int8)operator==(v14, &GUID_a1a3c64a_224f_4a81_9773_4f03a89d3c6c, v5, v6) && v6[92] >= 1 )
      {
        v7 = (unsigned __int64)(v6 + 12);
        goto LABEL_5;
      }
      if ( (unsigned __int8)operator==(v15, &GUID_28d6ad3d_ee2a_4bcd_9419_7d54800435b1, v5, v6)
        || (unsigned __int8)operator==(v16, &GUID_e01eb649_787e_4560_b398_0de7a2065d8b, v5, v6)
        || (unsigned __int8)operator==(v17, &GUID_25090604_9c8b_42c9_8a71_bd1b3ad16512, v5, v6)
        || (unsigned __int8)operator==(v18, &GUID_ca67b562_1c32_4017_9dd9_3d4b7e2510aa, v5, v6) )
      {
        goto LABEL_9;
      }
      if ( (unsigned __int8)operator==(v19, &GUID_6083f66a_8533_4f7e_a37e_6c222134280b, v5, v6) )
      {
        v7 = (unsigned __int64)(v6 + 6);
        goto LABEL_5;
      }
      if ( (unsigned __int8)operator==(v20, &GUID_ad9a1415_d7c0_48fe_810f_2cf1efa8f436, v5, v6)
        || (unsigned __int8)operator==(v21, &GUID_eb12fb97_750e_4ed5_acc9_37b37e4d6714, v5, v6)
        || (unsigned __int8)operator==(v22, &GUID_12f8cb1f_d04e_4a6a_967b_e44f5649ec7b, v5, v6)
        || (unsigned __int8)operator==(v23, &GUID_be0f97a8_60d0_4a73_af1d_e236e4598070, v5, v6) )
      {
        v7 = (unsigned __int64)(v6 + 8);
        goto LABEL_5;
      }
      if ( (unsigned __int8)operator==(v24, &GUID_2056f1e3_7dc8_4d28_ad74_b817f3481bb9, v5, v6) )
      {
        v7 = (unsigned __int64)(v6 + 16);
        goto LABEL_5;
      }
      if ( (unsigned __int8)operator==(v25, &GUID_fe1eca1a_bf29_4fb0_9512_03f3e94b431e, v5, v6) )
        goto LABEL_4;
      if ( (unsigned __int8)operator==(v26, &GUID_df0c7cec_cdeb_4d4a_b91c_721bf22f4e6c, v5, v6) )
      {
        v7 = (unsigned __int64)(v6 + 14);
        goto LABEL_5;
      }
      if ( (unsigned __int8)operator==(v27, &GUID_85fc5cca_2da6_494c_86b6_4a775c049b8a, v5, v6) && v6[92] >= 2 )
      {
LABEL_12:
        v7 = (unsigned __int64)(v6 + 2);
        goto LABEL_5;
      }
      if ( !(unsigned __int8)operator==(v28, &GUID_00000000_0000_0000_c000_000000000046, v5, v6) )
      {
        *v5 = 0LL;
        return (unsigned int)-2147467262;
      }
    }
    v8 = (__int64)v6;
    goto LABEL_40;
  }
  return (unsigned int)-2147024809;
}
