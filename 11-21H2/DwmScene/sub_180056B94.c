/*
 * XREFs of sub_180056B94 @ 0x180056B94
 * Callers:
 *     sub_180073DCC @ 0x180073DCC (sub_180073DCC.c)
 *     sub_1800747C4 @ 0x1800747C4 (sub_1800747C4.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     sub_18007D97C @ 0x18007D97C (sub_18007D97C.c)
 *     sub_18008FBE8 @ 0x18008FBE8 (sub_18008FBE8.c)
 *     sub_180090184 @ 0x180090184 (sub_180090184.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180056B94(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 18656);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 18656);
  }
  *a2 = *(_QWORD *)(a1 + 18648);
  result = a2;
  a2[1] = v2;
  return result;
}
