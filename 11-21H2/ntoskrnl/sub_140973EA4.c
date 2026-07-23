/*
 * XREFs of sub_140973EA4 @ 0x140973EA4
 * Callers:
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_140972C58 @ 0x140972C58 (sub_140972C58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140973EA4(_QWORD *a1)
{
  unsigned __int64 *v1; // rdi
  bool v3; // si
  unsigned __int64 *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rax

  v1 = 0LL;
  v3 = 0;
LABEL_2:
  v4 = (unsigned __int64 *)qword_140C533B8;
  if ( qword_140C533B8 )
  {
    while ( 1 )
    {
      v5 = sub_140972C58((__int64)a1, (__int64)v4);
      if ( v5 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v1 = v4;
          RtlAvlRemoveNode((unsigned __int64 *)&qword_140C533B8, v4);
          goto LABEL_2;
        }
        v6 = *v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v6 = v4[1];
        if ( !v6 )
        {
          v3 = 1;
          break;
        }
      }
      v4 = (unsigned __int64 *)v6;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C533B8, (unsigned __int64)v4, v3, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
