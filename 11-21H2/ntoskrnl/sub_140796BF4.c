/*
 * XREFs of sub_140796BF4 @ 0x140796BF4
 * Callers:
 *     sub_14025A19C @ 0x14025A19C (sub_14025A19C.c)
 *     sub_1406B8E18 @ 0x1406B8E18 (sub_1406B8E18.c)
 *     sub_14078FA54 @ 0x14078FA54 (sub_14078FA54.c)
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_1407963F8 @ 0x1407963F8 (sub_1407963F8.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_1407969D0 @ 0x1407969D0 (sub_1407969D0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_140796BF4(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v1 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 32), v1 + 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
    if ( !v2 )
      return 0;
  }
  if ( v1 < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
