/*
 * XREFs of RtlSplay @ 0x180062E00
 * Callers:
 *     RtlEnumerateGenericTable @ 0x1800629D0 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x180062C00 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x180062D10 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x180063000 (RtlDelete.c)
 *     PfxFindPrefix @ 0x1800F1E90 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800F1F90 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x180104150 (RtlLookupElementGenericTableFull.c)
 *     RtlpTpIoLookup @ 0x1801281DC (RtlpTpIoLookup.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v4; // rdx
  _RTL_SPLAY_LINKS *v5; // rdx
  _RTL_SPLAY_LINKS *v6; // r8
  _RTL_SPLAY_LINKS *v7; // r8
  _RTL_SPLAY_LINKS **p_LeftChild; // r8
  _RTL_SPLAY_LINKS *v9; // r8
  _RTL_SPLAY_LINKS **v10; // r8
  _RTL_SPLAY_LINKS *v11; // r8
  _RTL_SPLAY_LINKS *v12; // r8
  _RTL_SPLAY_LINKS *RightChild; // rdx
  _RTL_SPLAY_LINKS *v14; // r8
  _RTL_SPLAY_LINKS *v15; // r8
  _RTL_SPLAY_LINKS **v16; // r8
  _RTL_SPLAY_LINKS **p_RightChild; // r8

  while ( 1 )
  {
    Parent = Links->Parent;
    if ( Links->Parent == Links )
      return Links;
    LeftChild = Parent->LeftChild;
    v4 = Parent->Parent;
    if ( LeftChild == Links )
    {
      if ( v4 == Parent )
      {
        RightChild = Links->RightChild;
        Parent->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = Parent;
        Links->RightChild = Parent;
LABEL_8:
        Parent->Parent = Links;
        Links->Parent = Links;
      }
      else if ( v4->LeftChild == Parent )
      {
        v6 = Links->RightChild;
        Parent->LeftChild = v6;
        if ( v6 )
          v6->Parent = Parent;
        v7 = Parent->RightChild;
        v4->LeftChild = v7;
        if ( v7 )
          v7->Parent = v4;
        if ( v4->Parent == v4 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v4->Parent;
          p_LeftChild = &v4->Parent->LeftChild;
          if ( *p_LeftChild != v4 )
            p_LeftChild = &v4->Parent->RightChild;
          *p_LeftChild = Links;
        }
        Links->RightChild = Parent;
        Parent->RightChild = v4;
LABEL_20:
        Parent->Parent = Links;
        v4->Parent = Parent;
      }
      else
      {
        v11 = Links->LeftChild;
        v4->RightChild = v11;
        if ( v11 )
          v11->Parent = v4;
        v12 = Links->RightChild;
        Parent->LeftChild = v12;
        if ( v12 )
          v12->Parent = Parent;
        if ( v4->Parent == v4 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v4->Parent;
          p_RightChild = &v4->Parent->LeftChild;
          if ( *p_RightChild != v4 )
            p_RightChild = &v4->Parent->RightChild;
          *p_RightChild = Links;
        }
        Links->LeftChild = v4;
        v4->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
    else
    {
      if ( v4 == Parent )
      {
        v5 = Links->LeftChild;
        Parent->RightChild = v5;
        if ( v5 )
          v5->Parent = Parent;
        Links->LeftChild = Parent;
        goto LABEL_8;
      }
      if ( v4->RightChild == Parent )
      {
        v4->RightChild = LeftChild;
        if ( LeftChild )
          LeftChild->Parent = v4;
        v9 = Links->LeftChild;
        Parent->RightChild = v9;
        if ( v9 )
          v9->Parent = Parent;
        if ( v4->Parent == v4 )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = v4->Parent;
          v10 = &v4->Parent->LeftChild;
          if ( *v10 != v4 )
            v10 = &v4->Parent->RightChild;
          *v10 = Links;
        }
        Links->LeftChild = Parent;
        Parent->LeftChild = v4;
        goto LABEL_20;
      }
      v14 = Links->LeftChild;
      Parent->RightChild = v14;
      if ( v14 )
        v14->Parent = Parent;
      v15 = Links->RightChild;
      v4->LeftChild = v15;
      if ( v15 )
        v15->Parent = v4;
      if ( v4->Parent == v4 )
      {
        Links->Parent = Links;
      }
      else
      {
        Links->Parent = v4->Parent;
        v16 = &v4->Parent->LeftChild;
        if ( *v16 != v4 )
          v16 = &v4->Parent->RightChild;
        *v16 = Links;
      }
      Links->LeftChild = Parent;
      Parent->Parent = Links;
      Links->RightChild = v4;
      v4->Parent = Links;
    }
  }
}
