/*
 * XREFs of ?_Destroy@?$_Ref_count_resource@PEAVDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@EEAAXXZ @ 0x1800231F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDuckingDescriptor@@UEAAPEAXI@Z @ 0x180021080 (--_GDuckingDescriptor@@UEAAPEAXI@Z.c)
 */

DuckingDescriptor *__fastcall std::_Ref_count_resource<DuckingDescriptor *,std::default_delete<DuckingDescriptor>>::_Destroy(
        __int64 a1)
{
  DuckingDescriptor *v1; // rcx
  DuckingDescriptor *result; // rax

  v1 = *(DuckingDescriptor **)(a1 + 16);
  if ( v1 )
    return DuckingDescriptor::`scalar deleting destructor'(v1, 1);
  return result;
}
