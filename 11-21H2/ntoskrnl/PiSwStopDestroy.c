/*
 * XREFs of PiSwStopDestroy @ 0x140766F84
 * Callers:
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x140563B98 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x140563CAC (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PiSwFindPdoAssociation @ 0x1406E34FC (PiSwFindPdoAssociation.c)
 *     PiSwFindChildren @ 0x14076E82C (PiSwFindChildren.c)
 *     PnpConcatPWSTR @ 0x14078C9E8 (PnpConcatPWSTR.c)
 *     PiSwCloseDevice @ 0x14095341C (PiSwCloseDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD **Children; // r14
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  const wchar_t *v16; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren(&DestinationString);
  if ( Children )
  {
    if ( (byte_140C0DD4C & 2) != 0 )
      McTemplateK0zzz_EtwWriteTransfer(
        v7,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelClose_Start,
        v8,
        a2,
        L"DRIVERENUM",
        0LL);
    v4 = 1;
    v10 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (char)L"SWD\\");
    if ( v10 >= 0 )
    {
      v14 = *Children;
      while ( v14 != Children )
      {
        v15 = (__int64)(v14 - 12);
        v16 = (const wchar_t *)*(v14 - 11);
        v14 = (_QWORD *)*v14;
        if ( !wcsicmp(v16, 0LL) && (*(_DWORD *)(v15 + 4) & 1) == 0 && PiSwFindPdoAssociation(v15, a3, 1) )
          PiSwCloseDevice(v15);
      }
    }
  }
  else
  {
    v10 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v4 && (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v11,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelClose_Stop,
      v12,
      a2,
      L"DRIVERENUM",
      0LL,
      v10);
  return (unsigned int)v10;
}
