/*
 * XREFs of VfIsRuleClassEnabled @ 0x140A7C590
 * Callers:
 *     sub_1402D8764 @ 0x1402D8764 (sub_1402D8764.c)
 *     sub_140B27E30 @ 0x140B27E30 (sub_140B27E30.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VfIsRuleClassEnabled(unsigned int a1)
{
  int v1; // eax

  if ( a1 >= 0x40 )
    return 0;
  v1 = *((_DWORD *)&qword_140D01450 + ((unsigned __int64)a1 >> 5));
  return _bittest(&v1, a1 & 0x1F);
}
