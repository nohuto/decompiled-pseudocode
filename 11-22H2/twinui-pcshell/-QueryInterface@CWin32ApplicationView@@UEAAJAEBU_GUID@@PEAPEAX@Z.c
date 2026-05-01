/*
 * XREFs of ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CCFB0
 * Callers:
 *     ?QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180292950 (-QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180292970 (-QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180292990 (-QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802929B0 (-QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802929D0 (-QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802929F0 (-QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180292A10 (-QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationViewBase@@UIApplicationViewWithEnterpriseId@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CD140 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationViewBase@@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CD230 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCal.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QueryInterface(
        CWin32ApplicationView *this,
        struct _GUID *a2,
        CWin32ApplicationView **a3)
{
  CWin32ApplicationView *v3; // r11
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r11
  __int64 v12; // r9
  __int64 v13; // r10
  int CanCastTo; // ebx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r10
  signed __int64 v20; // rax
  signed __int64 v21; // rtt

  v3 = this;
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
      || (unsigned int)InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v6 = v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      return 0;
    }
    if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513) )
    {
      *v10 = v11;
      CanCastTo = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1) )
      {
        *v10 = v12;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationViewBase,IApplicationViewWithEnterpriseId>::CanCastTo(
                      v12 + 8,
                      v13);
      }
      if ( CanCastTo == -2147467262 )
      {
        if ( (unsigned int)InlineIsEqualGUID(v13, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
        {
          *v10 = v16;
          CanCastTo = 0;
          goto LABEL_14;
        }
        if ( (unsigned int)InlineIsEqualGUID(v15, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3) )
        {
          *v10 = v17;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
                        v17 + 8,
                        v18);
        }
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
LABEL_14:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
    return (unsigned int)CanCastTo;
  }
  v20 = *((_QWORD *)this + 26);
  while ( v20 >= 0 )
  {
    if ( (_DWORD)v20 != 0x7FFFFFFF )
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v20 + 1, v20);
      if ( v21 != v20 )
        continue;
    }
    goto LABEL_26;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v20 + 16), (volatile int *)a2);
LABEL_26:
  *a3 = v3;
  return 0LL;
}
