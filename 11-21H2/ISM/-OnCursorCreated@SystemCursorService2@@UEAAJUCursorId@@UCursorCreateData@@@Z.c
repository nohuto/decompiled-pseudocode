/*
 * XREFs of ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800ECD40
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18000C0C0 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAndRemoveInitialCursorPositionForInputType@SystemCursorController2@@QEAA_NW4InputType@@PEAH1@Z @ 0x1800E9614 (-GetAndRemoveInitialCursorPositionForInputType@SystemCursorController2@@QEAA_NW4InputType@@PEAH1.c)
 *     ?EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ @ 0x1800EC930 (-EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ.c)
 *     ?InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA?AW4CursorDeviceTypeId@@W4InputType@@@Z @ 0x1800ECCA0 (-InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA-AW4CursorDeviceTypeId@@W4InputType@@@Z.c)
 *     ?MoveCursor@SystemCursor2@@QEAAJHH@Z @ 0x1800ECCE0 (-MoveCursor@SystemCursor2@@QEAAJHH@Z.c)
 *     ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x1800EDC0C (-SetRasterizationScale@SystemCursor2@@QEAAJI@Z.c)
 */

__int64 __fastcall SystemCursorService2::OnCursorCreated(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v5; // edi
  int v6; // eax
  __int64 ***v7; // r9
  __int64 **i; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rsi
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rcx
  int v16; // edx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  _BYTE v20[56]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h]
  int v24; // [rsp+70h] [rbp+18h] BYREF

  v23 = a2;
  v5 = a2;
  v6 = SystemCursorService2::InputTypeToCursorDeviceTypeId(*a3);
  v7 = *(__int64 ****)(a1 + 64);
  for ( i = *v7; i != (__int64 **)v7; i = (__int64 **)*i )
  {
    v9 = i[3];
    if ( *((_DWORD *)v9 + 4) == v6 )
    {
      v10 = *v9;
      v22 = v5;
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                               (float *)(a1 + 184),
                               (__int64)v20,
                               &v22)
                + 24LL) = v10;
      v11 = a3[1];
      v12 = SystemCursor2::SetRasterizationScale((SystemCursor2 *)i[3], v11);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDC,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
      v15 = HIDWORD(v23);
      v16 = *a3;
      *((_DWORD *)i[3] + 5) = v11;
      i[3][23] = v15;
      if ( SystemCursorController2::GetAndRemoveInitialCursorPositionForInputType(*(_QWORD *)(a1 + 16), v16, &v24, &v22) )
      {
        v17 = SystemCursor2::MoveCursor((SystemCursor2 *)i[3]);
        if ( v17 < 0 )
        {
          v18 = (unsigned int)v17;
          v19 = 231LL;
          goto LABEL_11;
        }
      }
      else
      {
        v18 = 2147549183LL;
        v19 = 237LL;
LABEL_11:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          v19,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice2.cpp",
          (const char *)v18);
      }
      SystemCursorService2::EnumerateCursorsForShell((SystemCursorService2 *)a1);
      return 0LL;
    }
  }
  return 0LL;
}
