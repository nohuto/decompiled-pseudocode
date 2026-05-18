/*
 * XREFs of sub_18004978C @ 0x18004978C
 * Callers:
 *     sub_180049728 @ 0x180049728 (sub_180049728.c)
 *     sub_1800497C4 @ 0x1800497C4 (sub_1800497C4.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18004978C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 128);
  }
  *a2 = *(_QWORD *)(a1 + 120);
  result = a2;
  a2[1] = v2;
  return result;
}
