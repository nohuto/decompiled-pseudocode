/*
 * XREFs of ObpFilterOperation @ 0x14034EF00
 * Callers:
 *     ObCompleteObjectDuplication @ 0x1407BF804 (ObCompleteObjectDuplication.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpFilterOperation(__int64 a1)
{
  return (*(_BYTE *)(a1 + 66) & 0x40) != 0 && *(_QWORD *)(a1 + 200) != a1 + 200;
}
