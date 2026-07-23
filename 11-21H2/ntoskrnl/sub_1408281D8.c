/*
 * XREFs of sub_1408281D8 @ 0x1408281D8
 * Callers:
 *     sub_140828004 @ 0x140828004 (sub_140828004.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAllocateTimer @ 0x1402D5B50 (ExAllocateTimer.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A31C78 @ 0x140A31C78 (sub_140A31C78.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 *__fastcall sub_1408281D8(char a1, char a2)
{
  __int64 *PoolWithTag; // rax
  __int64 *v5; // rbx
  char *v6; // rax
  char *v7; // rdi
  _QWORD *v8; // rax
  __int64 Timer; // rax

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(
                             (POOL_TYPE)(a1 != 0 ? PagedPool : NonPagedPoolNx),
                             0x178uLL,
                             0x47417254u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  memset(PoolWithTag, 0, 0x178uLL);
  v5[34] = 0LL;
  if ( a2 || !a1 )
  {
    v6 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x47417254u);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x40uLL);
    v5[33] = (__int64)v7;
    if ( !v7 )
      goto LABEL_11;
    KeInitializeEvent((PRKEVENT)(v7 + 32), NotificationEvent, 0);
    v8 = (_QWORD *)v5[33];
    v8[2] = sub_1407FA9D0;
    v8[3] = v5;
    *v8 = 0LL;
    *(_WORD *)(v5[33] + 56) = 0;
    if ( a2 )
    {
      Timer = ExAllocateTimer((__int64)sub_140389CB0, v5[33], 8u);
      v5[45] = Timer;
      if ( !Timer )
      {
LABEL_11:
        sub_140A31C78(v5);
        return 0LL;
      }
    }
  }
  return v5;
}
