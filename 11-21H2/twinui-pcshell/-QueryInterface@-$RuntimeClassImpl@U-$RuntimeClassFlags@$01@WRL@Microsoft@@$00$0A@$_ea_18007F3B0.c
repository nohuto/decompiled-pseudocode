/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007F3B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EE6D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801EE6D0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // r10
  _DWORD *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r10
  _DWORD *v9; // r9
  _QWORD *v10; // r10
  int v11; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v5 = v4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  if ( InlineIsEqualGUID(v3, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6) )
  {
    *v8 = v7;
    v11 = 0;
LABEL_13:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    return (unsigned int)v11;
  }
  if ( InlineIsEqualGUID(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
    || *v9 == 3
    && v9[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && v9[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && v9[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *v10 = v7;
    v11 = 0;
  }
  else
  {
    v11 = -2147467262;
    v7 = 0LL;
  }
  if ( v11 >= 0 )
    goto LABEL_13;
  return (unsigned int)v11;
}
