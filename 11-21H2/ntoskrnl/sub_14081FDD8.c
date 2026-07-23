/*
 * XREFs of sub_14081FDD8 @ 0x14081FDD8
 * Callers:
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_14081FCD8 @ 0x14081FCD8 (sub_14081FCD8.c)
 *     sub_14082052C @ 0x14082052C (sub_14082052C.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 */

__int64 __fastcall sub_14081FDD8(__int64 a1, void *a2, ULONG a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  v7 = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, *(_QWORD *)(a1 + 48), 19, 0, 983103, 1, (__int64)&KeyHandle, 0LL);
  if ( v7 >= 0 )
  {
    ValueName.Buffer = L"AllocConfig";
    *(_DWORD *)&ValueName.Length = 1572886;
    if ( a2 )
      v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, a2, a3);
    else
      v8 = ZwDeleteValueKey(KeyHandle, &ValueName);
    v7 = v8;
    ZwClose(KeyHandle);
  }
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
