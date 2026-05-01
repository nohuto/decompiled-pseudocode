/*
 * XREFs of SystemStateTrackerCreate @ 0x180043F30
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800439F0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x1800466F8 (-SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 SystemStateTrackerCreate()
{
  struct _SYSTEM_STATE_TRACKER *Heap; // rax
  struct _SYSTEM_STATE_TRACKER *v1; // rdi
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C6FF9,
      0LL,
      0LL,
      2u,
      &v5);
  Heap = (struct _SYSTEM_STATE_TRACKER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v1 = Heap;
  if ( Heap )
  {
    SstpInitialize(Heap);
    v2 = 0;
    GlobalSystemStateTracker = v1;
  }
  else
  {
    v2 = -1073741801;
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v2;
    v7 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800C7021,
      0LL,
      0LL,
      3u,
      &v5);
  }
  return v2;
}
