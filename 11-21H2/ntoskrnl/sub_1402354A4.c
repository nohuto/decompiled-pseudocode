/*
 * XREFs of sub_1402354A4 @ 0x1402354A4
 * Callers:
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 */

__int64 __fastcall sub_1402354A4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebp
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 i; // rax
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  memset(v13, 0, 32);
  v6 = 3;
  sub_140352E50(v3 + a2 / 8, v13);
  v7 = 3LL;
  while ( 1 )
  {
    v8 = v13[--v7];
    --v6;
    v9 = sub_140317A10(v8);
    if ( !v9 )
      break;
    if ( (v9 & 0x81) == 0x81 )
      goto LABEL_8;
    if ( !v7 )
      goto LABEL_5;
  }
  v4 = 1;
LABEL_8:
  for ( i = (v8 + 8) << 25 >> 16; v6; --v6 )
    i = i << 25 >> 16;
  if ( !i )
LABEL_5:
    i = ((v13[0] << 25) + 0x10000000LL) >> 16;
  *a3 = 8 * (i - v3);
  return v4;
}
