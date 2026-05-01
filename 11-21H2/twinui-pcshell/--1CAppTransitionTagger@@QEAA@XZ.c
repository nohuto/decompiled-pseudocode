/*
 * XREFs of ??1CAppTransitionTagger@@QEAA@XZ @ 0x1804DF320
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E1108 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAppTransitionTagger::~CAppTransitionTagger(CAppTransitionTagger *this)
{
  __int64 v2; // rcx

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
