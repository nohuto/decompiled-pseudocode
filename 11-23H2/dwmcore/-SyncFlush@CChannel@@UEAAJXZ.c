/*
 * XREFs of ?SyncFlush@CChannel@@UEAAJXZ @ 0x1800FF710
 * Callers:
 *     <none>
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x1800FFF68 (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 */

__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v5, this);
  v2 = CChannel::SyncFlushInternal(this);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x281,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v2);
  else
    v3 = 0;
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v5);
  return v3;
}
