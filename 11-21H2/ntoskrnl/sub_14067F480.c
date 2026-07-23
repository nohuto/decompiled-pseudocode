/*
 * XREFs of sub_14067F480 @ 0x14067F480
 * Callers:
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1406A18C0 @ 0x1406A18C0 (sub_1406A18C0.c)
 *     sub_1406B3C34 @ 0x1406B3C34 (sub_1406B3C34.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_140721254 @ 0x140721254 (sub_140721254.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407C83F0 @ 0x1407C83F0 (sub_1407C83F0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140915854 @ 0x140915854 (sub_140915854.c)
 * Callees:
 *     sub_14067F34C @ 0x14067F34C (sub_14067F34C.c)
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 */

__int64 __fastcall sub_14067F480(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = a1[7];
  if ( !v3 && !a1[8] )
    return 3222863874LL;
  v5 = a1[1] ^ 1LL;
  if ( (a1[1] & 1) == 0 )
    v5 = a1[1];
  v6 = *(_QWORD *)(v5 + 32);
  if ( (v3 & 1) != 0 )
  {
    result = sub_14067F34C(a1[7], *(_QWORD *)(v5 + 32), 0, &v9);
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 4152);
    if ( !v7 )
      return 3222863877LL;
    result = sub_14067F520(a1[7], a1[8], v7, v6, 0, (__int64)&v9);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  return result;
}
