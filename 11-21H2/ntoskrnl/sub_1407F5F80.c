/*
 * XREFs of sub_1407F5F80 @ 0x1407F5F80
 * Callers:
 *     sub_140692780 @ 0x140692780 (sub_140692780.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x140212000 (PsGetJobSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F6170 @ 0x1402F6170 (sub_1402F6170.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey2 @ 0x14041F1E0 (ZwUnloadKey2.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407F612C @ 0x1407F612C (sub_1407F612C.c)
 *     sub_1407F6410 @ 0x1407F6410 (sub_1407F6410.c)
 */

__int64 __fastcall sub_1407F5F80(ULONG_PTR *a1, unsigned int a2, char a3, __int64 a4, __int64 a5, PVOID Object)
{
  int JobSilo; // edi
  int PermanentSiloContext; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // r14
  __int64 v10; // r13
  volatile signed __int64 *v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // r15
  char v16; // bl
  unsigned __int64 v18; // rcx
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  a5 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = sub_140732D40(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( sub_1402F6170((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
      }
      else
      {
        PermanentSiloContext = PsGetPermanentSiloContext(0LL, dword_140C48D10, (unsigned __int64 *)&a5);
        JobSilo = PermanentSiloContext;
        if ( PermanentSiloContext >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          v9 = (unsigned __int64 *)a5;
          --*((_WORD *)CurrentThread + 242);
          v10 = a5;
          v11 = (volatile signed __int64 *)(a5 + 16);
          ExAcquirePushLockExclusiveEx(a5 + 16, 0LL);
          if ( *(_DWORD *)(v10 + 84) )
          {
            JobSilo = -1073741738;
            if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v11);
            sub_1402AFC00((ULONG_PTR)v11);
            sub_1402F9540((__int64)KeGetCurrentThread());
            goto LABEL_17;
          }
          v12 = v9[6];
          v13 = 0LL;
          while ( v13 < v12 )
          {
            v14 = 0LL;
            if ( v13 < v12 )
            {
              if ( !is_mul_ok(v9[5], v13) || (v18 = v9[9], v14 = v18 + v9[5] * v13, v14 < v18) )
                v14 = 0LL;
            }
            v15 = *(_QWORD *)v14;
            if ( *(int *)(*(_QWORD *)v14 + 56LL) < 0 )
            {
              memset(&TargetKey.Attributes + 1, 0, 20);
              TargetKey.RootDirectory = 0LL;
              *(_QWORD *)&TargetKey.Length = 48LL;
              TargetKey.ObjectName = (PUNICODE_STRING)(v15 + 24);
              TargetKey.Attributes = 576;
              ZwUnloadKey2(&TargetKey, 1u);
              sub_1407F6410(v10, v15);
              v12 = v9[6];
            }
            else
            {
              ++v13;
            }
          }
          sub_1407F612C(v10);
          v16 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
            ExfTryToWakePushLock(v11);
          sub_1402AFC00((ULONG_PTR)v11);
          sub_1402F9540((__int64)KeGetCurrentThread());
          goto LABEL_16;
        }
        if ( PermanentSiloContext == -1073741275 )
LABEL_16:
          JobSilo = 0;
      }
    }
  }
LABEL_17:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
