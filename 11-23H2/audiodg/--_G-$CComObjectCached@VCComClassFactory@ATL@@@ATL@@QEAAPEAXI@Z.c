/*
 * XREFs of ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14004B68C
 * Callers:
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140020D70 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004BFF0 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(_DWORD *Block)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  Block[2] = -1073741823;
  *(_QWORD *)Block = &ATL::CComClassFactory::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)(Block + 4);
  if ( LOBYTE(v2[1].DebugInfo) )
  {
    LOBYTE(v2[1].DebugInfo) = 0;
    DeleteCriticalSection(v2);
  }
  operator delete(Block);
  return Block;
}
