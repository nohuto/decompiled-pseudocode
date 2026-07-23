/*
 * XREFs of sub_1406579F8 @ 0x1406579F8
 * Callers:
 *     sub_140715FA8 @ 0x140715FA8 (sub_140715FA8.c)
 * Callees:
 *     sub_140346D80 @ 0x140346D80 (sub_140346D80.c)
 */

__int64 __fastcall sub_1406579F8(__int64 a1, int a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !sub_140346D80(a1, a2, &v4) )
    return 3221226021LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1888) + 16LL * v4 + 8) + 28LL) = 0;
  return 0LL;
}
