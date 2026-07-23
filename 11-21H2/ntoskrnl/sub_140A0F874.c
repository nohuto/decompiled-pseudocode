/*
 * XREFs of sub_140A0F874 @ 0x140A0F874
 * Callers:
 *     sub_140A0EFB4 @ 0x140A0EFB4 (sub_140A0EFB4.c)
 *     sub_140A0FAB0 @ 0x140A0FAB0 (sub_140A0FAB0.c)
 * Callees:
 *     sub_1407E3440 @ 0x1407E3440 (sub_1407E3440.c)
 *     sub_140A0FC08 @ 0x140A0FC08 (sub_140A0FC08.c)
 */

__int64 __fastcall sub_140A0F874(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1407E3440(a1 + 136, a2, 16LL, &v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_140A0FC08(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
