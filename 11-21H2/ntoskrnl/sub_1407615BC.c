/*
 * XREFs of sub_1407615BC @ 0x1407615BC
 * Callers:
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 * Callees:
 *     sub_1402D9A20 @ 0x1402D9A20 (sub_1402D9A20.c)
 *     sub_14081BD3C @ 0x14081BD3C (sub_14081BD3C.c)
 *     sub_1409709F4 @ 0x1409709F4 (sub_1409709F4.c)
 */

_QWORD *__fastcall sub_1407615BC(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)sub_1402D9A20(*(void **)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)&qword_140C53448 )
    {
      return (_QWORD *)sub_14081BD3C(a1 + 88, *(unsigned int *)(a1 + 120), *(unsigned int *)(a1 + 156));
    }
    else
    {
      result = (_QWORD *)sub_1409709F4(a1);
      if ( result )
      {
        v3 = (_QWORD *)qword_140C4F438;
        if ( *(PVOID **)qword_140C4F438 != &qword_140C4F430 )
          __fastfail(3u);
        *result = &qword_140C4F430;
        result[1] = v3;
        *v3 = result;
        qword_140C4F438 = (__int64)result;
      }
    }
  }
  return result;
}
