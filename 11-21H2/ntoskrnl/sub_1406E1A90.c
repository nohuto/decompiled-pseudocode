/*
 * XREFs of sub_1406E1A90 @ 0x1406E1A90
 * Callers:
 *     sub_1407E2D60 @ 0x1407E2D60 (sub_1407E2D60.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E1BD4 @ 0x1406E1BD4 (sub_1406E1BD4.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 */

__int64 __fastcall sub_1406E1A90(__int64 a1, _QWORD *a2)
{
  void *v4; // rdi
  int v5; // esi
  _QWORD *v6; // rbx
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v5 = sub_1407E3010(240LL, &v8);
  if ( v5 < 0 )
  {
    v4 = v8;
  }
  else
  {
    v6 = v8;
    memset(v8, 0, 0xF0uLL);
    ++v6[29];
    *v6 = a1;
    *((_DWORD *)v6 + 14) = 60;
    v5 = 0;
    v6[5] = sub_1406AA4E0;
    v6[1] = 8LL;
    *((_DWORD *)v6 + 4) = 0;
    v6[3] = 0LL;
    *((_DWORD *)v6 + 8) = 10;
    v6[6] = 0LL;
    v6[10] = 0LL;
    v6[9] = v6 + 8;
    v6[8] = v6 + 8;
    v6[27] = sub_1406C9BB0;
    v6[23] = 8LL;
    *((_DWORD *)v6 + 48) = 0;
    v6[25] = 0LL;
    *((_DWORD *)v6 + 52) = 10;
    v6[28] = 0LL;
    v6[15] = sub_1406AFC80;
    v6[11] = 8LL;
    *((_DWORD *)v6 + 24) = 0;
    v6[13] = 0LL;
    *((_DWORD *)v6 + 28) = 10;
    v6[16] = 0LL;
    v6[21] = sub_140A0F120;
    v6[17] = 8LL;
    *((_DWORD *)v6 + 36) = 0;
    v6[19] = 0LL;
    *((_DWORD *)v6 + 40) = 10;
    v6[22] = 0LL;
    *a2 = v6;
  }
  sub_1406E1BD4(v4);
  return (unsigned int)v5;
}
