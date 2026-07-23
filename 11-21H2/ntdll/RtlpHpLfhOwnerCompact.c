/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x18005F5FC
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x18005F56C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005F5FC (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005F5FC (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18005F81C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // r15
  _QWORD *i; // r14
  unsigned __int8 v8; // cl
  int v9; // r12d
  __int64 v10; // rbp
  char *v11; // rdx
  unsigned __int64 v12; // r8
  char *v13; // rcx
  __int64 v14; // rsi
  char *j; // rsi
  __int64 v16; // rsi
  char v17; // cl
  unsigned int v18; // edi
  unsigned int v19; // ebx
  _QWORD *v20; // [rsp+78h] [rbp+10h]
  unsigned int v21; // [rsp+80h] [rbp+18h]
  _RTL_SRWLOCK *SRWLock; // [rsp+88h] [rbp+20h]

  v21 = a3;
  v3 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v14 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v3 + *(_QWORD *)(a2 + 96)), a3);
      a3 = v21;
      v3 += 8LL;
      --v14;
    }
    while ( v14 );
  }
  v6 = (_QWORD *)(a2 + 24);
  v20 = v6;
  if ( (_QWORD *)*v6 != v6 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    SRWLock = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
    {
      v8 = *((_BYTE *)i + 45);
      v9 = 0;
      if ( v8 > 1u )
      {
        LODWORD(v10) = 1;
        while ( 1 )
        {
          v11 = (char *)i + *((unsigned __int16 *)i + 23);
          v12 = (unsigned __int64)&v11[2 * v8];
          v13 = &v11[2 * (unsigned int)v10];
          if ( *(_WORD *)v13 )
            break;
          do
            v13 -= 2;
          while ( !*(_WORD *)v13 );
          v13 += 2;
LABEL_22:
          for ( j = &v11[2 * (unsigned int)v10 + 2]; !*(_WORD *)j && (unsigned __int64)j < v12; j += 2 )
            ;
          v10 = (v13 - v11) >> 1;
          v16 = (j - v13) >> 1;
          if ( (_DWORD)v10 != -1 )
          {
            if ( (_DWORD)v16 )
            {
              if ( v9 )
              {
                v17 = *((_BYTE *)i + 44);
                v18 = (_DWORD)v10 << v17;
                v19 = (_DWORD)v16 << v17;
                ((void (__fastcall *)(unsigned __int64, char *, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[4].Value))(
                  a1->Value,
                  (char *)i + (unsigned int)((_DWORD)v10 << v17),
                  (unsigned int)((_DWORD)v16 << v17));
                RtlpHpLfhSubsegmentDecBlockCounts(a1, i, v18, v19);
                LODWORD(v10) = v16 + v10;
              }
              else
              {
                if ( (v21 & 1) == 0 )
                  RtlAcquireSRWLockShared(a1 + 9);
                v9 = 2;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)i + 3);
              }
            }
            v8 = *((_BYTE *)i + 45);
            if ( (unsigned int)v10 < v8 )
              continue;
          }
          goto LABEL_5;
        }
        while ( (unsigned __int64)v13 < v12 )
        {
          if ( !*(_WORD *)v13 )
          {
            v10 = (v13 - v11) >> 1;
            goto LABEL_22;
          }
          v13 += 2;
        }
LABEL_5:
        v6 = v20;
        if ( v9 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)i + 3);
          if ( (v21 & 1) == 0 )
            RtlReleaseSRWLockShared(a1 + 9);
        }
      }
    }
    RtlReleaseSRWLockShared(SRWLock);
  }
}
