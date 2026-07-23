/*
 * XREFs of sub_1409E4F10 @ 0x1409E4F10
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409E57B8 @ 0x1409E57B8 (sub_1409E57B8.c)
 */

__int64 __fastcall sub_1409E4F10(__int64 a1, char *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 *v10; // r15
  __int64 *i; // rcx
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 *j; // rsi
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int v19; // [rsp+24h] [rbp-44h]

  if ( a1 == *((_QWORD *)KeGetCurrentThread() + 23) )
  {
    if ( qword_140C5B100 )
    {
      if ( (unsigned __int8)sub_1409E57B8() )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D90, 0LL);
        qword_140C547C0 = (__int64)KeGetCurrentThread();
        v8 = qword_140C5B100;
        v9 = *(_DWORD *)(*(_QWORD *)(qword_140C5B100 + 16) + 16LL);
        v10 = (__int64 *)(qword_140C5B100 + 48);
        for ( i = *(__int64 **)(qword_140C5B100 + 48); i != v10; i = (__int64 *)*i )
          v9 = *((_DWORD *)i + 6) - (_DWORD)i + v9 - 40;
        if ( a4 )
          *a4 = v9;
        v12 = *(_DWORD **)(v8 + 16);
        v13 = v12[4];
        if ( a3 < v13 )
          v13 = a3;
        if ( v13 )
        {
          v14 = v13;
          memmove(a2, v12, v13);
          a2 += v14;
        }
        if ( a3 < v9 )
        {
          v19 = -2147483643;
        }
        else
        {
          for ( j = (__int64 *)*v10; j != v10; j = (__int64 *)*j )
          {
            v16 = *((_DWORD *)j + 6) - (_DWORD)j - 40;
            if ( *((_DWORD *)j + 6) - (_DWORD)j != 40 )
            {
              v17 = v16;
              memmove(a2, j + 5, v16);
              a2 += v17;
            }
          }
          v19 = 0;
        }
      }
      else
      {
        v19 = -1073741790;
      }
    }
    else
    {
      v19 = -1073741641;
    }
  }
  else
  {
    v19 = -1073741637;
  }
  if ( (struct _KTHREAD *)qword_140C547C0 == KeGetCurrentThread() )
  {
    qword_140C547C0 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C15D90);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D90);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  return v19;
}
