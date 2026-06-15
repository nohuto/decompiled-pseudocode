/*
 * XREFs of ?_Destroy@?$_Ref_count_resource@PEAVDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@EEAAXXZ @ 0x180012DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Ref_count_resource<DuckingDescriptor *,std::default_delete<DuckingDescriptor>>::_Destroy(
        __int64 a1)
{
  _QWORD *v1; // rcx

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
  {
    *v1 = &IDuckingDescriptor::`vftable';
    operator delete(v1);
  }
}
