/*
 * XREFs of ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x180043290
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001DAB4 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18001362C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AD04 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync(void)
{
  _DWORD *v0; // rbx
  HANDLE EventW; // rdi
  HANDLE v2; // rcx
  struct _TP_WORK *ThreadpoolWork; // rax
  struct _TP_WORK *v4; // rbx
  signed int LastError; // eax
  unsigned __int64 v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  _DWORD *v8; // [rsp+40h] [rbp+8h]

  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  if ( !Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance )
  {
    v0 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v0 )
      goto LABEL_12;
    *(_QWORD *)v0 = &Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::`vftable';
    v0[2] = 0;
    *((_QWORD *)v0 + 2) = 0LL;
    v0[6] = 0;
    *((_BYTE *)v0 + 28) = 0;
    *((_QWORD *)v0 + 4) = 0LL;
    *((_QWORD *)v0 + 5) = 0LL;
    EventW = CreateEventW(0LL, 1, 0, L"DefaultsReady");
    v2 = hEvent;
    if ( EventW != hEvent )
    {
      if ( hEvent
        && !((unsigned __int8 (__fastcall *)(void *))*Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent)(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent) )
      {
        LastError = GetLastError();
        v6 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v6 = (unsigned int)LastError;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v6);
        JUMPOUT(0x180043464LL);
      }
      v2 = EventW;
      hEvent = EventW;
    }
    if ( v2 )
    {
      v8 = operator new(0x18uLL);
      *(_OWORD *)v8 = 0LL;
      v8[2] = 1;
      v8[3] = 1;
      *(_QWORD *)v8 = &std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>::`vftable';
      *((_QWORD *)v8 + 2) = v0;
      v7[0] = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance;
      Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance = (Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *)v0;
      v7[1] = qword_180062FD0;
      qword_180062FD0 = (__int64)v8;
      std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)v7);
    }
  }
  if ( !Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread )
  {
    ThreadpoolWork = CreateThreadpoolWork(
                       Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValuesThreadProc,
                       0LL,
                       0LL);
    v4 = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread = v4;
    }
  }
LABEL_12:
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
}
