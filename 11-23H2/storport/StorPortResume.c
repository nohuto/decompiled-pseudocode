/*
 * XREFs of StorPortResume @ 0x1C0047270
 * Callers:
 *     sub_1C0045200 @ 0x1C0045200 (sub_1C0045200.c)
 *     sub_1C00B26F0 @ 0x1C00B26F0 (sub_1C00B26F0.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C0014D10 @ 0x1C0014D10 (sub_1C0014D10.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C0044154 @ 0x1C0044154 (sub_1C0044154.c)
 */

char __fastcall StorPortResume(__int64 a1)
{
  _DWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = sub_1C000E2EC(a1);
  v4 = (__int64)v2;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C((__int64)v2, 15, retaddr, (__int64)v2, 0LL, 0LL, 0LL);
  v5 = 255LL;
  if ( v4 )
    v5 = *(unsigned int *)(v4 + 56);
  if ( (byte_1C0093A00 & 4) != 0 )
  {
    LODWORD(v7) = v5;
    sub_1C0044154(v5, &stru_1C0089650, v3, a1, v7);
  }
  if ( !v4 )
    return 0;
  _InterlockedExchange((volatile __int32 *)(v4 + 1316), 0);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1248), 134684676, 134684677) != 134684677
    || v4 == -1232 )
  {
    _InterlockedIncrement(&dword_1C0093C54);
    if ( (qword_1C0093468 & 0x800) != 0 )
      sub_1C0019E4C(v4, 22, retaddr, 427LL, 0LL, 0LL, 0LL);
  }
  else
  {
    *(_DWORD *)(v4 + 1264) = 4;
    sub_1C0014D10((char *)(v4 + 944), (struct _SLIST_ENTRY *)(v4 + 1232));
  }
  return 1;
}
