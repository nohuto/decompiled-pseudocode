/*
 * XREFs of sub_18009F1E0 @ 0x18009F1E0
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18009F1E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v4; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rdx
  char v8; // r8
  _QWORD *v9; // rdx
  char result; // al
  char v11; // r9

  v2 = a1 + 136;
  v4 = (__int64 *)(a1 + 136);
  v6 = 8LL;
  do
  {
    v7 = v4 - 16;
    if ( *(_BYTE *)(a1 + 440) || sub_180011DF0(v4, v7) )
    {
      sub_1800124F8(v4, v7);
      v8 = *(_BYTE *)(a1 + 440);
    }
    v4 += 2;
    --v6;
  }
  while ( v6 );
  v9 = (_QWORD *)(a1 + 392);
  if ( v8 || (result = sub_180011DF0((_QWORD *)(a1 + 408), v9)) != 0 )
  {
    sub_1800124F8((__int64 *)(a1 + 408), v9);
LABEL_11:
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 176LL))(a2, v2, a1 + 408);
    goto LABEL_12;
  }
  if ( v11 )
    goto LABEL_11;
LABEL_12:
  *(_BYTE *)(a1 + 440) = 0;
  return result;
}
