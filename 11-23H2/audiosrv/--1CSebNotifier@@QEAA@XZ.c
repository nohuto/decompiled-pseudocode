/*
 * XREFs of ??1CSebNotifier@@QEAA@XZ @ 0x180119B04
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$1 @ 0x18007CDBE (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$1.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A1C (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18003AD1C (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18003AD64 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
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
