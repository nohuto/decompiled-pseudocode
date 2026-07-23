/*
 * XREFs of sub_1407A8900 @ 0x1407A8900
 * Callers:
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1407A87D0 @ 0x1407A87D0 (sub_1407A87D0.c)
 * Callees:
 *     sub_1402AC270 @ 0x1402AC270 (sub_1402AC270.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F344C @ 0x1402F344C (sub_1402F344C.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 */

_BYTE *__fastcall sub_1407A8900(__int64 a1, char a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rsi
  __int64 v5; // r14
  signed __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  int v13; // ebx
  bool v14; // zf
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rcx
  volatile __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int128 v22; // [rsp+20h] [rbp-28h]
  __int128 v23; // [rsp+30h] [rbp-18h]

  if ( (a1 & 0x3FC) == 0 )
    return 0LL;
  v3 = (unsigned __int64 *)sub_140733340((unsigned int *)qword_140D06A60, a1);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = qword_140D06A60;
  _m_prefetchw(v3);
  *(_QWORD *)&v22 = *v3;
  v6 = v3[1];
  *((_QWORD *)&v22 + 1) = v6;
  v7 = v22;
  if ( (v22 & 0x1FFFE) == 0 )
  {
LABEL_10:
    v13 = 0;
    if ( !sub_1402F344C(qword_140D06A60, v4) )
      return 0LL;
    v11 = (_BYTE *)(((__int64)*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (*v11 & 0x7F) == a2 )
    {
      if ( a2 == 3 )
        v14 = (*(_DWORD *)((((__int64)*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x464) & 0x400000C) == 0x4000000;
      else
        v14 = (*(_DWORD *)((((__int64)*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x560) & 3) == 2;
      if ( v14 )
        v13 = sub_1402AC270(v4);
      v15 = (unsigned int)(v13 + 1);
      _m_prefetchw(v11 - 48);
      v16 = *((_QWORD *)v11 - 6);
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 - 6, v15 + v16, v16);
          if ( v17 == v16 )
            break;
          if ( !v16 )
            goto LABEL_25;
        }
        if ( dword_140D05010 )
          sub_1405C5EC8((__int64)(v11 - 48), 1, v15, 0x746C6644u);
LABEL_20:
        v18 = qword_140D06A60;
        _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 1uLL);
        v19 = (volatile __int64 *)(v18 + 48);
        _InterlockedOr(v21, 0);
        if ( *v19 )
          ExfUnblockPushLock(v19, 0LL);
        return v11;
      }
LABEL_25:
      v20 = *v4 & 0xFFFFFFFFFFFE0001uLL;
      v23 = v20;
      *v4 = v20;
    }
    v11 = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( (v7 & 1) == 0 )
    {
      sub_1407ED9FC(v5, v4, v7);
      _m_prefetchw(v4);
      v6 = v4[1];
      *(_QWORD *)&v22 = *v4;
      v7 = v22;
      *((_QWORD *)&v22 + 1) = v6;
      goto LABEL_27;
    }
    *(_QWORD *)&v8 = v7;
    *((_QWORD *)&v8 + 1) = v6;
    v9 = _InterlockedCompareExchange128((volatile signed __int64 *)v4, v6, v7 - 2, (signed __int64 *)&v8);
    v6 = v8 >> 64;
    v10 = v8;
    v7 = v8;
    v22 = v8;
    if ( v9 )
      break;
LABEL_27:
    if ( (v7 & 0x1FFFE) == 0 )
      goto LABEL_10;
  }
  if ( (unsigned __int16)(v10 >> 1) == 16 )
    v7 = ((unsigned int)v7 ^ (2 * (unsigned int)(v10 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v7;
  v11 = (_BYTE *)((v7 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (*v11 & 0x7F) == a2 )
    return v11;
  ObfDereferenceObject(v11);
  return 0LL;
}
