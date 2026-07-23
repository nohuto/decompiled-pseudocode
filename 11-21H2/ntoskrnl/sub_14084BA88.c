/*
 * XREFs of sub_14084BA88 @ 0x14084BA88
 * Callers:
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1403CF888 @ 0x1403CF888 (sub_1403CF888.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14084BA88(struct _FILE_OBJECT *a1)
{
  NTSTATUS v2; // ebx
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-11h] BYREF
  __int128 v6; // [rsp+60h] [rbp+7h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+70h] [rbp+17h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  v4 = 0LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v8 = qword_140C53290;
  memset(&Event, 0, sizeof(Event));
  MemoryDescriptorList.ByteCount = 4096;
  v6 = 0LL;
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 28);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = sub_1403CF888(a1, (__int64)&MemoryDescriptorList, &v4, (__int64)&Event, 0, 0LL, (__int64)&v6);
  if ( v2 >= 0 )
  {
    KeWaitForSingleObject(&Event, WrVirtualMemory, 0, 0, 0LL);
    v2 = v6;
  }
  if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return (unsigned int)v2;
}
