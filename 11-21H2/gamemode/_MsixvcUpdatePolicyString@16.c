/*
 * XREFs of _MsixvcUpdatePolicyString@16 @ 0x10005360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE (_MsixvcUpdatePolicyInternal@24.c)
 */

void *__thiscall MsixvcUpdatePolicyString(char *this, int a2, int a3, int a4, int a5)
{
  void *updated; // eax
  void *v6; // esi
  unsigned int v8; // [esp+0h] [ebp-8h]
  const char *v9; // [esp+4h] [ebp-4h]
  int savedregs; // [esp+8h] [ebp+0h]
  int retaddr; // [esp+Ch] [ebp+4h]

  updated = (void *)MsixvcUpdatePolicyInternal(a2, a3, a4, a5, 0, 0);
  v6 = updated;
  if ( (int)updated >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    updated,
    v8,
    v9,
    savedregs);
  return v6;
}
