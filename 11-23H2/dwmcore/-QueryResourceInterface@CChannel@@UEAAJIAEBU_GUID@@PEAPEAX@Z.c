/*
 * XREFs of ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801D0090
 * Callers:
 *     ?VisualTargetSetRoot@CChannel@@UEAAJII@Z @ 0x18002B6D0 (-VisualTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?VisualRemoveAllChildren@CChannel@@UEAAJI@Z @ 0x18002C3B0 (-VisualRemoveAllChildren@CChannel@@UEAAJI@Z.c)
 *     ?VisualRemoveChild@CChannel@@UEAAJII@Z @ 0x18002D610 (-VisualRemoveChild@CChannel@@UEAAJII@Z.c)
 *     ?VisualInsertChild@CChannel@@UEAAJIII_N@Z @ 0x18002D970 (-VisualInsertChild@CChannel@@UEAAJIII_N@Z.c)
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?IsValidHandle@CChannel@@AEAA_NI@Z @ 0x18002DEC0 (-IsValidHandle@CChannel@@AEAA_NI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::QueryResourceInterface(CChannel *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  if ( CChannel::IsValidHandle(this, a2) )
  {
    *a4 = 0LL;
    v9 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 16LL * (a2 - 1) + 8);
    v8 = (**v9)(v9, a3, a4);
  }
  else
  {
    v8 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070006LL);
  }
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v8;
}
