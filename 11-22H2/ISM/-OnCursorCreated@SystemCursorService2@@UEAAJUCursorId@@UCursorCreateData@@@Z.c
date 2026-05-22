/*
 * XREFs of ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1801144F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAndRemoveInitialCursorPositionForInputType@SystemCursorController2@@QEAA_NW4InputType@@PEAH1@Z @ 0x180110F10 (-GetAndRemoveInitialCursorPositionForInputType@SystemCursorController2@@QEAA_NW4InputType@@PEAH1.c)
 *     ??$_Try_emplace@_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@$$QEA_K@Z @ 0x180112740 (--$_Try_emplace@_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_t.c)
 *     ?EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ @ 0x1801140EC (-EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ.c)
 *     ?InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA?AW4CursorDeviceTypeId@@W4InputType@@@Z @ 0x180114450 (-InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA-AW4CursorDeviceTypeId@@W4InputType@@@Z.c)
 *     ?MoveCursor@SystemCursor2@@QEAAJHH@Z @ 0x180114490 (-MoveCursor@SystemCursor2@@QEAAJHH@Z.c)
 *     ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x180115404 (-SetRasterizationScale@SystemCursor2@@QEAAJI@Z.c)
 */

__int64 __fastcall SystemCursorService2::OnCursorCreated(__int64 *a1, __int64 a2, int *a3)
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
  v7 = (__int64 ***)a1[8];
  for ( i = *v7; i != (__int64 **)v7; i = (__int64 **)*i )
  {
    v9 = i[3];
    if ( *((_DWORD *)v9 + 4) == v6 )
    {
      v10 = *v9;
      v22 = v5;
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64,>(
                               a1 + 23,
                               (__int64)v20,
                               (unsigned __int8 *)&v22)
                + 24LL) = v10;
      v11 = a3[1];
      v12 = SystemCursor2::SetRasterizationScale((SystemCursor2 *)i[3], v11);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice2.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
      v15 = HIDWORD(v23);
      v16 = *a3;
      *((_DWORD *)i[3] + 5) = v11;
      i[3][23] = v15;
      if ( SystemCursorController2::GetAndRemoveInitialCursorPositionForInputType(a1[2], v16, &v24, &v22) )
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
          (void *)v19,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)v18);
      }
      SystemCursorService2::EnumerateCursorsForShell((SystemCursorService2 *)a1);
      return 0LL;
    }
  }
  return 0LL;
}
