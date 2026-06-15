/*
 * XREFs of ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x180034210
 * Callers:
 *     ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x1800340AC (--1-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndId@@@std@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800025A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall DuckingDescriptorAndId::~DuckingDescriptorAndId(DuckingDescriptorAndId *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::wstring::~wstring(this);
}
