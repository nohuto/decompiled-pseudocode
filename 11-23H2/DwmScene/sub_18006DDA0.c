/*
 * XREFs of sub_18006DDA0 @ 0x18006DDA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 *     sub_1800401E8 @ 0x1800401E8 (sub_1800401E8.c)
 *     sub_18006ED08 @ 0x18006ED08 (sub_18006ED08.c)
 */

int __fastcall sub_18006DDA0(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9

  sub_180037B00((_QWORD *)a1);
  sub_1800401E8(a1 + 1464, 0LL, v2, v3);
  sub_1800401E8(a1 + 1465, 0LL, v4, v5);
  sub_1800401E8(a1 + 1467, 0LL, v6, v7);
  sub_1800401E8(a1 + 1468, 0LL, v8, v9);
  sub_1800401E8(a1 + 1466, 0LL, v10, v11);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 1552));
  sub_18006ED08(a1 + 1488);
  return Mtx_unlock((_Mtx_t)(a1 + 1552));
}
