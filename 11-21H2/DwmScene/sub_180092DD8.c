/*
 * XREFs of sub_180092DD8 @ 0x180092DD8
 * Callers:
 *     sub_180049728 @ 0x180049728 (sub_180049728.c)
 *     sub_1800497C4 @ 0x1800497C4 (sub_1800497C4.c)
 *     sub_180049E28 @ 0x180049E28 (sub_180049E28.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_1800926E0 @ 0x1800926E0 (sub_1800926E0.c)
 *     sub_180092B70 @ 0x180092B70 (sub_180092B70.c)
 *     sub_1800ADEF0 @ 0x1800ADEF0 (sub_1800ADEF0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180092DD8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 24);
  }
  *a2 = *(_QWORD *)(a1 + 16);
  result = a2;
  a2[1] = v2;
  return result;
}
