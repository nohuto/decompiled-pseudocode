/*
 * XREFs of sub_140429770 @ 0x140429770
 * Callers:
 *     sub_1406593C0 @ 0x1406593C0 (sub_1406593C0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140659640 @ 0x140659640 (sub_140659640.c)
 */

__int64 __fastcall sub_140429770(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _BYTE v5[136]; // [rsp+20h] [rbp-88h] BYREF

  if ( (a3 & 0xF) == 0 )
    return sub_14042A5E0(a1[7], a1[8]);
  result = sub_140659640((void *)(a1[48] + 40LL), v5);
  if ( (int)result >= 0 )
    return sub_14042A5E0(a1[7], a1[8]);
  return result;
}
