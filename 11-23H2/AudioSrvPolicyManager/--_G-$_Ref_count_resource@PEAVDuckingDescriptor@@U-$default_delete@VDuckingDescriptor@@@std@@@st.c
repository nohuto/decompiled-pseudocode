/*
 * XREFs of ??_G?$_Ref_count_resource@PEAVDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@UEAAPEAXI@Z @ 0x180020D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016C28 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count_resource<DuckingDescriptor *,std::default_delete<DuckingDescriptor>>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
