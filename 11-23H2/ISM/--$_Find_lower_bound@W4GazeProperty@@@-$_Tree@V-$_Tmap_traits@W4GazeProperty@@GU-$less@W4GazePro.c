/*
 * XREFs of ??$_Find_lower_bound@W4GazeProperty@@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@@1@AEBW4GazeProperty@@@Z @ 0x1801A08E0
 * Callers:
 *     ??$_Emplace@W4GazeProperty@@G@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@_N@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1801A0804 (--$_Emplace@W4GazeProperty@@G@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1801A1308 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x1801A1418 (-at@-$map@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$$CBW4GazeProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Find_lower_bound<enum GazeProperty>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // r8d
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 7) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
