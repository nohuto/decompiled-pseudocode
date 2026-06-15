/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180005800
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x180004960 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x180067294 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800673B4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(
        __int64 ***a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 **v6; // rsi
  __int64 *v7; // r14
  BOOL v8; // ebp
  __int64 **v9; // rcx
  __int64 *v10; // r12
  HANDLE ProcessHeap; // rax
  __int64 *v12; // rax
  __int64 *v13; // r9
  __int64 **v14; // r10
  unsigned int v16; // edx
  __int64 *v17; // rax
  unsigned int v18; // r8d
  __int64 *v19; // r11
  __int64 v20; // rax
  __int64 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx

  v6 = *a1;
  v7 = (*a1)[1];
  v8 = 0;
  v9 = *a1;
  v10 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v16 = *a3;
    v17 = v7;
    do
    {
      v10 = v17;
      v7 = v17;
      v18 = *((_DWORD *)v17 + 7);
      if ( v18 < v16 )
      {
        v17 = (__int64 *)v17[2];
      }
      else
      {
        v9 = (__int64 **)v17;
        v17 = (__int64 *)*v17;
      }
      v8 = v18 >= v16;
    }
    while ( !*((_BYTE *)v17 + 25) );
  }
  if ( *((_BYTE *)v9 + 25) || *a3 < *((_DWORD *)v9 + 7) )
  {
    if ( a1[1] == (__int64 **)0x666666666666666LL )
      std::_Xlength_error("map/set too long");
    ProcessHeap = GetProcessHeap();
    v12 = (__int64 *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
    v13 = v12;
    *(__int64 *)((char *)v12 + 28) = *a3;
    *v12 = (__int64)v6;
    v12[1] = (__int64)v6;
    v12[2] = (__int64)v6;
    *((_WORD *)v12 + 12) = 0;
    a1[1] = (__int64 **)((char *)a1[1] + 1);
    v14 = *a1;
    v12[1] = (__int64)v7;
    if ( v7 == (__int64 *)v14 )
    {
      *v14 = v12;
      v14[1] = v12;
      v14[2] = v12;
    }
    else
    {
      if ( v8 )
      {
        *v7 = (__int64)v12;
        if ( v10 == *v14 )
          *v14 = v12;
      }
      else
      {
        v7[2] = (__int64)v12;
        if ( v10 == v14[2] )
          v14[2] = v12;
      }
      v19 = v12;
      while ( !*(_BYTE *)(v19[1] + 24) )
      {
        v20 = v19[1];
        v21 = *(__int64 **)(v20 + 8);
        v22 = *v21;
        if ( v20 == *v21 )
        {
          v23 = v21[2];
          if ( *(_BYTE *)(v23 + 24) )
          {
            if ( v19 == *(__int64 **)(v20 + 16) )
              std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1);
            *(_BYTE *)(v19[1] + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v19[1] + 8) + 24LL) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              a1,
              *(_QWORD *)(v19[1] + 8));
          }
          else
          {
            *(_BYTE *)(v20 + 24) = 1;
            *(_BYTE *)(v23 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v19[1] + 8) + 24LL) = 0;
            v19 = *(__int64 **)(v19[1] + 8);
          }
        }
        else if ( *(_BYTE *)(v22 + 24) )
        {
          if ( v19 == *(__int64 **)v20 )
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
              a1,
              v20);
          *(_BYTE *)(v19[1] + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v19[1] + 8) + 24LL) = 0;
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(a1);
        }
        else
        {
          *(_BYTE *)(v20 + 24) = 1;
          *(_BYTE *)(v22 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v19[1] + 8) + 24LL) = 0;
          v19 = *(__int64 **)(v19[1] + 8);
        }
      }
      v12 = v14[1];
    }
    *((_BYTE *)v12 + 24) = 1;
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
