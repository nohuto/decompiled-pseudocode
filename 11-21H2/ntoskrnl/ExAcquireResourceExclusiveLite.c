/*
 * XREFs of ExAcquireResourceExclusiveLite @ 0x1402AE340
 * Callers:
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 *     sub_140223644 @ 0x140223644 (sub_140223644.c)
 *     sub_1402557A4 @ 0x1402557A4 (sub_1402557A4.c)
 *     sub_14025A33C @ 0x14025A33C (sub_14025A33C.c)
 *     sub_14025AA04 @ 0x14025AA04 (sub_14025AA04.c)
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_1402D1E10 @ 0x1402D1E10 (sub_1402D1E10.c)
 *     sub_1402D8C20 @ 0x1402D8C20 (sub_1402D8C20.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_1405531C0 @ 0x1405531C0 (sub_1405531C0.c)
 *     sub_140564310 @ 0x140564310 (sub_140564310.c)
 *     sub_140564DE8 @ 0x140564DE8 (sub_140564DE8.c)
 *     sub_140581D30 @ 0x140581D30 (sub_140581D30.c)
 *     sub_1405E80B0 @ 0x1405E80B0 (sub_1405E80B0.c)
 *     sub_1405EA0E4 @ 0x1405EA0E4 (sub_1405EA0E4.c)
 *     sub_1405EAF08 @ 0x1405EAF08 (sub_1405EAF08.c)
 *     sub_1405F3E6C @ 0x1405F3E6C (sub_1405F3E6C.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405F5440 (SeSetSecurityAttributesTokenEx.c)
 *     sub_140606A70 @ 0x140606A70 (sub_140606A70.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14063D1F0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     sub_140661C4C @ 0x140661C4C (sub_140661C4C.c)
 *     sub_140662780 @ 0x140662780 (sub_140662780.c)
 *     sub_14066B900 @ 0x14066B900 (sub_14066B900.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140678FCC @ 0x140678FCC (sub_140678FCC.c)
 *     sub_140679034 @ 0x140679034 (sub_140679034.c)
 *     sub_1406820CC @ 0x1406820CC (sub_1406820CC.c)
 *     sub_140682C34 @ 0x140682C34 (sub_140682C34.c)
 *     sub_140682EA4 @ 0x140682EA4 (sub_140682EA4.c)
 *     sub_14068565C @ 0x14068565C (sub_14068565C.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406954C8 @ 0x1406954C8 (sub_1406954C8.c)
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 *     sub_14069FF64 @ 0x14069FF64 (sub_14069FF64.c)
 *     sub_1406B4B90 @ 0x1406B4B90 (sub_1406B4B90.c)
 *     sub_1406BBC4C @ 0x1406BBC4C (sub_1406BBC4C.c)
 *     sub_1406BE9A0 @ 0x1406BE9A0 (sub_1406BE9A0.c)
 *     sub_1406C5B04 @ 0x1406C5B04 (sub_1406C5B04.c)
 *     sub_1406C7604 @ 0x1406C7604 (sub_1406C7604.c)
 *     sub_1406CF708 @ 0x1406CF708 (sub_1406CF708.c)
 *     sub_1406DB04C @ 0x1406DB04C (sub_1406DB04C.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406DB590 (IoGetDeviceInterfaceAlias.c)
 *     IoEnumerateRegisteredFiltersList @ 0x1406DFB70 (IoEnumerateRegisteredFiltersList.c)
 *     sub_1406E0138 @ 0x1406E0138 (sub_1406E0138.c)
 *     sub_1406E2D00 @ 0x1406E2D00 (sub_1406E2D00.c)
 *     sub_1406E4E14 @ 0x1406E4E14 (sub_1406E4E14.c)
 *     sub_1406E5574 @ 0x1406E5574 (sub_1406E5574.c)
 *     sub_1406E6FE8 @ 0x1406E6FE8 (sub_1406E6FE8.c)
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406E8720 (SeMarkLogonSessionForTerminationNotificationEx.c)
 *     sub_1406EB0AC @ 0x1406EB0AC (sub_1406EB0AC.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 *     sub_140717EE4 @ 0x140717EE4 (sub_140717EE4.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 *     sub_14074244C @ 0x14074244C (sub_14074244C.c)
 *     sub_140748300 @ 0x140748300 (sub_140748300.c)
 *     sub_140748E80 @ 0x140748E80 (sub_140748E80.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_1407530D0 @ 0x1407530D0 (sub_1407530D0.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_14075563C @ 0x14075563C (sub_14075563C.c)
 *     sub_14075EA10 @ 0x14075EA10 (sub_14075EA10.c)
 *     sub_1407610B4 @ 0x1407610B4 (sub_1407610B4.c)
 *     sub_140762C04 @ 0x140762C04 (sub_140762C04.c)
 *     sub_140762F18 @ 0x140762F18 (sub_140762F18.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_140763800 @ 0x140763800 (sub_140763800.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_140766F84 @ 0x140766F84 (sub_140766F84.c)
 *     sub_140767040 @ 0x140767040 (sub_140767040.c)
 *     sub_1407677F0 @ 0x1407677F0 (sub_1407677F0.c)
 *     sub_140768F5C @ 0x140768F5C (sub_140768F5C.c)
 *     IoSetDeviceInterfaceState @ 0x140769100 (IoSetDeviceInterfaceState.c)
 *     sub_140769C24 @ 0x140769C24 (sub_140769C24.c)
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_14076A1F0 @ 0x14076A1F0 (sub_14076A1F0.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 *     sub_140778830 @ 0x140778830 (sub_140778830.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_1407829F8 @ 0x1407829F8 (sub_1407829F8.c)
 *     sub_140782BB0 @ 0x140782BB0 (sub_140782BB0.c)
 *     sub_1407879A8 @ 0x1407879A8 (sub_1407879A8.c)
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 *     sub_14078D5D8 @ 0x14078D5D8 (sub_14078D5D8.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     NtAdjustPrivilegesToken @ 0x14079DC50 (NtAdjustPrivilegesToken.c)
 *     sub_1407D4E34 @ 0x1407D4E34 (sub_1407D4E34.c)
 *     sub_1407D4F98 @ 0x1407D4F98 (sub_1407D4F98.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 *     sub_1407D79B4 @ 0x1407D79B4 (sub_1407D79B4.c)
 *     sub_1407DD3D0 @ 0x1407DD3D0 (sub_1407DD3D0.c)
 *     sub_1407EF098 @ 0x1407EF098 (sub_1407EF098.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     sub_1407F2DBC @ 0x1407F2DBC (sub_1407F2DBC.c)
 *     sub_140808994 @ 0x140808994 (sub_140808994.c)
 *     IoUnregisterFileSystem @ 0x14080C290 (IoUnregisterFileSystem.c)
 *     sub_14080C884 @ 0x14080C884 (sub_14080C884.c)
 *     sub_14080EA40 @ 0x14080EA40 (sub_14080EA40.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 *     IoRegisterFileSystem @ 0x14080F4B0 (IoRegisterFileSystem.c)
 *     sub_140810788 @ 0x140810788 (sub_140810788.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 *     sub_14081BBF8 @ 0x14081BBF8 (sub_14081BBF8.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_140827F54 @ 0x140827F54 (sub_140827F54.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_14082B668 @ 0x14082B668 (sub_14082B668.c)
 *     sub_14083B300 @ 0x14083B300 (sub_14083B300.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
 *     sub_14084BDD8 @ 0x14084BDD8 (sub_14084BDD8.c)
 *     sub_14084C1C8 @ 0x14084C1C8 (sub_14084C1C8.c)
 *     sub_14084DC6C @ 0x14084DC6C (sub_14084DC6C.c)
 *     sub_14084F808 @ 0x14084F808 (sub_14084F808.c)
 *     sub_1408545B0 @ 0x1408545B0 (sub_1408545B0.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408549A0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     sub_140859460 @ 0x140859460 (sub_140859460.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 *     sub_14085B59C @ 0x14085B59C (sub_14085B59C.c)
 *     sub_14085F580 @ 0x14085F580 (sub_14085F580.c)
 *     sub_140860758 @ 0x140860758 (sub_140860758.c)
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 *     sub_14092FB38 @ 0x14092FB38 (sub_14092FB38.c)
 *     sub_14092FCDC @ 0x14092FCDC (sub_14092FCDC.c)
 *     sub_140933C14 @ 0x140933C14 (sub_140933C14.c)
 *     sub_1409346B0 @ 0x1409346B0 (sub_1409346B0.c)
 *     IoUnregisterFsRegistrationChange @ 0x140936710 (IoUnregisterFsRegistrationChange.c)
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_140943248 @ 0x140943248 (sub_140943248.c)
 *     sub_140944640 @ 0x140944640 (sub_140944640.c)
 *     sub_14094488C @ 0x14094488C (sub_14094488C.c)
 *     sub_140944ADC @ 0x140944ADC (sub_140944ADC.c)
 *     ntoskrnl_15 @ 0x140945E70 (ntoskrnl_15.c)
 *     sub_1409491C0 @ 0x1409491C0 (sub_1409491C0.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 *     sub_140953894 @ 0x140953894 (sub_140953894.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_14095644C @ 0x14095644C (sub_14095644C.c)
 *     sub_140958B94 @ 0x140958B94 (sub_140958B94.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_14095EB04 @ 0x14095EB04 (sub_14095EB04.c)
 *     sub_14095EC4C @ 0x14095EC4C (sub_14095EC4C.c)
 *     sub_1409959F8 @ 0x1409959F8 (sub_1409959F8.c)
 *     sub_1409962E0 @ 0x1409962E0 (sub_1409962E0.c)
 *     sub_1409965B0 @ 0x1409965B0 (sub_1409965B0.c)
 *     sub_140996854 @ 0x140996854 (sub_140996854.c)
 *     sub_1409969C4 @ 0x1409969C4 (sub_1409969C4.c)
 *     sub_1409A2E54 @ 0x1409A2E54 (sub_1409A2E54.c)
 *     sub_1409A332C @ 0x1409A332C (sub_1409A332C.c)
 *     sub_1409A3930 @ 0x1409A3930 (sub_1409A3930.c)
 *     sub_1409A4000 @ 0x1409A4000 (sub_1409A4000.c)
 *     sub_1409A40F8 @ 0x1409A40F8 (sub_1409A40F8.c)
 *     sub_1409A4208 @ 0x1409A4208 (sub_1409A4208.c)
 *     sub_1409A4BF0 @ 0x1409A4BF0 (sub_1409A4BF0.c)
 *     sub_1409A5200 @ 0x1409A5200 (sub_1409A5200.c)
 *     sub_1409A56A4 @ 0x1409A56A4 (sub_1409A56A4.c)
 *     sub_1409A5B64 @ 0x1409A5B64 (sub_1409A5B64.c)
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 *     sub_1409A5F60 @ 0x1409A5F60 (sub_1409A5F60.c)
 *     sub_1409A651C @ 0x1409A651C (sub_1409A651C.c)
 *     sub_1409AB08C @ 0x1409AB08C (sub_1409AB08C.c)
 *     sub_1409AB284 @ 0x1409AB284 (sub_1409AB284.c)
 *     sub_1409AB3EC @ 0x1409AB3EC (sub_1409AB3EC.c)
 *     sub_1409AB5A0 @ 0x1409AB5A0 (sub_1409AB5A0.c)
 *     sub_1409B08E8 @ 0x1409B08E8 (sub_1409B08E8.c)
 *     RtlZeroHeap @ 0x1409BAF80 (RtlZeroHeap.c)
 *     sub_1409C6248 @ 0x1409C6248 (sub_1409C6248.c)
 *     sub_1409C664C @ 0x1409C664C (sub_1409C664C.c)
 *     sub_1409CD320 @ 0x1409CD320 (sub_1409CD320.c)
 *     sub_1409CD41C @ 0x1409CD41C (sub_1409CD41C.c)
 *     sub_1409CD544 @ 0x1409CD544 (sub_1409CD544.c)
 *     sub_1409CD6CC @ 0x1409CD6CC (sub_1409CD6CC.c)
 *     sub_1409F75A0 @ 0x1409F75A0 (sub_1409F75A0.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 *     sub_140A1C148 @ 0x140A1C148 (sub_140A1C148.c)
 *     sub_140A2296C @ 0x140A2296C (sub_140A2296C.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140B0856C @ 0x140B0856C (sub_140B0856C.c)
 *     sub_140B105C4 @ 0x140B105C4 (sub_140B105C4.c)
 *     sub_140B219F0 @ 0x140B219F0 (sub_140B219F0.c)
 * Callees:
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_140231990 @ 0x140231990 (sub_140231990.c)
 *     sub_14023CBE0 @ 0x14023CBE0 (sub_14023CBE0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402AE310 @ 0x1402AE310 (sub_1402AE310.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14033B6F0 @ 0x14033B6F0 (sub_14033B6F0.c)
 *     sub_14039BA38 @ 0x14039BA38 (sub_14039BA38.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406325F8 @ 0x1406325F8 (sub_1406325F8.c)
 *     sub_140632AC8 @ 0x140632AC8 (sub_140632AC8.c)
 */

