/*
 * XREFs of StorPortPause @ 0x1C0046980
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C0045184 @ 0x1C0045184 (sub_1C0045184.c)
 *     sub_1C00B2690 @ 0x1C00B2690 (sub_1C00B2690.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C00441C8 @ 0x1C00441C8 (sub_1C00441C8.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  _DWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  v4 = sub_1C000E2EC(a1);
  v5 = qword_1C0093468;
  v6 = (__int64)v4;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C((__int64)v4, 14, retaddr, (__int64)v4, v2, 0LL, 0LL);
  v7 = 255LL;
  if ( v6 )
    v7 = *(unsigned int *)(v6 + 56);
  if ( (byte_1C0093A00 & 4) != 0 )
  {
    LODWORD(v10) = v2;
    LODWORD(v9) = v7;
    sub_1C00441C8(v7, &stru_1C00894C0, v5, a1, v9, v10);
  }
  if ( !v6 )
    return 0;
  ++*(_DWORD *)(v6 + 5288);
  *(_DWORD *)(v6 + 1312) = v2;
  _InterlockedExchange((volatile __int32 *)(v6 + 1316), 1);
  sub_1C0019CFC(v6);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 1168), 134684676, 134684677) != 134684677
    || v6 == -1152 )
  {
    _InterlockedIncrement(&dword_1C0093C54);
    if ( (qword_1C0093468 & 0x800) != 0 )
      sub_1C0019E4C(v6, 22, retaddr, 306LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)sub_1C0019D54(v6) )
      KeInsertQueueDpc((PRKDPC)(v6 + 1648), 0LL, 0LL);
  }
  else
  {
    *(_DWORD *)(v6 + 1184) = 3;
    sub_1C0014D10((char *)(v6 + 944), (struct _SLIST_ENTRY *)(v6 + 1152));
  }
  return 1;
}
