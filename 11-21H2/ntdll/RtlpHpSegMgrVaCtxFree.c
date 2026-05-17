/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x180120620
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x180058608 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180058CE8 (RtlpHpQueryVA.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int16 *v12; // r10
  int v13; // r11d
  __int16 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int16 *v16; // rcx
  unsigned __int16 *v17; // rcx
  __int16 *v19; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v19, 0LL);
  v8 = (a2 - v5) % *a3;
  v9 = (a2 - v5) / *a3;
  RtlAcquireSRWLockExclusive(a1 + 112, v8, v10, v11);
  v12 = v19;
  v13 = (unsigned __int16)(v19[1] ^ (1 << v9));
  v19[1] = v13;
  v14 = *v12;
  v15 = (unsigned __int64)(unsigned __int16)*v12 >> 15;
  if ( v13 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v12 + 1) != -1LL )
    {
      if ( v14 >= 0 )
        *v12 = v14 ^ (v14 ^ (v14 - 1)) & 0x7FF;
      while ( 1 )
      {
        v16 = *(unsigned __int16 **)(a1 + 8 * v15 + 120);
        if ( !v16 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v15 + 120) = *(_QWORD *)v16;
        if ( v16 == (unsigned __int16 *)(v12 + 4) )
          break;
        *(_QWORD *)v16 = v7;
        v7 = v16;
      }
      while ( 1 )
      {
        v17 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v17 = *(_QWORD *)(a1 + 8 * v15 + 120);
        *(_QWORD *)(a1 + 8 * v15 + 120) = v17;
      }
    }
  }
  else
  {
    if ( ((v13 - 1) & v13) == 0 )
    {
      *((_QWORD *)v12 + 1) = *(_QWORD *)(a1 + 8 * v15 + 120);
      *(_QWORD *)(a1 + 8 * v15 + 120) = v12 + 4;
    }
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
