/*
 * XREFs of CarSetCustomIdInRuleOverride @ 0x140604280
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406038FC @ 0x1406038FC (sub_1406038FC.c)
 *     sub_140603950 @ 0x140603950 (sub_140603950.c)
 */

__int64 __fastcall CarSetCustomIdInRuleOverride(__int64 a1)
{
  __int64 *v1; // rax
  int v2; // r11d
  unsigned int v3; // r9d
  _QWORD *v4; // rax
  int v5; // r10d

  v1 = sub_1406038FC(a1, a1);
  if ( v1 && (v4 = sub_140603950((_QWORD **)v1 + 9, v2)) != 0LL )
    *((_DWORD *)v4 + 15) = v5;
  else
    return (unsigned int)-1073741772;
  return v3;
}
