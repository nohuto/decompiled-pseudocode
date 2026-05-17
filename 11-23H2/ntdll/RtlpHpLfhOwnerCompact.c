/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x18005FDD4
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x18005FD44 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005FDD4 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerCompact @ 0x18005FDD4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18005FFFC (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v7; // r15
  _QWORD *result; // rax
  unsigned __int64 v9; // r9
  _QWORD *i; // r14
  __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int8 v13; // cl
  int v14; // r12d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  _WORD *v17; // rcx
  __int64 v18; // rsi
  char v19; // cl
  unsigned int v20; // edi
  unsigned int v21; // ebx
  _WORD *j; // rsi
  _QWORD *v23; // [rsp+78h] [rbp+10h]
  unsigned int v24; // [rsp+80h] [rbp+18h]
  volatile signed __int64 *v25; // [rsp+88h] [rbp+20h]

  v24 = a3;
  v4 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 && *(_BYTE *)(a2 + 2) )
  {
    v18 = *(unsigned __int8 *)(a2 + 2);
    do
    {
      RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v4 + *(_QWORD *)(a2 + 96)), a3);
      a3 = v24;
      v4 += 8LL;
      --v18;
    }
    while ( v18 );
  }
  v7 = (_QWORD *)(a2 + 24);
  v23 = v7;
  if ( (_QWORD *)*v7 != v7 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v25 = (volatile signed __int64 *)(a2 + 16);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 16), a2, a3, a4);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      v13 = *((_BYTE *)i + 45);
      v14 = 0;
      if ( v13 > 1u )
      {
        LODWORD(v11) = 1;
        while ( 1 )
        {
          v15 = (unsigned __int64)i + *((unsigned __int16 *)i + 23);
          v16 = v15 + 2LL * v13;
          v17 = (_WORD *)(v15 + 2LL * (unsigned int)v11);
          if ( *v17 )
            break;
          do
            --v17;
          while ( !*v17 );
          ++v17;
LABEL_28:
          for ( j = (_WORD *)(v15 + 2 * ((unsigned int)v11 + 1LL)); !*j && (unsigned __int64)j < v16; ++j )
            ;
          v11 = (__int64)((__int64)v17 - v15) >> 1;
          v12 = j - v17;
          if ( (_DWORD)v11 != -1 )
          {
            if ( (_DWORD)v12 )
            {
              if ( v14 )
              {
                v19 = *((_BYTE *)i + 44);
                v20 = (_DWORD)v11 << v19;
                v21 = (_DWORD)v12 << v19;
                ((void (__fastcall *)(_QWORD, char *, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
                  *(_QWORD *)a1,
                  (char *)i + (unsigned int)((_DWORD)v11 << v19),
                  (unsigned int)((_DWORD)v12 << v19));
                RtlpHpLfhSubsegmentDecBlockCounts(a1, i, v20, v21);
                LODWORD(v11) = v12 + v11;
              }
              else
              {
                if ( (v24 & 1) == 0 )
                  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), v15, v16, v9);
                v14 = 2;
                RtlAcquireSRWLockExclusive(i + 3);
              }
            }
            v13 = *((_BYTE *)i + 45);
            if ( (unsigned int)v11 < v13 )
              continue;
          }
          goto LABEL_6;
        }
        while ( (unsigned __int64)v17 < v16 )
        {
          if ( !*v17 )
          {
            v11 = (__int64)((__int64)v17 - v15) >> 1;
            goto LABEL_28;
          }
          ++v17;
        }
LABEL_6:
        v7 = v23;
        if ( v14 )
        {
          RtlReleaseSRWLockExclusive(i + 3);
          if ( (v24 & 1) == 0 )
            RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
        }
      }
    }
    return (_QWORD *)RtlReleaseSRWLockShared(v25);
  }
  return result;
}
