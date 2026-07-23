/*
 * XREFs of RtlRemoveUnicodePrefix @ 0x140694580
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 */

void __stdcall RtlRemoveUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  CSHORT NodeTypeCode; // ax
  _UNICODE_PREFIX_TABLE_ENTRY *v3; // rax
  RTL_SPLAY_LINKS *p_Links; // rcx
  _RTL_SPLAY_LINKS *Parent; // rdx
  RTL_SPLAY_LINKS *j; // rbx
  RTL_SPLAY_LINKS *v7; // rdi
  PRTL_SPLAY_LINKS v8; // rax
  PRTL_SPLAY_LINKS v9; // rdx
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *k; // rcx
  _RTL_SPLAY_LINKS *v12; // rdx
  _RTL_SPLAY_LINKS *v13; // rax
  _RTL_SPLAY_LINKS *m; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY *CaseMatch; // r8
  _UNICODE_PREFIX_TABLE_ENTRY *v16; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *i; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY *v18; // r8
  _UNICODE_PREFIX_TABLE_ENTRY *v19; // rcx
  RTL_SPLAY_LINKS *v20; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *v21; // r8
  _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree; // r8
  _UNICODE_PREFIX_TABLE_ENTRY *n; // r9
  _RTL_SPLAY_LINKS *v24; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rdx

  PrefixTable->LastNextEntry = 0LL;
  NodeTypeCode = PrefixTableEntry->NodeTypeCode;
  if ( PrefixTableEntry->NodeTypeCode >= 2049 )
  {
    if ( NodeTypeCode > 2050 )
    {
      if ( NodeTypeCode == 2051 )
      {
        CaseMatch = PrefixTableEntry->CaseMatch;
        v16 = CaseMatch;
        for ( i = CaseMatch->CaseMatch; i != PrefixTableEntry; i = i->CaseMatch )
          v16 = i;
        v16->CaseMatch = CaseMatch;
      }
    }
    else
    {
      v3 = PrefixTableEntry->CaseMatch;
      if ( v3 == PrefixTableEntry )
      {
        p_Links = &PrefixTableEntry->Links;
        Parent = PrefixTableEntry->Links.Parent;
        for ( j = p_Links; Parent != j; Parent = Parent->Parent )
          j = Parent;
        v7 = j - 1;
        v8 = RtlDelete(p_Links);
        if ( v8 )
        {
          if ( j != v8 )
          {
            v9 = v8 - 1;
            LeftChild = j[-1].LeftChild;
            for ( k = LeftChild->LeftChild; k != v7; k = k->LeftChild )
              LeftChild = k;
            LOWORD(v9->Parent) = 2049;
            LeftChild->LeftChild = v9;
            v9->LeftChild = j[-1].LeftChild;
            j[-1].LeftChild = 0LL;
            LOWORD(v7->Parent) = 2050;
          }
        }
        else
        {
          v12 = j[-1].LeftChild;
          v13 = v12;
          for ( m = v12->LeftChild; m != v7; m = m->LeftChild )
            v13 = m;
          v13->LeftChild = v12;
        }
      }
      else
      {
        v18 = v3->CaseMatch;
        v19 = PrefixTableEntry->CaseMatch;
        while ( v18 != PrefixTableEntry )
        {
          v19 = v18;
          v18 = v18->CaseMatch;
        }
        v19->CaseMatch = v3;
        v19->NodeTypeCode = PrefixTableEntry->NodeTypeCode;
        v19->NextPrefixTree = PrefixTableEntry->NextPrefixTree;
        v20 = &v19->Links;
        v19->Links = PrefixTableEntry->Links;
        v21 = (_UNICODE_PREFIX_TABLE_ENTRY *)PrefixTableEntry->Links.Parent;
        if ( v21 == (_UNICODE_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
        {
          v20->Parent = v20;
          NextPrefixTree = PrefixTableEntry->NextPrefixTree;
          for ( n = NextPrefixTree->NextPrefixTree; n != PrefixTableEntry; n = n->NextPrefixTree )
            NextPrefixTree = n;
          NextPrefixTree->NextPrefixTree = v19;
        }
        else if ( v21->NextPrefixTree == (_UNICODE_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
        {
          v21->NextPrefixTree = (_UNICODE_PREFIX_TABLE_ENTRY *)v20;
        }
        else
        {
          v21->CaseMatch = (_UNICODE_PREFIX_TABLE_ENTRY *)v20;
        }
        v24 = v19->Links.LeftChild;
        if ( v24 )
          v24->Parent = v20;
        RightChild = v19->Links.RightChild;
        if ( RightChild )
          RightChild->Parent = v20;
      }
    }
  }
}
