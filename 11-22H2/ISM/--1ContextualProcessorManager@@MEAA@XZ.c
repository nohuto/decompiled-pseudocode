/*
 * XREFs of ??1ContextualProcessorManager@@MEAA@XZ @ 0x1801CB734
 * Callers:
 *     ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1801CB7B0 (--_EContextualProcessorManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1801CB664 (--$_Destroy_range@V-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@.c)
 */

void __fastcall ContextualProcessorManager::~ContextualProcessorManager(ContextualProcessorManager *this)
{
  bool v1; // zf
  __int64 *v3; // rcx

  v1 = *((_DWORD *)this + 10) == 0;
  *(_QWORD *)this = &ContextualProcessorManager::`vftable';
  if ( !v1 )
    NtMITSetKeyboardInputRoutingPolicy(0LL);
  v3 = (__int64 *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
      v3,
      *((__int64 **)this + 3));
    std::_Deallocate<16,0>(
      *((void **)this + 2),
      (*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
