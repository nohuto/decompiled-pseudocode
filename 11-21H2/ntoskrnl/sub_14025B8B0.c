/*
 * XREFs of sub_14025B8B0 @ 0x14025B8B0
 * Callers:
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_14037AFC0 @ 0x14037AFC0 (sub_14037AFC0.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 *     sub_14059CCB4 @ 0x14059CCB4 (sub_14059CCB4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14025B8B0(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1[24] + 928LL);
  if ( !_bittest16((const signed __int16 *)(a1[18] + 204LL), 0xBu) )
  {
    result = *(_QWORD **)(a1[24] + 936LL);
    if ( (_QWORD *)*result == v1 )
    {
      *a1 = v1;
      a1[1] = result;
      *result = a1;
      v1[1] = a1;
      return result;
    }
FatalListEntryError_25:
    __fastfail(3u);
  }
  result = (_QWORD *)*v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 )
    goto FatalListEntryError_25;
  *a1 = result;
  a1[1] = v1;
  result[1] = a1;
  *v1 = a1;
  return result;
}
