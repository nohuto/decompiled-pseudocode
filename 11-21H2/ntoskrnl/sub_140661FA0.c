/*
 * XREFs of sub_140661FA0 @ 0x140661FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_1406AE46C @ 0x1406AE46C (sub_1406AE46C.c)
 */

__int64 __fastcall sub_140661FA0(ULONG_PTR *a1, unsigned __int64 a2)
{
  ULONG_PTR *v4; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v4 = a1;
    if ( !a1 )
      v4 = &qword_140C54300;
    sub_140347C10((__int64)v4, a2);
    result = sub_140353BB0((ULONG_PTR)v4, a2);
  }
  if ( a1 )
    return sub_1406AE46C(a1);
  return result;
}
