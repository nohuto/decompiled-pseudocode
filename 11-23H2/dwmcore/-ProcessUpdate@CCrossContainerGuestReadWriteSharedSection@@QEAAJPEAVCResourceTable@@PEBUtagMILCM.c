/*
 * XREFs of ?ProcessUpdate@CCrossContainerGuestReadWriteSharedSection@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION@@@Z @ 0x1802218C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180088178 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098820 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CCrossContainerGuestReadWriteSharedSection::ProcessUpdate(
        CCrossContainerGuestReadWriteSharedSection *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION *a3)
{
  *((_QWORD *)this + 8) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 4);
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
