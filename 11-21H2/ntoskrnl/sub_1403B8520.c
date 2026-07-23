/*
 * XREFs of sub_1403B8520 @ 0x1403B8520
 * Callers:
 *     sub_14027B6A4 @ 0x14027B6A4 (sub_14027B6A4.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     sub_1403852C0 @ 0x1403852C0 (sub_1403852C0.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_14082A974 @ 0x14082A974 (sub_14082A974.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140352E50 @ 0x140352E50 (sub_140352E50.c)
 */

unsigned __int64 __fastcall sub_1403B8520(unsigned __int64 a1)
{
  int v2; // edi
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v12; // [rsp+18h] [rbp-30h]
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  memset(v13, 0, sizeof(v13));
  sub_140352E50(a1, (unsigned __int64 *)v13);
  v2 = 4;
  v3 = 4LL;
  do
  {
    v4 = *(&v12 + v3--);
    --v2;
    v5 = sub_140317A10(v4);
    v14 = v5;
  }
  while ( v3 && (v5 & 0x80u) == 0LL );
  v6 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 )
  {
    v7 = 1LL;
    v8 = a1 >> 12;
    do
    {
      v9 = v8;
      v8 >>= 9;
      v10 = v7 * (v9 & 0x1FF);
      v7 <<= 9;
      v6 += v10;
      --v2;
    }
    while ( v2 );
  }
  return v6;
}
