/*
 * XREFs of ??1PinOperationContext@@QEAA@XZ @ 0x18069ED50
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VPinOperationContext@@@std@@EEAAXXZ @ 0x1806A8E70 (-_Destroy@-$_Ref_count_obj2@VPinOperationContext@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall PinOperationContext::~PinOperationContext(PinOperationContext *this)
{
  void *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  std::wstring::_Tidy_deallocate((__int64)this + 56);
  std::wstring::_Tidy_deallocate((__int64)this + 24);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
