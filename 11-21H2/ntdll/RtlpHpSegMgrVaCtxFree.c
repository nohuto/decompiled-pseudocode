/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x180120620
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x180058608 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180058CE8 (RtlpHpQueryVA.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(_RTL_SRWLOCK *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdi
  __int16 *v9; // r10
  int v10; // r11d
  __int16 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int16 *Value; // rcx
  unsigned __int64 *v14; // rcx
  __int16 *v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v16, 0LL);
  v8 = (a2 - v5) / *a3;
  RtlAcquireSRWLockExclusive(a1 + 14);
  v9 = v16;
  v10 = (unsigned __int16)(v16[1] ^ (1 << v8));
  v16[1] = v10;
  v11 = *v9;
  v12 = (unsigned __int64)(unsigned __int16)*v9 >> 15;
  if ( v10 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v9 + 1) != -1LL )
    {
      if ( v11 >= 0 )
        *v9 = v11 ^ (v11 ^ (v11 - 1)) & 0x7FF;
      while ( 1 )
      {
        Value = (unsigned __int16 *)a1[v12 + 15].Value;
        if ( !Value )
          NT_ASSERT("Link != ((void *)0)");
        a1[v12 + 15] = *(_RTL_SRWLOCK *)Value;
        if ( Value == (unsigned __int16 *)(v9 + 4) )
          break;
        *(_QWORD *)Value = v7;
        v7 = Value;
      }
      while ( 1 )
      {
        v14 = (unsigned __int64 *)v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *v14 = a1[v12 + 15].Value;
        a1[v12 + 15].Value = (unsigned __int64)v14;
      }
    }
  }
  else
  {
    if ( ((v10 - 1) & v10) == 0 )
    {
      *((_RTL_SRWLOCK *)v9 + 1) = a1[v12 + 15];
      a1[v12 + 15].Value = (unsigned __int64)(v9 + 4);
    }
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive(a1 + 14);
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
