/*
 * XREFs of sub_140B1E170 @ 0x140B1E170
 * Callers:
 *     sub_140B1E13C @ 0x140B1E13C (sub_140B1E13C.c)
 * Callees:
 *     sub_14070F2D8 @ 0x14070F2D8 (sub_14070F2D8.c)
 *     sub_140B1E75C @ 0x140B1E75C (sub_140B1E75C.c)
 *     sub_140B1F250 @ 0x140B1F250 (sub_140B1F250.c)
 *     sub_140B1F300 @ 0x140B1F300 (sub_140B1F300.c)
 *     sub_140B1F3C0 @ 0x140B1F3C0 (sub_140B1F3C0.c)
 *     sub_140B290EC @ 0x140B290EC (sub_140B290EC.c)
 */

bool sub_140B1E170()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  if ( !(unsigned __int8)sub_140B1F3C0()
    || !(unsigned __int8)sub_140B290EC()
    || !(unsigned __int8)sub_140B1F300()
    || !(unsigned __int8)sub_140B1F250() )
  {
    return 0;
  }
  *((_QWORD *)KeGetCurrentThread() + 159) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)KeGetCurrentThread() + 344, 0xFFFFFFF7);
  *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL) = 0LL;
  v0 = *((_QWORD *)KeGetCurrentThread() + 23);
  v1 = sub_140B1E75C();
  sub_14070F2D8((__int64 *)(v0 + 1208), v1);
  qword_140C1B568 = 0LL;
  Buf2 = qword_140C1B9B8;
  return *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1208LL) != 0LL;
}
