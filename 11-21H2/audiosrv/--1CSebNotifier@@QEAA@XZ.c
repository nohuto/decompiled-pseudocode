/*
 * XREFs of ??1CSebNotifier@@QEAA@XZ @ 0x180103C20
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$1 @ 0x180071AFF (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$1.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800C2A7C (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180056A20 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1801044E4 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 */

void __fastcall CSebNotifier::~CSebNotifier(PTP_TIMER *this)
{
  if ( this[12] )
  {
    CSebNotifier::CancelDeferredSebReferenceRelease((CSebNotifier *)this);
    CloseThreadpoolTimer(this[12]);
    this[12] = 0LL;
  }
  CSebNotifier::PublishSebEvent((CSebNotifier *)this, 0);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 1));
}
