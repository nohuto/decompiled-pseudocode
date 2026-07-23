/*
 * XREFs of sub_1409967E4 @ 0x1409967E4
 * Callers:
 *     sub_1409962E0 @ 0x1409962E0 (sub_1409962E0.c)
 *     sub_1409965B0 @ 0x1409965B0 (sub_1409965B0.c)
 *     sub_140996854 @ 0x140996854 (sub_140996854.c)
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 */

_BOOL8 __fastcall sub_1409967E4(__int64 a1)
{
  __int64 v2; // rdx
  _BOOL8 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = -1LL;
  *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000008];
  v2 = -10000000LL * *(unsigned int *)(a1 + 176);
  if ( *(_DWORD *)(a1 + 168) )
    sub_140368A78(a1 + 136);
  result = KeSetTimer2(a1, v2, 0LL, (__int64)v4);
  *(_DWORD *)(a1 + 180) |= 2u;
  return result;
}
