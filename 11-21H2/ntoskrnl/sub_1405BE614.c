/*
 * XREFs of sub_1405BE614 @ 0x1405BE614
 * Callers:
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_1409811F0 @ 0x1409811F0 (sub_1409811F0.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_1405BDF38 @ 0x1405BDF38 (sub_1405BDF38.c)
 *     sub_1405BE588 @ 0x1405BE588 (sub_1405BE588.c)
 */

__int64 __fastcall sub_1405BE614(__int16 *a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  unsigned __int64 *v4; // rdi
  bool v5; // bl
  int v6; // ebp
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  v4 = (unsigned __int64 *)*a2;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( !v4 )
      return (unsigned int)v6;
    RtlAvlRemoveNode(a2, v4);
    if ( a4 )
    {
      v6 = sub_1405BE588(a1, (__int64)v4, a3);
      if ( v6 < 0 )
        break;
    }
    sub_1405BDF38((PVOID *)v4);
    v4 = (unsigned __int64 *)*a2;
  }
  v11 = (_QWORD *)*a2;
  if ( !*a2 )
    goto LABEL_14;
  while ( (v4[3] & 0x3FFFFFFFFFFFFFFFLL) < (v11[3] & 0x3FFFFFFFFFFFFFFFuLL) )
  {
    v12 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_14;
LABEL_12:
    v11 = v12;
  }
  v12 = (_QWORD *)v11[1];
  if ( v12 )
    goto LABEL_12;
  v5 = 1;
LABEL_14:
  RtlAvlInsertNodeEx(a2, (unsigned __int64)v11, v5, v4);
  return (unsigned int)v6;
}
