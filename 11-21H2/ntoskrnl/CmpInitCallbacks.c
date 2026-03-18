/*
 * XREFs of CmpInitCallbacks @ 0x1408639BC
 * Callers:
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 */

union _SLIST_HEADER *CmpInitCallbacks()
{
  union _SLIST_HEADER *result; // rax

  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_140C497F8 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  result = &CmpCallbackContextSList;
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  CmpCallbackContextSList = 0LL;
  return result;
}
