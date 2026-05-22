/*
 * XREFs of ?QueryInterface@OneCoreUAPInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AB80
 * Callers:
 *     ?QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800659F0 (-QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@OneCoreUAPInputHost@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065A10 (-QueryInterface@OneCoreUAPInputHost@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::QueryInterface(OneCoreUAPInputHost *this, struct _GUID *a2, void **a3)
{
  _QWORD *v5; // r9
  _QWORD *v6; // r9
  unsigned __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)this + 24;
LABEL_10:
      this = (OneCoreUAPInputHost *)(v8 & -(__int64)(this != 0LL));
      goto LABEL_5;
    }
    if ( IsEqualGUID(v5, &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953) )
    {
      (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
LABEL_5:
      *a3 = this;
      return 0LL;
    }
    if ( IsEqualGUID(v6, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35) )
    {
      (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
      v8 = (unsigned __int64)this + 8;
      goto LABEL_10;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
