/*
 * XREFs of sub_1403898C4 @ 0x1403898C4
 * Callers:
 *     sub_1403D7250 @ 0x1403D7250 (sub_1403D7250.c)
 *     sub_1403D8FF0 @ 0x1403D8FF0 (sub_1403D8FF0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14037907C @ 0x14037907C (sub_14037907C.c)
 *     sub_1403899C8 @ 0x1403899C8 (sub_1403899C8.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall sub_1403898C4(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  void *StartContext; // rdi
  void (__fastcall *StartRoutine)(PRKEVENT *); // rax
  NTSTATUS v8; // ebx
  __int128 Object; // [rsp+40h] [rbp-20h] BYREF
  char *v11; // [rsp+50h] [rbp-10h]
  HANDLE ThreadHandle; // [rsp+88h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  v11 = 0LL;
  Object = 0LL;
  v5 = sub_1403899C8(a1, a3);
  StartContext = (void *)v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = a2;
    if ( a3 )
    {
      DWORD1(Object) = 0;
      v11 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      *(_QWORD *)(v5 + 16) = &Object;
      StartRoutine = sub_14037A5F0;
    }
    else
    {
      StartRoutine = (void (__fastcall *)(PRKEVENT *))sub_1403D8FF0;
    }
    v8 = PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           *(HANDLE *)(a2 + 1856),
           0LL,
           (PKSTART_ROUTINE)StartRoutine,
           StartContext);
    if ( v8 < 0 )
    {
      sub_14037907C((struct _EX_RUNDOWN_REF **)StartContext);
    }
    else
    {
      if ( a3 )
        KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( ThreadHandle )
    ObCloseHandle(ThreadHandle, 0);
  return (unsigned int)v8;
}
