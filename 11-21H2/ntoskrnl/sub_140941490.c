/*
 * XREFs of sub_140941490 @ 0x140941490
 * Callers:
 *     IoEnumerateKsrPersistentMemoryEx @ 0x14055F550 (IoEnumerateKsrPersistentMemoryEx.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140940CB0 (IoReserveKsrPersistentMemoryEx.c)
 *     sub_140941654 @ 0x140941654 (sub_140941654.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_140941588 @ 0x140941588 (sub_140941588.c)
 */

__int64 __fastcall sub_140941490(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v3; // rcx
  NTSTATUS v4; // eax
  HANDLE v5; // rdi
  NTSTATUS v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF

  v3 = (UNICODE_STRING *)(*(_QWORD *)(a1 + 48) + 24LL);
  KeyHandle = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  v8 = 0LL;
  v4 = sub_14067B470(v3, 0x20019u, &Handle, 0LL, 0);
  v5 = Handle;
  v6 = v4;
  if ( v4 >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *((_QWORD *)&v8 + 1) = L"Parameters";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
    LODWORD(v8) = 1441812;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v6 >= 0 )
      v6 = sub_140941588(KeyHandle, a2);
  }
  if ( KeyHandle != (HANDLE)-1LL )
  {
    ZwClose(KeyHandle);
    KeyHandle = (HANDLE)-1LL;
  }
  if ( v5 != (HANDLE)-1LL )
    ZwClose(v5);
  return (unsigned int)v6;
}
