/*
 * XREFs of sub_18001B070 @ 0x18001B070
 * Callers:
 *     sub_1800171C0 @ 0x1800171C0 (sub_1800171C0.c)
 *     sub_1800171E0 @ 0x1800171E0 (sub_1800171E0.c)
 * Callees:
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 */

__int64 __fastcall sub_18001B070(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return (unsigned int)sub_180008980((volatile signed __int32 *)(2 * v1 + 16));
}
