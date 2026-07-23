/*
 * XREFs of sub_14059973C @ 0x14059973C
 * Callers:
 *     sub_1409B01E0 @ 0x1409B01E0 (sub_1409B01E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14059973C(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 64);
}
