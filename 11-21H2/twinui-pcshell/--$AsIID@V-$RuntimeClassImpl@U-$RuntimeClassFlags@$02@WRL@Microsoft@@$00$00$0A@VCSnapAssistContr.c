/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180138AF8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssistControllerBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017F470 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCSnapAssis.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CSnapAssistControllerBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // r9
  _DWORD *v4; // rcx
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // r10
  unsigned int v9; // ebx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // r11

  v3 = a2;
  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_31;
    }
    goto LABEL_3;
  }
  if ( *a2 != -1350114592 )
    goto LABEL_3;
  a2 = (_DWORD *)*(unsigned int *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  if ( v3[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    goto LABEL_3;
  if ( *((_QWORD *)v3 + 1) != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    if ( v3[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
      && *((_QWORD *)v3 + 1) == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *a3 = a1;
      goto LABEL_20;
    }
LABEL_3:
    if ( *v3 == -890450019
      && v3[1] == *(_DWORD *)&GUID_caeccf9d_10d6_4d55_9fc5_819ad14b2f33.Data2
      && v3[2] == *(_DWORD *)GUID_caeccf9d_10d6_4d55_9fc5_819ad14b2f33.Data4
      && v3[3] == *(_DWORD *)&GUID_caeccf9d_10d6_4d55_9fc5_819ad14b2f33.Data4[4] )
    {
      *a3 = a1 + 8;
      goto LABEL_20;
    }
    if ( InlineIsEqualGUID(v3, &GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36) )
    {
      *a3 = v5;
      goto LABEL_20;
    }
    v9 = -2147467262;
    if ( InlineIsEqualGUID(v4, &GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d)
      || InlineIsEqualGUID(v6, &GUID_b07acdd8_280b_4fe2_b920_95f945832a24)
      || InlineIsEqualGUID(v10, &GUID_e8127611_f3b8_5321_bca4_3293938bbab9) )
    {
      *a3 = v8;
    }
    else
    {
      if ( !InlineIsEqualGUID(v11, &GUID_1272c5ac_d7c9_5a11_88e3_f6ffaf79e9b1) )
      {
        v13 = -2147467262;
LABEL_10:
        if ( v13 != -2147467262 )
        {
          v9 = v13;
LABEL_13:
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
          return v9;
        }
        if ( !InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
          return v9;
        *a3 = v14 + 280;
LABEL_20:
        v9 = 0;
        goto LABEL_13;
      }
      *a3 = v12 + 8;
    }
    v13 = 0;
    goto LABEL_10;
  }
LABEL_31:
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, v3);
  return 0LL;
}
