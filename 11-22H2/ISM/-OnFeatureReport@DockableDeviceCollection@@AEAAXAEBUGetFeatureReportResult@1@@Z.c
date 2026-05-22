/*
 * XREFs of ?OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z @ 0x1800F29A4
 * Callers:
 *     ?OnFeatureReportStatic@DockableDeviceCollection@@CAJPEAX@Z @ 0x1800F2A40 (-OnFeatureReportStatic@DockableDeviceCollection@@CAJPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@KPEAX@std@@@1@AEBK@Z @ 0x18006915C (--$_Find_lower_bound@K@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@.c)
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800F2D64 (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 */

void __fastcall DockableDeviceCollection::OnFeatureReport(
        DockableDeviceCollection *this,
        const struct DockableDeviceCollection::GetFeatureReportResult *a2)
{
  _QWORD *v4; // r11
  __int64 v5; // rbx
  int v6; // eax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Find_lower_bound<unsigned long>(
    (__int64 *)this + 346,
    (__int64)v7,
    (unsigned int *)a2 + 2);
  v5 = v8;
  if ( !*(_BYTE *)(v8 + 25) && *((_DWORD *)a2 + 2) >= *(_DWORD *)(v8 + 28) && v8 != *v4 )
  {
    v6 = DockableDeviceCollection::ProcessFeatureReport(this, a2);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(v5 + 32) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x111,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)(unsigned int)v6);
      *(_DWORD *)(v5 + 32) = 2;
    }
  }
}
