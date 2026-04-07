/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F8A40
 * Callers:
 *     ??1?$list@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x1800F911C (--1-$list@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 *     ??1?$unordered_map@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@5@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x1800F9148 (--1-$unordered_map@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@U-.c)
 *     ??1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F9198 (--1WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800FAA64 (-clear@-$_Hash@V-$_Umap_traits@PEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@w.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAPEAXI@Z @ 0x1800F947C (--_G-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA.c)
 */

_QWORD *__fastcall std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::`scalar deleting destructor'(v3 + 2);
      result = (_QWORD *)std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
