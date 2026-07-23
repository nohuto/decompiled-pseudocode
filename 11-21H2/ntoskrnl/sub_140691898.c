/*
 * XREFs of sub_140691898 @ 0x140691898
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
 *     sub_140691B00 @ 0x140691B00 (sub_140691B00.c)
 *     sub_140691BB0 @ 0x140691BB0 (sub_140691BB0.c)
 *     sub_140692514 @ 0x140692514 (sub_140692514.c)
 *     sub_1406928FC @ 0x1406928FC (sub_1406928FC.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1407F6410 @ 0x1407F6410 (sub_1407F6410.c)
 */

__int64 __fastcall sub_140691898(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, PVOID Object)
{
  unsigned __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // rdi
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int JobSilo; // ebx
  int v16; // edi
  unsigned __int64 v17; // rax
  int v18; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v20; // eax
  char v21; // r15
  unsigned __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int128 v26; // [rsp+60h] [rbp-10h] BYREF

  Object = 0LL;
  v23 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  v11 = *(unsigned __int16 *)(a1 + 8);
  if ( (v11 & 1) != 0 || (v12 = *(unsigned __int16 *)(a1 + 10), (v12 & 1) != 0) )
  {
    JobSilo = -1073741811;
    goto LABEL_26;
  }
  if ( !(_WORD)v11 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v12 )
    return (unsigned int)-1073741811;
  v13 = v11 + 20;
  v14 = v13 + v12;
  if ( v13 > v14 || a2 < v14 )
    return (unsigned int)-1073741811;
  JobSilo = sub_140732D40(*(_QWORD *)a1, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 12);
    *((_QWORD *)&v26 + 1) = a1 + 20;
    v17 = *(unsigned __int16 *)(a1 + 8);
    WORD1(v26) = v17;
    LOWORD(v26) = v17;
    *((_QWORD *)&v25 + 1) = a1 + 2 * ((v17 >> 1) + 10);
    LOWORD(v17) = *(_WORD *)(a1 + 10);
    v18 = *(_DWORD *)(a1 + 16);
    WORD1(v25) = v17;
    LOWORD(v25) = v17;
    if ( (v16 & 7) != v16 )
      goto LABEL_24;
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_20;
    if ( sub_1402F6170((__int64)KeGetCurrentThread(), 0LL) )
    {
LABEL_24:
      JobSilo = -1073741811;
    }
    else
    {
      v24 = 0LL;
      sub_1406928FC(&v24);
      JobSilo = PsGetPermanentSiloContext(0LL, dword_140C48D10, &v23);
      if ( JobSilo >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        v8 = v23;
        ExAcquirePushLockExclusiveEx(v23 + 16, 0LL);
        v9 = 1;
        v20 = sub_140692514(v8, &v26, v24, &v25, v16, v18, &a5);
        v10 = a5;
        JobSilo = v20;
        if ( v20 >= 0 )
        {
          JobSilo = sub_140691BB0(v8, a5);
          if ( JobSilo >= 0 )
          {
            JobSilo = sub_140691B00(v10);
            if ( JobSilo >= 0 )
            {
              JobSilo = 0;
LABEL_18:
              v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL);
              if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
                ExfTryToWakePushLock(v8 + 16);
              sub_1402AFC00(v8 + 16);
              sub_1402F9540((__int64)KeGetCurrentThread());
              goto LABEL_20;
            }
          }
        }
LABEL_26:
        if ( v10 )
          sub_1407F6410(v8, v10);
        if ( !v9 )
          goto LABEL_20;
        goto LABEL_18;
      }
    }
  }
LABEL_20:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
