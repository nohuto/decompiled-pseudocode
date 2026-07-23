/*
 * XREFs of sub_1403342D0 @ 0x1403342D0
 * Callers:
 *     sub_1402394EC @ 0x1402394EC (sub_1402394EC.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_14027E174 @ 0x14027E174 (sub_14027E174.c)
 *     sub_14027E474 @ 0x14027E474 (sub_14027E474.c)
 *     sub_140282D10 @ 0x140282D10 (sub_140282D10.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_1402ED77C @ 0x1402ED77C (sub_1402ED77C.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140334364 @ 0x140334364 (sub_140334364.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14033DC30 @ 0x14033DC30 (sub_14033DC30.c)
 *     sub_140367828 @ 0x140367828 (sub_140367828.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_14059F4C4 @ 0x14059F4C4 (sub_14059F4C4.c)
 *     sub_14059F874 @ 0x14059F874 (sub_14059F874.c)
 *     sub_1406F4A80 @ 0x1406F4A80 (sub_1406F4A80.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_14096CB14 @ 0x14096CB14 (sub_14096CB14.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 */

unsigned __int64 __fastcall sub_1403342D0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v11; // rax

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
  {
    if ( a2 < v5 || a2 >= v5 + 8LL * *(unsigned int *)(a1 + 44) )
    {
      if ( (*(_BYTE *)(a1 + 34) & 2) != 0 )
        v11 = sub_140256DF8(v3, a3, a1);
      else
        v11 = sub_14027B234((_QWORD *)a1);
      v7 = a2 - *(_QWORD *)(v11 + 72);
    }
    else
    {
      v7 = a2 - v5;
    }
    v8 = (v7 << 9) & 0xFFFFFFFFFFFFF000uLL;
    v9 = (unsigned __int64)*(unsigned int *)(a1 + 36) << 9;
  }
  else
  {
    if ( v5 )
      v8 = (__int64)(a2 - v5) >> 3 << 12;
    else
      v8 = 0LL;
    v9 = (*(unsigned int *)(a1 + 36) | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26)) << 12;
  }
  return v8 + v9;
}
