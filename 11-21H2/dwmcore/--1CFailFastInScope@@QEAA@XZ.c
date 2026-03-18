/*
 * XREFs of ??1CFailFastInScope@@QEAA@XZ @ 0x18007CD98
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18007CB4C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x18026BD0C (-MilWerUnregisterMemoryBlock@@YAXPEBX@Z.c)
 *     ?TriggerFailFastOnNextFailure@@YAX_NJ@Z @ 0x18026BD68 (-TriggerFailFastOnNextFailure@@YAX_NJ@Z.c)
 */

void __fastcall CFailFastInScope::~CFailFastInScope(CFailFastInScope *this)
{
  const void *v2; // rcx

  if ( *(_BYTE *)this )
  {
    TriggerFailFastOnNextFailure(0, 0);
    v2 = (const void *)*((_QWORD *)this + 1);
    if ( v2 )
    {
      MilWerUnregisterMemoryBlock(v2);
      DefaultHeap::Free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
