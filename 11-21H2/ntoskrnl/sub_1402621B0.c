/*
 * XREFs of sub_1402621B0 @ 0x1402621B0
 * Callers:
 *     sub_140261CF8 @ 0x140261CF8 (sub_140261CF8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall sub_1402621B0(__int64 a1, void *a2, KSTART_ROUTINE *a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-18h] BYREF
  int v13; // [rsp+68h] [rbp-8h]
  int v14; // [rsp+6Ch] [rbp-4h]
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  v14 = 0;
  v11[1] = 0;
  v13 = -1;
  v12[1] = v12;
  v12[0] = v12;
  v10 = a1;
  v11[0] = 393216;
  v5 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, a2, 0LL, a3, &v10);
  if ( v5 >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v7 = ThreadHandle;
    v5 = v6;
    *a4 = Object;
    ObCloseHandle(v7, 0);
    ThreadHandle = 0LL;
    KeWaitForSingleObject(v11, Executive, 0, 0, 0LL);
    if ( v13 < 0 )
      v5 = v13;
  }
  if ( ThreadHandle )
    ObCloseHandle(ThreadHandle, 0);
  return (unsigned int)v5;
}
