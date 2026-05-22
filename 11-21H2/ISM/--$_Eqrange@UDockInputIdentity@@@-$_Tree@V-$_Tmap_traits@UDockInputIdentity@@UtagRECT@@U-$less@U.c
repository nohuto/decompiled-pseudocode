/*
 * XREFs of ??$_Eqrange@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@PEAU12@@1@AEBUDockInputIdentity@@@Z @ 0x18017C140
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUDockInputIdentity@@@Z @ 0x180180418 (-erase@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U-$less@UDockInputIdentity@@@std@@V.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Eqrange<DockInputIdentity>(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // rcx
  unsigned int v7; // r10d
  bool v8; // cf
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r10d
  bool v14; // cf
  unsigned __int64 v15; // rax
  __int64 *result; // rax

  v3 = *a1;
  v4 = *a1;
  v5 = *a1 + 8;
  v6 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *(_DWORD *)(v6 + 32);
    v8 = v7 < *a3;
    if ( v7 == *a3 )
    {
      v9 = *((_QWORD *)a3 + 1);
      v8 = *(_QWORD *)(v6 + 40) < v9;
      if ( *(_QWORD *)(v6 + 40) == v9 )
        v8 = *(_WORD *)(v6 + 48) < *((_WORD *)a3 + 8);
    }
    if ( v8 )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v10 = *a3 < v7;
        if ( *a3 == v7 )
        {
          v11 = *(_QWORD *)(v6 + 40);
          v10 = *((_QWORD *)a3 + 1) < v11;
          if ( *((_QWORD *)a3 + 1) == v11 )
            v10 = *((_WORD *)a3 + 8) < *(_WORD *)(v6 + 48);
        }
        if ( v10 )
          v4 = v6;
      }
      v3 = v6;
      v6 = *(_QWORD *)v6;
    }
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v5 = v4;
  v12 = *(_QWORD *)v5;
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 25LL) )
  {
    v13 = *a3;
    do
    {
      v14 = v13 < *(_DWORD *)(v12 + 32);
      if ( v13 == *(_DWORD *)(v12 + 32) )
      {
        v15 = *(_QWORD *)(v12 + 40);
        v14 = *((_QWORD *)a3 + 1) < v15;
        if ( *((_QWORD *)a3 + 1) == v15 )
          v14 = *((_WORD *)a3 + 8) < *(_WORD *)(v12 + 48);
      }
      if ( v14 )
      {
        v4 = v12;
        v12 = *(_QWORD *)v12;
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    while ( !*(_BYTE *)(v12 + 25) );
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
