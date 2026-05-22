/*
 * XREFs of ?QueryInterface@DeviceInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097330
 * Callers:
 *     ?QueryInterface@DeviceInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065AB0 (-QueryInterface@DeviceInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DeviceInputHost::QueryInterface(DeviceInputHost *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\deviceinputhost.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(DeviceInputHost *))(*(_QWORD *)this + 8LL))(this);
    this = (DeviceInputHost *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
LABEL_7:
    *a3 = this;
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953) )
  {
    (*(void (__fastcall **)(DeviceInputHost *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_7;
  }
  return 2147500034LL;
}
