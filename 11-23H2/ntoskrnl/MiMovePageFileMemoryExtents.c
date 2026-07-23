/*
 * XREFs of MiMovePageFileMemoryExtents @ 0x140660DE8
 * Callers:
 *     MiInsertPageFileMemoryExtents @ 0x140660C68 (MiInsertPageFileMemoryExtents.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     MiComparePageFileMemoryExtents @ 0x14066005C (MiComparePageFileMemoryExtents.c)
 */

BOOLEAN __fastcall MiMovePageFileMemoryExtents(PRTL_BALANCED_NODE Node, PRTL_RB_TREE Tree)
{
  __int64 Root; // rbx
  BOOLEAN v3; // di
  int v6; // ebp
  unsigned __int64 v7; // rax

  Root = (__int64)Tree->Root;
  v3 = 0;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && Root )
    Root ^= (unsigned __int64)Tree;
  v6 = *(_BYTE *)&Tree->0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)MiComparePageFileMemoryExtents(&Node[1], Root) < 0 )
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
            goto LABEL_10;
          v7 ^= Root;
        }
        if ( !v7 )
        {
LABEL_10:
          v3 = 1;
          return RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v3, Node);
        }
      }
      Root = v7;
    }
  }
  return RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v3, Node);
}
