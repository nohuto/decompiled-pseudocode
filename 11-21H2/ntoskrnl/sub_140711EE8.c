/*
 * XREFs of sub_140711EE8 @ 0x140711EE8
 * Callers:
 *     sub_140711F48 @ 0x140711F48 (sub_140711F48.c)
 *     sub_1407136E8 @ 0x1407136E8 (sub_1407136E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140711EE8(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 888);
}
