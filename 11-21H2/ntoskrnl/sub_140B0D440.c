/*
 * XREFs of sub_140B0D440 @ 0x140B0D440
 * Callers:
 *     sub_140B0C830 @ 0x140B0C830 (sub_140B0C830.c)
 *     sub_140B0CD58 @ 0x140B0CD58 (sub_140B0CD58.c)
 *     sub_140B0D2E8 @ 0x140B0D2E8 (sub_140B0D2E8.c)
 *     sub_140B0D408 @ 0x140B0D408 (sub_140B0D408.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140B0D440(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  _QWORD *result; // rax

  v2 = 0;
  if ( !a1 )
    return 0LL;
  result = *(_QWORD **)(a1 + 16);
  if ( a2 )
  {
    do
    {
      if ( !result )
        break;
      result = (_QWORD *)*result;
      ++v2;
    }
    while ( v2 < a2 );
  }
  return result;
}
