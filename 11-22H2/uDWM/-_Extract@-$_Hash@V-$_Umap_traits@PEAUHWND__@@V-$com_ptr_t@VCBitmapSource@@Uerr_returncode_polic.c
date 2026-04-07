/*
 * XREFs of ?_Extract@?$_Hash@V?$_Umap_traits@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@AEBQEAUHWND__@@@Z @ 0x1800FA4F8
 * Callers:
 *     ?PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F9B34 (-PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?RegisterBitmap@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAXPEAUHWND__@@PEAVCBitmapSource@@@Z @ 0x1800F9EA0 (-RegisterBitmap@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18005527C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@_K@Z @ 0x1800F8998 (--$_Find_last@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@U.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,0>>::_Extract(
        _QWORD *a1,
        const unsigned __int8 *a2)
{
  __int64 appended; // rdi
  _QWORD *v4; // rdx
  _QWORD *result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a2, 8uLL);
  result = (_QWORD *)std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<HWND__ *>(
                       a1,
                       v9,
                       v4,
                       appended)[1];
  if ( result )
  {
    v6 = a1[3];
    v7 = 2 * (appended & a1[6]);
    if ( *(_QWORD **)(v6 + 16 * (appended & a1[6]) + 8) == result )
    {
      if ( *(_QWORD **)(v6 + 16 * (appended & a1[6])) == result )
      {
        v8 = a1[1];
        *(_QWORD *)(v6 + 16 * (appended & a1[6])) = v8;
      }
      else
      {
        v8 = result[1];
      }
      *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
    }
    else if ( *(_QWORD **)(v6 + 16 * (appended & a1[6])) == result )
    {
      *(_QWORD *)(v6 + 16 * (appended & a1[6])) = *result;
    }
    *(_QWORD *)result[1] = *result;
    *(_QWORD *)(*result + 8LL) = result[1];
    --a1[2];
  }
  return result;
}
