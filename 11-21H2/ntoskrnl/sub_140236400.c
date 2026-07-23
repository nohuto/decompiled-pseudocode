/*
 * XREFs of sub_140236400 @ 0x140236400
 * Callers:
 *     sub_140236274 @ 0x140236274 (sub_140236274.c)
 *     sub_1403199E0 @ 0x1403199E0 (sub_1403199E0.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 */

void __fastcall sub_140236400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rdx

  if ( *(_DWORD *)a3 )
  {
    v3 = sub_1402CCC50(128LL, a1);
    *v4 = v3;
  }
  ++*(_QWORD *)(a3 + 8);
}
