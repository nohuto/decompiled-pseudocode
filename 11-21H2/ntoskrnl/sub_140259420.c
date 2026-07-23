/*
 * XREFs of sub_140259420 @ 0x140259420
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E4E8C @ 0x1406E4E8C (sub_1406E4E8C.c)
 *     sub_1407F1648 @ 0x1407F1648 (sub_1407F1648.c)
 */

__int64 __fastcall sub_140259420(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( *(_QWORD *)(a1 + 80) )
      sub_1407F1648();
    *(_QWORD *)(a1 + 80) = a2;
    sub_1406E4E8C(a2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
