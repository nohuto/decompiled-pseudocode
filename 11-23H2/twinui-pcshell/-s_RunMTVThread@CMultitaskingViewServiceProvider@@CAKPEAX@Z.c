/*
 * XREFs of ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x180125EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x180125F10 (--_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z.c)
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x180125F3C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 *     ?s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z @ 0x1801271F4 (-s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::s_RunMTVThread(
        struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *Parameter)
{
  int MTVManager; // eax
  void *v3; // rsi
  int v4; // ebx
  unsigned int v5; // edx

  MTVManager = CMultitaskingViewServiceProvider::s_CreateMTVManager(Parameter);
  v3 = (void *)*((_QWORD *)Parameter + 24);
  v4 = MTVManager;
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(Parameter, v5);
  if ( v4 >= 0 )
    LockScreenDirectorServiceProviderImpl::s_RunMessageLoop(v3);
  return 0LL;
}
