/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x18005A604
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x18005A574 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005A604 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005A604 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18005A82C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // r15
  _QWORD *i; // r14
  __int64 v8; // rbp
  __int64 v9; // rsi
  unsigned __int8 v10; // cl
  int v11; // r12d
  char *v12; // rdx
  unsigned __int64 v13; // r8
  char *v14; // rcx
  __int64 v15; // rsi
  char v16; // cl
  unsigned int v17; // edi
  unsigned int v18; // ebx
  char *j; // rsi
  _QWORD *v20; // [rsp+78h] [rbp+10h]
  unsigned int v21; // [rsp+80h] [rbp+18h]
  _RTL_SRWLOCK *SRWLock; // [rsp+88h] [rbp+20h]

  v21 = a3;
  v3 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v15 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v3 + *(_QWORD *)(a2 + 96)), a3);
      a3 = v21;
      v3 += 8LL;
      --v15;
    }
    while ( v15 );
  }
  v6 = (_QWORD *)(a2 + 24);
  v20 = v6;
  if ( (_QWORD *)*v6 != v6 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    SRWLock = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
    {
      v10 = *((_BYTE *)i + 45);
      v11 = 0;
      if ( v10 > 1u )
      {
        LODWORD(v8) = 1;
        while ( 1 )
        {
          v12 = (char *)i + *((unsigned __int16 *)i + 23);
          v13 = (unsigned __int64)&v12[2 * v10];
          v14 = &v12[2 * (unsigned int)v8];
          if ( *(_WORD *)v14 )
            break;
          do
            v14 -= 2;
          while ( !*(_WORD *)v14 );
          v14 += 2;
LABEL_28:
          for ( j = &v12[2 * (unsigned int)v8 + 2]; !*(_WORD *)j && (unsigned __int64)j < v13; j += 2 )
            ;
          v8 = (v14 - v12) >> 1;
          v9 = (j - v14) >> 1;
          if ( (_DWORD)v8 != -1 )
          {
            if ( (_DWORD)v9 )
            {
              if ( v11 )
              {
                v16 = *((_BYTE *)i + 44);
                v17 = (_DWORD)v8 << v16;
                v18 = (_DWORD)v9 << v16;
                ((void (__fastcall *)(unsigned __int64, char *, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[4].Value))(
                  a1->Value,
                  (char *)i + (unsigned int)((_DWORD)v8 << v16),
                  (unsigned int)((_DWORD)v9 << v16));
                RtlpHpLfhSubsegmentDecBlockCounts(a1, i, v17, v18);
                LODWORD(v8) = v9 + v8;
              }
              else
              {
                if ( (v21 & 1) == 0 )
                  RtlAcquireSRWLockShared(a1 + 9);
                v11 = 2;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)i + 3);
              }
            }
            v10 = *((_BYTE *)i + 45);
            if ( (unsigned int)v8 < v10 )
              continue;
          }
          goto LABEL_6;
        }
        while ( (unsigned __int64)v14 < v13 )
        {
          if ( !*(_WORD *)v14 )
          {
            v8 = (v14 - v12) >> 1;
            goto LABEL_28;
          }
          v14 += 2;
        }
LABEL_6:
        v6 = v20;
        if ( v11 )
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
