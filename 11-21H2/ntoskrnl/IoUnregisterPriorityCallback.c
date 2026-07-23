/*
 * XREFs of IoUnregisterPriorityCallback @ 0x140557E20
 * Callers:
 *     sub_14085D640 @ 0x14085D640 (sub_14085D640.c)
 * Callees:
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1403C7678 @ 0x1403C7678 (sub_1403C7678.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_1409FB4DC @ 0x1409FB4DC (sub_1409FB4DC.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r15
  signed __int64 *i; // r14
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  if ( (*(_DWORD *)(a1 + 16) & 0x200) == 0 )
    return;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = 0LL;
  for ( i = qword_140C46D20; ; ++i )
  {
    v5 = sub_140281870(&qword_140C46D20[v3]);
    v6 = v5;
    if ( v5 )
    {
      if ( v5[4].Count != a1 )
      {
        _m_prefetchw(i);
        v9 = *i;
        while ( ((unsigned __int64)v6 ^ v9) < 0xF )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64(i, v9 + 1, v9);
          if ( v10 == v9 )
            goto LABEL_15;
        }
        sub_1402AD030(v6);
        goto LABEL_15;
      }
      if ( sub_1403C7678(&qword_140C46D20[v3], 0LL, (__int64)v5) )
        break;
    }
LABEL_15:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 8 )
    {
      sub_1402F9540((__int64)CurrentThread);
      return;
    }
  }
  _InterlockedDecrement(&dword_140D00A90);
  _m_prefetchw(&qword_140C46D20[v3]);
  v7 = qword_140C46D20[v3];
  if ( ((unsigned __int64)v6 ^ v7) >= 0xF )
  {
LABEL_9:
    sub_1402AD030(v6);
  }
  else
  {
    while ( 1 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(&qword_140C46D20[v3], v7 + 1, v7);
      if ( v8 == v7 )
        break;
      if ( ((unsigned __int64)v6 ^ v7) >= 0xF )
        goto LABEL_9;
    }
  }
  sub_1402F9540((__int64)CurrentThread);
  sub_1409FB4DC(v6);
  sub_1406D9550(v6);
  *(_DWORD *)(a1 + 16) &= ~0x200u;
}
