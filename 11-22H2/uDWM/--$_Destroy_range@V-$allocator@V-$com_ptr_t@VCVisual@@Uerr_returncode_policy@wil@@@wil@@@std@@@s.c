/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010045C
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180100978 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@.c)
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180100F44 (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180101408 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180103D14 (-_Change_array@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
        CBaseObject **a1,
        CBaseObject **a2)
{
  CBaseObject **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CBaseObject::Release(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
