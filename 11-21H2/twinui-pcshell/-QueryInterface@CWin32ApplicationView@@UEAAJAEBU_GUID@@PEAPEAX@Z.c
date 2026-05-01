/*
 * XREFs of ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081BE0
 * Callers:
 *     ?QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF360 (-QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF380 (-QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF3A0 (-QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF3C0 (-QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF3E0 (-QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF400 (-QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF420 (-QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180082880 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCal.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QueryInterface(CWin32ApplicationView *this, struct _GUID *a2, void **a3)
{
  void **v3; // r10
  CWin32ApplicationView *v4; // r11
  __int64 v5; // rax
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r11
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _QWORD *v11; // r8
  _QWORD *v12; // r10
  __int64 v13; // r11
  _DWORD *v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r8
  int CanCastTo; // ebx
  _DWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  signed __int64 v25; // rax
  signed __int64 v26; // rtt

  v3 = a3;
  v4 = this;
  *a3 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data4;
  if ( v5 )
  {
    if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v7 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      return 0;
    }
    if ( InlineIsEqualGUID(v9, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513) )
    {
      *v11 = v13;
      CanCastTo = 0;
      goto LABEL_16;
    }
    if ( !InlineIsEqualGUID(v10, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1) )
    {
      if ( InlineIsEqualGUID(v14, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02) )
      {
        *v12 = v17;
        CanCastTo = 0;
      }
      else if ( InlineIsEqualGUID(v16, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0) )
      {
        *v12 = v19;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo != -2147467262 )
      {
LABEL_15:
        if ( CanCastTo < 0 )
          return (unsigned int)CanCastTo;
LABEL_16:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
        return (unsigned int)CanCastTo;
      }
      if ( !InlineIsEqualGUID(v18, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
      {
        if ( InlineIsEqualGUID(v21, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3) )
        {
          *v12 = v22;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
                        v22 + 8,
                        v23,
                        v12);
        }
        goto LABEL_15;
      }
    }
    *v12 = v15;
    CanCastTo = 0;
    goto LABEL_16;
  }
  v25 = *((_QWORD *)this + 26);
  while ( v25 >= 0 )
  {
    if ( (_DWORD)v25 != 0x7FFFFFFF )
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v25 + 1, v25);
      if ( v26 != v25 )
        continue;
    }
    goto LABEL_30;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v25 + 16), (volatile int *)a2);
LABEL_30:
  *v3 = v4;
  return 0LL;
}
