/*
 * XREFs of ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x180115330
 * Callers:
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800D8FCC (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x1801152E0 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 *     ??1?$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ @ 0x180493748 (--1-$CAutoMemPtr@UINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@@@QEAA@XZ.c)
 * Callees:
 *     ??1INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x18011535C (--1INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CMultitaskingViewServiceProvider::INIT_THREAD_DATA *__fastcall CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider::INIT_THREAD_DATA *this)
{
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA::~INIT_THREAD_DATA(this);
  operator delete(this, 0xD0uLL);
  return this;
}
