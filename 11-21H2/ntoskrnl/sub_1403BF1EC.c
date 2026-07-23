/*
 * XREFs of sub_1403BF1EC @ 0x1403BF1EC
 * Callers:
 *     sub_1403BF580 @ 0x1403BF580 (sub_1403BF580.c)
 * Callees:
 *     sub_1403BF274 @ 0x1403BF274 (sub_1403BF274.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

char __fastcall sub_1403BF1EC(unsigned __int64 *a1)
{
  char v2; // di
  __int64 v3; // rax
  __int64 v4; // rbx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v3 = sub_140AF9E94(qword_140C54AC0, 0LL, 1LL, 0LL);
  v4 = v3;
  if ( v3 && (int)sub_1403BF274(v3) >= 0 )
  {
    _InterlockedOr(v6, 0);
    v2 = 1;
    *a1 = v4 & 0xFFFFFFFFFF000LL | 0x8000000000000003uLL;
  }
  return v2;
}
