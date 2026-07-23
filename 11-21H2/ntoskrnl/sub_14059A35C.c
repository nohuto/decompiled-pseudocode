/*
 * XREFs of sub_14059A35C @ 0x14059A35C
 * Callers:
 *     sub_14059A1C8 @ 0x14059A1C8 (sub_14059A1C8.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_140599764 @ 0x140599764 (sub_140599764.c)
 */

BOOLEAN __fastcall sub_14059A35C(PRTL_BALANCED_NODE Node, PRTL_RB_TREE Tree)
{
  __int64 Root; // rdi
  BOOLEAN v3; // bl
  int v6; // ebp
  unsigned __int64 v7; // rax

  Root = (__int64)Tree->Root;
  v3 = 0;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)Tree;
    else
      Root = 0LL;
  }
  v6 = (__int64)Tree->Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)sub_140599764(&Node[1], Root) < 0 )
      {
        v7 = *(_QWORD *)Root;
        if ( v6 )
        {
          if ( !v7 )
            return RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v3, Node);
          v7 ^= Root;
        }
        if ( !v7 )
          return RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v3, Node);
      }
      else
      {
        v7 = *(_QWORD *)(Root + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_11;
          v7 ^= Root;
        }
        if ( !v7 )
        {
LABEL_11:
          v3 = 1;
          return RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v3, Node);
        }
      }
      Root = v7;
    }
  }
  return RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v3, Node);
}
