/*
 * XREFs of sub_140859AD4 @ 0x140859AD4
 * Callers:
 *     sub_140B27838 @ 0x140B27838 (sub_140B27838.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_140859AD4(void *a1)
{
  int v1; // edi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  __int128 v4; // [rsp+50h] [rbp-30h] BYREF
  __int64 v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+6Ch] [rbp-14h]
  __int128 v8; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  Object = a1;
  v7 = 0;
  v1 = 0;
  Handle = 0LL;
  v5 = 0LL;
  v4 = 0x30uLL;
  v6 = 512;
  v8 = 0LL;
  if ( !byte_140C097C5 )
    return 0LL;
  while ( 1 )
  {
    result = PsCreateSystemThreadEx(
               (int)&Handle,
               0x1FFFFF,
               &v4,
               0LL,
               0LL,
               (__int64)sub_1403DE2B0,
               (__int64)&stru_140C46900,
               0LL,
               0LL);
    if ( (int)result < 0 )
      break;
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((ULONG_PTR)Object, (unsigned __int8)byte_140C0C6C8);
      ObfDereferenceObject(Object);
    }
    if ( ++v1 >= (unsigned int)(unsigned __int8)byte_140C097C5 )
      return 0LL;
  }
  return result;
}
