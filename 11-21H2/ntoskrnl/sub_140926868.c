/*
 * XREFs of sub_140926868 @ 0x140926868
 * Callers:
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_140926868(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  int JobSilo; // esi
  int v8; // eax
  PVOID v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdi
  volatile signed __int64 *v12; // rbp
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  if ( a2 < 0x10 || (*(_DWORD *)(a1 + 12) & *(_DWORD *)(a1 + 8)) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = sub_140732D40(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
    v9 = Object;
    JobSilo = v8;
    if ( v8 >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        JobSilo = PsGetPermanentSiloContext(a5, dword_140C48D10, (unsigned __int64 *)&a6);
        if ( JobSilo >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          v11 = a6;
          v12 = (volatile signed __int64 *)(a6 + 16);
          ExAcquirePushLockExclusiveEx(a6 + 16, 0LL);
          *(_DWORD *)(v11 + 80) = ~*(_DWORD *)(a1 + 12) & (*(_DWORD *)(a1 + 8) | *(_DWORD *)(v11 + 80));
          if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v12);
          sub_1402AFC00((ULONG_PTR)v12);
          sub_1402F9540((__int64)KeGetCurrentThread());
          v9 = Object;
        }
      }
    }
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
