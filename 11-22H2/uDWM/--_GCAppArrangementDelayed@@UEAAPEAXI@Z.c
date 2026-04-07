/*
 * XREFs of ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800D9B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStoryboard@@UEAA@XZ @ 0x1800161E0 (--1CStoryboard@@UEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetRect@CStoryboard@@QEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800D9184 (--$_Destroy_range@V-$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAXPEAUUnifiedTargetR.c)
 */

CAppArrangementDelayed *__fastcall CAppArrangementDelayed::`scalar deleting destructor'(
        CAppArrangementDelayed *this,
        char a2)
{
  _QWORD *v4; // rcx

  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 19);
  v4 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<CStoryboard::UnifiedTargetRect>>(v4, *((_QWORD **)this + 17));
    std::_Deallocate<16,0>(
      *((void **)this + 16),
      16 * ((__int64)(*((_QWORD *)this + 18) - *((_QWORD *)this + 16)) >> 4));
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  CStoryboard::~CStoryboard(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAppArrangementDelayed *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
