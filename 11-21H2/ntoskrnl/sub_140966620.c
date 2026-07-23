/*
 * XREFs of sub_140966620 @ 0x140966620
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A7EB0 @ 0x1407A7EB0 (sub_1407A7EB0.c)
 */

__int64 __fastcall sub_140966620(void *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  PVOID v6; // rbp
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rsi
  volatile signed __int64 *v9; // rbp
  int v10; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a2 )
  {
    v5 = -1073741811;
  }
  else
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(a1, 1u, qword_140D069D8, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = sub_1407A7EB0((_QWORD *)(*((_QWORD *)Object + 2) + 40LL), a3, qword_140002E90);
      v8 = v7;
      if ( v7 )
      {
        if ( v6 == *(PVOID *)(v7 + 24) )
        {
          v9 = (volatile signed __int64 *)(v7 - 16);
          ExAcquirePushLockExclusiveEx(v7 - 16, 0LL);
          v10 = *(_DWORD *)(v8 + 104);
          if ( (v10 & 2) != 0 )
          {
            v5 = -1073741823;
          }
          else
          {
            *(_DWORD *)(v8 + 104) = v10 | 1;
            v5 = 0;
          }
          if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v9);
          sub_1402AFC00((ULONG_PTR)v9);
          v6 = Object;
        }
        else
        {
          v5 = -1073741790;
        }
        sub_1407A5A54(v8, 1);
      }
      else
      {
        v5 = -1073741816;
      }
      ObfDereferenceObject(v6);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
