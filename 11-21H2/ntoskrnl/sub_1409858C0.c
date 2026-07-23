/*
 * XREFs of sub_1409858C0 @ 0x1409858C0
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140986628 @ 0x140986628 (sub_140986628.c)
 *     sub_140986A7C @ 0x140986A7C (sub_140986A7C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409858C0(_BYTE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  KPROCESSOR_MODE v4; // si
  _BYTE *v5; // rcx

  v2 = a2;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !SeSinglePrivilegeCheck(stru_140D3CA18, v4) )
    return 3221225506LL;
  if ( (unsigned int)v2 < 0x28 )
    return 3221225485LL;
  if ( v4 )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = &a1[v2];
    if ( (unsigned __int64)&a1[v2] > 0x7FFFFFFF0000LL || v5 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( *a1 )
    return sub_140986628(a1);
  else
    return sub_140986A7C(v5);
}
