/*
 * XREFs of sub_1409262FC @ 0x1409262FC
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
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409262FC(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // r13
  int v6; // r12d
  unsigned __int64 v7; // r15
  int JobSilo; // esi
  unsigned __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // esi
  _QWORD *PoolWithTag; // rax
  void *v18; // r8
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  _QWORD *v21; // r15
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v25; // [rsp+48h] [rbp-39h] BYREF
  PVOID Object; // [rsp+50h] [rbp-31h] BYREF
  void *v27; // [rsp+58h] [rbp-29h] BYREF
  __int64 v28; // [rsp+60h] [rbp-21h] BYREF
  __int128 v29; // [rsp+70h] [rbp-11h] BYREF
  __int128 v30; // [rsp+80h] [rbp-1h] BYREF
  int v33; // [rsp+F0h] [rbp+6Fh]
  int v35; // [rsp+F8h] [rbp+77h]

  v3 = a1;
  v4 = 0LL;
  Object = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  v6 = 0;
  v7 = 12LL;
  if ( a2 < 0xC )
    goto LABEL_4;
  sub_140732D40(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  JobSilo = PsGetJobSilo((__int64)Object);
  if ( JobSilo >= 0 )
  {
    if ( sub_1402F6170((__int64)KeGetCurrentThread(), 0LL) )
    {
LABEL_4:
      JobSilo = -1073741811;
      goto LABEL_45;
    }
    v27 = (void *)v9;
    sub_1406928FC((unsigned __int64 *)&v27);
    JobSilo = PsGetPermanentSiloContext(0LL, dword_140C48D10, (unsigned __int64 *)&v25);
    if ( JobSilo < 0 )
    {
      v5 = v25;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v5 = v25;
      ExAcquirePushLockExclusiveEx(v25 + 16, 0LL);
      v6 = 1;
      v33 = 0;
      if ( *(_DWORD *)(v3 + 8) )
      {
        while ( 1 )
        {
          v11 = v7 + 12;
          v28 = 0LL;
          v12 = v7 + v3;
          v30 = 0LL;
          v29 = 0LL;
          if ( v7 >= v7 + 12 )
            break;
          if ( a2 < v11 )
            break;
          v13 = *(unsigned __int16 *)(v12 + 4);
          if ( (v13 & 1) != 0 )
            break;
          if ( !(_WORD)v13 )
            break;
          v14 = v13 + v11;
          if ( v11 > v13 + v11 )
            break;
          v15 = *(unsigned __int16 *)(v12 + 6);
          if ( (v15 & 1) != 0 )
            break;
          if ( !(_WORD)v15 )
            break;
          v7 = v14 + v15;
          if ( v14 > v14 + v15 )
            break;
          if ( a2 < v7 )
            break;
          v16 = *(_DWORD *)(v12 + 8);
          *((_QWORD *)&v30 + 1) = v12 + 12;
          WORD1(v30) = v13;
          LOWORD(v30) = v13;
          WORD1(v29) = v15;
          LOWORD(v29) = v15;
          *((_QWORD *)&v29 + 1) = v12 + 2 * (((unsigned __int64)(unsigned int)v13 >> 1) + 6);
          v35 = *(_DWORD *)v12;
          if ( (v16 & 7) != v16 )
            break;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x67655256u);
          if ( !PoolWithTag )
          {
            JobSilo = -1073741670;
            goto LABEL_33;
          }
          v18 = v27;
          *PoolWithTag = v4;
          v19 = PoolWithTag;
          PoolWithTag[1] = 0LL;
          v4 = PoolWithTag;
          JobSilo = sub_140692514(v5, (const void **)&v30, v18, (const void **)&v29, v16, v35, &v28);
          if ( JobSilo < 0 )
            goto LABEL_29;
          v4[1] = v28;
          if ( (unsigned int)++v33 >= *(_DWORD *)(a1 + 8) )
          {
            v20 = v19;
            while ( 1 )
            {
              JobSilo = sub_140691BB0((unsigned __int64 *)v5, v20[1]);
              if ( JobSilo < 0 )
                break;
              v20 = (_QWORD *)*v20;
              if ( !v20 )
              {
                v21 = v19;
                while ( 1 )
                {
                  JobSilo = sub_140691B00(v19[1]);
                  if ( JobSilo < 0 )
                    goto LABEL_34;
                  v19 = (_QWORD *)*v19;
                  if ( !v19 )
                    goto LABEL_7;
                }
              }
            }
LABEL_29:
            v21 = v19;
            goto LABEL_34;
          }
          v3 = a1;
        }
        JobSilo = -1073741811;
      }
      else
      {
LABEL_7:
        JobSilo = 0;
      }
    }
  }
LABEL_33:
  v21 = v4;
  if ( v4 )
  {
LABEL_34:
    v22 = (_QWORD *)*v4;
    do
    {
      if ( JobSilo < 0 )
      {
        v23 = v21[1];
        if ( v23 )
          sub_1407F6410((_QWORD *)v5, v23);
      }
      ExFreePoolWithTag(v21, 0x67655256u);
      v21 = v22;
      if ( v22 )
        v22 = (_QWORD *)*v22;
    }
    while ( v21 );
  }
  if ( v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 16);
    sub_1402AFC00(v5 + 16);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
LABEL_45:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
