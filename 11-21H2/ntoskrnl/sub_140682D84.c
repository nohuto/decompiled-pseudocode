/*
 * XREFs of sub_140682D84 @ 0x140682D84
 * Callers:
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030B538 @ 0x14030B538 (sub_14030B538.c)
 *     sub_14030B6D0 @ 0x14030B6D0 (sub_14030B6D0.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     sub_1406FECE0 @ 0x1406FECE0 (sub_1406FECE0.c)
 */

__int64 __fastcall sub_140682D84(ULONG_PTR a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int8 v10; // di
  _OWORD v12[3]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  memset(v12, 0, sizeof(v12));
  CurrentThread = KeGetCurrentThread();
  if ( *((_QWORD *)CurrentThread + 23) != a1 )
  {
    v4 = 1;
    sub_14030D5C0(a1, 0LL, (__int64)v12, a4);
  }
  v8 = sub_1406F7D78(a1, -1LL, -1LL, 0LL);
  if ( v8 || (*(_DWORD *)(a1 + 2172) & 1) != 0 )
  {
    sub_14030B6D0((__int64)CurrentThread, a1);
    v9 = *(_QWORD *)(a1 + 1608);
    *(_QWORD *)(a1 + 1256) = *(_QWORD *)(a1 + 1296);
    v10 = sub_1406FECE0(a3 | 3u, v9, a1);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1120), 0x10u);
    sub_14030B538((__int64)CurrentThread, a1);
  }
  else
  {
    v10 = 0;
  }
  sub_1406F7F40(a1, -1LL, v8, 0LL);
  if ( v4 )
    sub_1402D0930((__int64)v12, 0LL);
  return v10;
}
