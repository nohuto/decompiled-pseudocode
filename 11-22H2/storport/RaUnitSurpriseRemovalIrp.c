/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x1C00A1444
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0018F84 (RaUnitWaitForRemoveLock.c)
 *     McTemplateK0zqjuuujsssztt_EtwWriteTransfer @ 0x1C001A530 (McTemplateK0zqjuuujsssztt_EtwWriteTransfer.c)
 *     StorpLogPerUnitStatistics @ 0x1C001B5D8 (StorpLogPerUnitStatistics.c)
 *     RaidUnitCancelPendingRequests @ 0x1C001D304 (RaidUnitCancelPendingRequests.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001D33C (RaidUnitUnRegisterInterfaces.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C0021B54 (RaidUnitConvertToZombieUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0021FB0 (RaUnitDeregisterFromIdleDetection.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaUnitSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  int v2; // ebx
  __int64 *v3; // rdi
  void (__fastcall *v6)(_QWORD, __int64 *); // rax
  __int64 v7; // rdi
  const wchar_t *v8; // r10
  __int64 v10; // rcx
  char v11; // dl
  __int64 v12; // rcx
  __int64 v13; // [rsp+80h] [rbp+17h] BYREF
  __int128 v14; // [rsp+88h] [rbp+1Fh]

  v2 = *(_DWORD *)(a1 + 48);
  v3 = (__int64 *)(a1 + 24);
  v13 = 0LL;
  *(_DWORD *)(a1 + 48) = 5;
  v6 = *(void (__fastcall **)(_QWORD, __int64 *))(a1 + 3432);
  if ( v6 )
  {
    v10 = *v3;
    LODWORD(v13) = 8;
    v11 = *(_BYTE *)(v10 + 56);
    *(_WORD *)((char *)&v13 + 5) = *(_WORD *)(a1 + 96);
    HIBYTE(v13) = *(_BYTE *)(a1 + 98);
    BYTE4(v13) = v11;
    v6(0LL, &v13);
    *(_QWORD *)(a1 + 3432) = 0LL;
  }
  if ( (unsigned int)(v2 - 6) > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  RaidUnitCancelPendingRequests(a1);
  if ( RaidIsUnitControlSupported(a1, 10) )
  {
    v12 = *v3;
    v14 = 0LL;
    LOWORD(v14) = 1;
    WORD1(v14) = *(_WORD *)(v12 + 56);
    WORD4(v14) = *(_WORD *)(a1 + 96);
    BYTE10(v14) = *(_BYTE *)(a1 + 98);
    DWORD1(v14) = 4;
    RaCallMiniportUnitControl(v12 + 336);
  }
  if ( (byte_1C0092A05 & 0x10) != 0 )
  {
    v7 = *v3;
    v8 = (const wchar_t *)&unk_1C0081788;
    if ( *(_QWORD *)(v7 + 5016) )
      v8 = *(const wchar_t **)(v7 + 5016);
    McTemplateK0zqjuuujsssztt_EtwWriteTransfer(
      a1 + 169,
      a1 + 160,
      a1 + 2024,
      *(const wchar_t **)(v7 + 4656),
      *(_DWORD *)(v7 + 56),
      v7 + 5000,
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 2024,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v8,
      (*(_BYTE *)(a1 + 450) & 0x40) != 0,
      *(_BYTE *)(a1 + 450) >> 7);
  }
  StorpLogPerUnitStatistics(a1, 52);
  RaUnitReleaseRemoveLock(a1);
  RaUnitWaitForRemoveLock(a1);
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
