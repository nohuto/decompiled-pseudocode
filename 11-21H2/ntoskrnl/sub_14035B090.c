/*
 * XREFs of sub_14035B090 @ 0x14035B090
 * Callers:
 *     sub_14035AD70 @ 0x14035AD70 (sub_14035AD70.c)
 * Callees:
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     sub_14035B110 @ 0x14035B110 (sub_14035B110.c)
 */

__int64 __fastcall sub_14035B090(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  result = *(unsigned int *)(a2 + 120);
  if ( (result & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    v5 = sub_140345AA0(a1, a2, 0LL);
    _enable();
    v6 = *(_QWORD *)(a1 + 11528);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      if ( v7 > v5 )
        *(_QWORD *)(v6 - 184) += v7 - v5;
    }
    result = sub_14035B110(a1, a2);
    *(_QWORD *)(a2 + 32) = v5;
  }
  return result;
}
