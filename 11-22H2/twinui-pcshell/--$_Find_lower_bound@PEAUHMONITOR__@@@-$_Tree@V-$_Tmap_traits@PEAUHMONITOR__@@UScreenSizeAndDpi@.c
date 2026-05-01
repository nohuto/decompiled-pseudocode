/*
 * XREFs of ??$_Find_lower_bound@PEAUHMONITOR__@@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x1800BFB80
 * Callers:
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800C104C (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x1802DEE36 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Find_lower_bound<HMONITOR__ *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v6; // r8
  int v7; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v6 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v6 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v7 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v7 = 0;
      }
      *(_DWORD *)(a2 + 8) = v7;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
