/*
 * XREFs of sub_1409851A4 @ 0x1409851A4
 * Callers:
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402F344C @ 0x1402F344C (sub_1402F344C.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_140883EDC @ 0x140883EDC (sub_140883EDC.c)
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 */

char __fastcall sub_1409851A4(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4, int a5)
{
  int v7; // r12d
  _DWORD *v9; // rdi
  struct _KTHREAD *CurrentThread; // r15
  char v11; // di
  __int64 *v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // r10
  __int64 v15; // rax
  signed __int32 v17[12]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a2;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  v9 = (_DWORD *)sub_140883EDC((unsigned int *)a1, a2);
  if ( !v9 )
    return 1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( sub_1402F344C(a1, a3) )
  {
    _m_prefetchw(v9);
    LODWORD(v12) = *v9;
    if ( a4 == ((*(__int64 *)a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v13 = a5 & (unsigned int)v12;
      if ( (a5 & (unsigned int)v12) != 0 )
      {
        v14 = 0LL;
        *v9 = (unsigned int)v12 & ~a5;
        if ( (*(_BYTE *)(a4 + 26) & 0x20) != 0 )
        {
          v15 = byte_140C25440[*(_BYTE *)(a4 + 26) & 0x3F];
          v12 = (__int64 *)(a4 - v15);
          if ( a4 != v15 )
            v14 = *v12;
        }
        sub_1409C820C(
          (_DWORD)v12,
          a4 + 48,
          v7,
          qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
        + 16,
          v13,
          v17[10],
          v14);
      }
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    _InterlockedExchangeAdd64(a3, 1uLL);
    _InterlockedOr(v17, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    v11 = 0;
  }
  sub_1402AC800((__int64)CurrentThread);
  return v11;
}
