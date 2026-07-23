/*
 * XREFs of CarSetCustomRuleIdRange @ 0x1406042D0
 * Callers:
 *     sub_140604884 @ 0x140604884 (sub_140604884.c)
 * Callees:
 *     sub_1406038FC @ 0x1406038FC (sub_1406038FC.c)
 */

__int64 __fastcall CarSetCustomRuleIdRange(__int64 a1)
{
  __int64 *v1; // rax
  unsigned int v2; // r9d
  int v3; // r10d
  int v4; // r11d

  v1 = sub_1406038FC(a1, a1);
  if ( v1 )
  {
    *((_DWORD *)v1 + 16) = v4;
    *((_DWORD *)v1 + 17) = v3;
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v2;
}