BOOLEAN __stdcall ExAcquireResourceExclusiveLite(PERESOURCE Resource, BOOLEAN Wait)
{
  USHORT Flag; // cx
  unsigned __int8 v5; // r8
  struct _KTHREAD *CurrentThread; // rbp
  bool v7; // si
  __int64 v8; // rcx
  BOOLEAN v9; // di
  ULONG v10; // ecx
  unsigned __int64 OldIrql; // rbp
  unsigned __int64 v13; // rdi
  ULONG v14; // edi
  ULONG v15; // edi
  unsigned __int64 v16; // rbp
  unsigned __int8 v17; // cl
  struct _KTHREAD *v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r8
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r8
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  __int64 v33; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  __int64 v37; // r8
  int v38; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v40[4]; // [rsp+48h] [rbp-40h] BYREF

  Flag = Resource->Flag;
  v5 = (Wait == 0) + 1;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) == 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    memset(v40, 0, 48);
    CurrentThread = KeGetCurrentThread();
    v7 = (DWORD1(xmmword_140D06900) & 0x20000) != 0;
    __incgsdword(0x8A78u);
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    v9 = sub_1402AE310((__int64)Resource);
    if ( v9 )
    {
      v10 = Resource->OwnerEntry.TableSize & 7;
      Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
      Resource->OwnerEntry.TableSize = v10 | 8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v24 = *((_QWORD *)CurrentPrcb + 4375);
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
            *(_DWORD *)(v24 + 20) &= v25;
            if ( v26 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      __incgsdword(0x8A7Cu);
      __incgsdword(0x8A64u);
      if ( v7 )
        sub_1406325F8(65569LL, Resource, 1LL, Resource->ContentionCount);
      return v9;
    }
    if ( (Resource->ReservedLowFlags & 0x80u) != 0
      && (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v14 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v14;
      v15 = v14 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v16 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = *((_QWORD *)v28 + 4375);
            v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v30;
            if ( v26 )
              sub_140418E4C(v28);
          }
        }
      }
      __writecr8(v16);
      __incgsdword(0x8A80u);
      __incgsdword(0x8A64u);
      if ( !v7 )
        return 1;
      v20 = v15;
      v21 = 65585LL;
    }
    else
    {
      if ( !Wait )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v19 = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && LockHandle.OldIrql <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = *((_QWORD *)v32 + 4375);
              v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v26 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
              *(_DWORD *)(v33 + 20) &= v34;
              if ( v26 )
                sub_140418E4C(v32);
            }
          }
        }
        __writecr8(v19);
        __incgsdword(0x8A88u);
        return 0;
      }
      sub_14023CBE0(v8, (__int64)CurrentThread, (__int64)v40);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v13 = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && LockHandle.OldIrql <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = *((_QWORD *)v36 + 4375);
            v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v26 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
            *(_DWORD *)(v37 + 20) &= v38;
            if ( v26 )
              sub_140418E4C(v36);
          }
        }
      }
      __writecr8(v13);
      __incgsdword(0x8A84u);
      if ( v7 )
        sub_140632AC8(65572LL, Resource, 0LL);
      sub_14033B6F0(Resource);
      sub_140231990(&Resource->SystemResourcesList, (__int64)v40, 0x10224u, (__int64)sub_14025C860);
      sub_14021CA70((__int64)Resource, (__int64)CurrentThread, 0);
      __incgsdword(0x8A7Cu);
      __incgsdword(0x8A64u);
      if ( !v7 )
        return 1;
      v20 = 1LL;
      v21 = 65569LL;
    }
    sub_1406325F8(v21, Resource, v20, Resource->ContentionCount);
    return 1;
  }
  v17 = KeGetCurrentIrql();
  v18 = KeGetCurrentThread();
  if ( v17 > v5 )
    KeBugCheckEx(0x1C6u, 0LL, v17, v5, 0LL);
  if ( v17 >= 2u && (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (*((_BYTE *)v18 + 192) & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !v17 && (*((_DWORD *)v18 + 29) & 0x400) == 0 && !*((_DWORD *)v18 + 121) )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  return sub_14039BA38((ULONG_PTR)Resource);
}
