/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18003A6C4
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18003AD1C (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18003AD64 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=2
volatile signed __int32 **__fastcall CSebNotifier::AcquireSebReference(
        CSebNotifier *this,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // r15
  int v7; // eax
  int v8; // r13d
  std::_Ref_count_base *v9; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<CSebReference>::`vftable';
    *((_QWORD *)v4 + 2) = this;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 + 4;
  v7 = _Mtx_lock((CSebNotifier *)((char *)this + 8));
  if ( v7 )
  {
    std::_Throw_C_error(v7);
    __debugbreak();
    __debugbreak();
    JUMPOUT(0x1800B0131LL);
  }
  v8 = (*(_DWORD *)this)++;
  if ( !v8 )
    CSebNotifier::PublishSebEvent(this, 1u);
  _Mtx_unlock((CSebNotifier *)((char *)this + 8));
  if ( !v8 )
    CSebNotifier::CancelDeferredSebReferenceRelease(this);
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v6 = v5 + 4;
  }
  *a2 = v6;
  v9 = (std::_Ref_count_base *)a2[1];
  a2[1] = v5;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v5 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return a2;
}
