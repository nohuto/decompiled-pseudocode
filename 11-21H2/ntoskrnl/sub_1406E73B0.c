/*
 * XREFs of sub_1406E73B0 @ 0x1406E73B0
 * Callers:
 *     sub_1407E3900 @ 0x1407E3900 (sub_1407E3900.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     sub_1407E3BE4 @ 0x1407E3BE4 (sub_1407E3BE4.c)
 */

__int64 __fastcall sub_1406E73B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v5; // rdi
  int v7; // esi
  _QWORD *v8; // rbx
  void *v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  v7 = sub_1407E3010(1280LL, &v10);
  if ( v7 < 0 )
  {
    v5 = v10;
  }
  else
  {
    v8 = v10;
    memset(v10, 0, 0x500uLL);
    ++v8[1];
    *v8 = a2;
    v8[2] = 0LL;
    v8[3] = 0LL;
    *((_DWORD *)v8 + 8) = 10;
    *a3 = v8;
  }
  sub_1407E3BE4(a1, v5);
  return (unsigned int)v7;
}
