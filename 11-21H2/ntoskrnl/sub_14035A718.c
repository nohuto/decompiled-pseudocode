/*
 * XREFs of sub_14035A718 @ 0x14035A718
 * Callers:
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 */

char __fastcall sub_14035A718(__int64 a1, _RTL_RB_TREE *a2)
{
  char result; // al
  _RTL_RB_TREE *v4; // rbx
  BOOLEAN v5; // cl
  PRTL_BALANCED_NODE Root; // rdx
  _RTL_BALANCED_NODE *v7; // rax

  result = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1501);
  if ( result > 30 )
    result = 30;
  if ( *(_BYTE *)(a1 + 48) != result )
  {
    v4 = a2 + 4;
    *(_BYTE *)(a1 + 48) = result;
    RtlRbRemoveNode(a2 + 4, (PRTL_BALANCED_NODE)(a1 + 24));
    v5 = 0;
    Root = v4->Root;
    if ( ((__int64)v4->Min & 1) != 0 )
    {
      if ( Root )
        Root = (PRTL_BALANCED_NODE)((unsigned __int64)v4 ^ (unsigned __int64)Root);
      else
        Root = 0LL;
    }
    if ( Root )
    {
      while ( 1 )
      {
        if ( SLOBYTE(Root[1].Children[0]) < *(_BYTE *)(a1 + 48) )
        {
          v7 = Root->Children[0];
          if ( ((__int64)v4->Min & 1) != 0 )
          {
            if ( !v7 )
              return RtlRbInsertNodeEx(v4, Root, v5, (PRTL_BALANCED_NODE)(a1 + 24));
            v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
          }
          if ( !v7 )
            return RtlRbInsertNodeEx(v4, Root, v5, (PRTL_BALANCED_NODE)(a1 + 24));
        }
        else
        {
          v7 = Root->Children[1];
          if ( ((__int64)v4->Min & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_11;
            v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v7);
          }
          if ( !v7 )
          {
LABEL_11:
            v5 = 1;
            return RtlRbInsertNodeEx(v4, Root, v5, (PRTL_BALANCED_NODE)(a1 + 24));
          }
        }
        Root = v7;
      }
    }
    return RtlRbInsertNodeEx(v4, Root, v5, (PRTL_BALANCED_NODE)(a1 + 24));
  }
  return result;
}
