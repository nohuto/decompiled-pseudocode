/*
 * XREFs of sub_1409B1A00 @ 0x1409B1A00
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1409B1A00(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE v4; // si
  NTSTATUS v5; // edi
  PEPROCESS ThreadProcess; // rax
  PETHREAD v7; // rbx
  PETHREAD Thread; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  Thread = 0LL;
  v4 = *((_BYTE *)CurrentThread + 562);
  v5 = ObReferenceObjectByHandle(a1, 0x10u, (POBJECT_TYPE)PsThreadType, v4, (PVOID *)&Thread, 0LL);
  if ( v5 >= 0 )
  {
    ThreadProcess = PsGetThreadProcess(CurrentThread);
    v7 = Thread;
    if ( (*((_DWORD *)ThreadProcess + 280) & 0x20000) != 0 && ThreadProcess == PsGetThreadProcess(Thread) )
    {
      v5 = -1073740278;
    }
    else if ( (*((_DWORD *)v7 + 29) & 0x400) != 0 || *((_QWORD *)v7 + 198) )
    {
      v5 = -1073741816;
    }
    else
    {
      v5 = sub_1407043D0(v7, a2, v4, v4, 1);
    }
    ObfDereferenceObject(v7);
  }
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&Thread;
  LODWORD(Thread) = v5;
  UserData.Size = 4;
  EtwWrite(qword_140C15DF8, &stru_140038A98, 0LL, 1u, &UserData);
  return (unsigned int)v5;
}
