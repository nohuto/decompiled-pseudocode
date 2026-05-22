/*
 * XREFs of ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029280
 * Callers:
 *     ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029210 (-QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A1D0 (-QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A1F0 (-QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A210 (-QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A230 (-QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A250 (-QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A270 (-QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A290 (-QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A2B0 (-QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A2D0 (-QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::QueryInterface(DWMInputRouter *this, struct _GUID *a2, void **a3)
{
  DWMInputRouter *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // r9
  _QWORD *v12; // r9
  _QWORD *v13; // r9
  _QWORD *v14; // r9
  _QWORD *v15; // r9
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(DWMInputRouter *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      v8 = (unsigned __int64)v4 + 24;
      goto LABEL_12;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data4;
    if ( !v6 )
    {
      (*(void (__fastcall **)(DWMInputRouter *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      v8 = (unsigned __int64)v4 + 32;
      goto LABEL_12;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4;
    if ( !v7 )
    {
      (*(void (__fastcall **)(DWMInputRouter *, struct _GUID *, void **, struct _GUID *))(*(_QWORD *)this + 8LL))(
        this,
        a2,
        a3,
        a2);
      v8 = (unsigned __int64)v4 + 40;
LABEL_12:
      v4 = (DWMInputRouter *)(v8 & -(__int64)(v4 != 0LL));
LABEL_13:
      *a3 = v4;
      return 0LL;
    }
    if ( IsEqualGUID(a2, &GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00) )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v4 + 8LL))(v4);
      v8 = (unsigned __int64)v4 + 56;
      goto LABEL_12;
    }
    if ( IsEqualGUID(v10, &GUID_d4af35ea_8997_45e5_aac9_eeb1b4026e03) )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v4 + 8LL))(v4);
      goto LABEL_13;
    }
    if ( IsEqualGUID(v11, &GUID_b694737b_3300_4bb1_8b67_44715c8db610) )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v4 + 8LL))(v4);
      v8 = (unsigned __int64)v4 + 8;
      goto LABEL_12;
    }
    if ( IsEqualGUID(v12, &GUID_9ea1391d_b072_488c_9579_08639d61cf31) )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v4 + 8LL))(v4);
      v8 = (unsigned __int64)v4 + 16;
      goto LABEL_12;
    }
    if ( IsEqualGUID(v13, &GUID_b9402cea_5976_45e1_baa3_22754843b1af) )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v4 + 8LL))(v4);
      v8 = (unsigned __int64)v4 + 48;
      goto LABEL_12;
    }
    if ( IsEqualGUID(v14, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f) )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v4 + 8LL))(v4);
      v8 = (unsigned __int64)v4 + 64;
      goto LABEL_12;
    }
    if ( IsEqualGUID(v15, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)v4 + 8LL))(v4);
      v8 = (unsigned __int64)v4 + 72;
      goto LABEL_12;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL,
      v16);
    return 2147942487LL;
  }
}
