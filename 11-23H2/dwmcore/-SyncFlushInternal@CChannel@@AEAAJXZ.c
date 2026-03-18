/*
 * XREFs of ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x1800FFF68
 * Callers:
 *     ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x1800189F0 (-SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x1800FF710 (-SyncFlush@CChannel@@UEAAJXZ.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1801D03EC (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?InternalCommit@CChannel@@AEAAJPEAX@Z @ 0x18002DCF8 (-InternalCommit@CChannel@@AEAAJPEAX@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1800FFFD8 (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::SyncFlushInternal(CChannel *this)
{
  int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 53;
  v2 = CChannel::SendCommand(this, &v8, 4u);
  if ( v2 < 0 )
  {
    v6 = 630LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CChannel::InternalCommit(this, 0LL);
  if ( v2 < 0 )
  {
    v6 = 632LL;
    goto LABEL_7;
  }
  v3 = CInternalMilCmdConnection::WaitForSyncFlush(*((CInternalMilCmdConnection **)this + 7), *((_DWORD *)this + 18));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x279,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
