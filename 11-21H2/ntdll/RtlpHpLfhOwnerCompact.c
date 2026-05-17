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

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // r15
  _QWORD *result; // rax
  unsigned __int64 v8; // r9
  _QWORD *i; // r14
  unsigned __int8 v10; // cl
  int v11; // r12d
  __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  _WORD *v15; // rcx
  __int64 v16; // rsi
  _WORD *j; // rsi
  __int64 v18; // rsi
  char v19; // cl
  unsigned int v20; // edi
  unsigned int v21; // ebx
  _QWORD *v22; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+80h] [rbp+18h]
  volatile signed __int64 *v24; // [rsp+88h] [rbp+20h]

  v23 = a3;
  v3 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v16 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v3 + *(_QWORD *)(a2 + 96)), a3);
      a3 = v23;
      v3 += 8LL;
      --v16;
    }
    while ( v16 );
  }
  v6 = (_QWORD *)(a2 + 24);
  v22 = v6;
  if ( (_QWORD *)*v6 != v6 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v24 = (volatile signed __int64 *)(a2 + 16);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 16));
    for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
    {
      v10 = *((_BYTE *)i + 45);
      v11 = 0;
      if ( v10 > 1u )
      {
        LODWORD(v12) = 1;
        while ( 1 )
        {
          v13 = (unsigned __int64)i + *((unsigned __int16 *)i + 23);
          v14 = v13 + 2LL * v10;
          v15 = (_WORD *)(v13 + 2LL * (unsigned int)v12);
          if ( *v15 )
            break;
          do
            --v15;
          while ( !*v15 );
          ++v15;
LABEL_22:
          for ( j = (_WORD *)(v13 + 2 * ((unsigned int)v12 + 1LL)); !*j && (unsigned __int64)j < v14; ++j )
            ;
          v12 = (__int64)((__int64)v15 - v13) >> 1;
          v18 = j - v15;
          if ( (_DWORD)v12 != -1 )
          {
            if ( (_DWORD)v18 )
            {
              if ( v11 )
              {
                v19 = *((_BYTE *)i + 44);
                v20 = (_DWORD)v12 << v19;
                v21 = (_DWORD)v18 << v19;
                ((void (__fastcall *)(_QWORD, char *, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
                  *(_QWORD *)a1,
                  (char *)i + (unsigned int)((_DWORD)v12 << v19),
                  (unsigned int)((_DWORD)v18 << v19));
                RtlpHpLfhSubsegmentDecBlockCounts(a1, i, v20, v21);
                LODWORD(v12) = v18 + v12;
              }
              else
              {
                if ( (v23 & 1) == 0 )
                  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72));
                v11 = 2;
                RtlAcquireSRWLockExclusive((unsigned __int64)(i + 3), v13, v14, v8);
              }
            }
            v10 = *((_BYTE *)i + 45);
            if ( (unsigned int)v12 < v10 )
              continue;
          }
          goto LABEL_5;
        }
        while ( (unsigned __int64)v15 < v14 )
        {
          if ( !*v15 )
          {
            v12 = (__int64)((__int64)v15 - v13) >> 1;
            goto LABEL_22;
          }
          ++v15;
        }
LABEL_5:
        v6 = v22;
        if ( v11 )
        {
          RtlReleaseSRWLockExclusive(i + 3);
          if ( (v23 & 1) == 0 )
            RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
        }
      }
    }
    return (_QWORD *)RtlReleaseSRWLockShared(v24);
  }
  return result;
}
