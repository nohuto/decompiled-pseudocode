/*
 * XREFs of ??1_List_node_remove_op@?$list@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA@XZ @ 0x180162AE0
 * Callers:
 *     ?OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180162910 (-OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLIC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<HWND__ *>::_List_node_remove_op::~_List_node_remove_op(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      result = std::_Deallocate<16,0>(v1, 24LL);
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
