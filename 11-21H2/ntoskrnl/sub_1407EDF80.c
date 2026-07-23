/*
 * XREFs of sub_1407EDF80 @ 0x1407EDF80
 * Callers:
 *     sub_1407EE7A0 @ 0x1407EE7A0 (sub_1407EE7A0.c)
 *     sub_140989E98 @ 0x140989E98 (sub_140989E98.c)
 * Callees:
 *     sub_14036B0D0 @ 0x14036B0D0 (sub_14036B0D0.c)
 *     sub_14036B190 @ 0x14036B190 (sub_14036B190.c)
 */

__int64 __fastcall sub_1407EDF80(int a1, char a2)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rcx

  result = a1;
  v3 = (KSPIN_LOCK *)qword_140C1CFE0[a1];
  if ( v3 )
  {
    if ( a2 )
      return sub_14036B190(v3);
    else
      return sub_14036B0D0(v3);
  }
  return result;
}
