/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DC90
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076D90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180076D90.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076DB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180076DB0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076DD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180076DD0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076DF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180076DF0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  _QWORD *v13; // r8
  const struct _GUID *v14; // r10
  __int64 v15; // r11
  int v16; // ebx
  const struct _GUID *v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // r8
  __int64 v20; // r11

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
LABEL_13:
    *v8 = v9;
LABEL_14:
    v16 = 0;
    goto LABEL_15;
  }
  v10 = v9 + 8;
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_1120b11f_c7b3_4012_adbf_8ca8508df960) )
  {
    *v12 = v10;
    goto LABEL_14;
  }
  if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7) )
  {
    *v13 = v15;
    v16 = 0;
  }
  else
  {
    v16 = -2147467262;
    v15 = 0LL;
  }
  v9 = v15;
  if ( v16 == -2147467262 )
  {
    if ( !(unsigned int)InlineIsEqualGUID(v14, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      v18 = v9 + 8;
      if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *v19 = v18;
        v16 = 0;
      }
      else
      {
        v16 = -2147467262;
        v9 = v20;
      }
      goto LABEL_11;
    }
    goto LABEL_13;
  }
LABEL_11:
  if ( v16 >= 0 )
LABEL_15:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  return (unsigned int)v16;
}
