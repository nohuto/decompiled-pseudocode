/*
 * XREFs of ??1CKstBase@@QEAA@XZ @ 0x180008788
 * Callers:
 *     DwmpShutdownWinlogonMouseThread @ 0x180006F70 (DwmpShutdownWinlogonMouseThread.c)
 *     DwmpStartWinlogonMouseThread @ 0x180007080 (DwmpStartWinlogonMouseThread.c)
 * Callees:
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x180003FFC (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x18000401C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180009258 (-Stop@CKstBase@@QEAAXXZ.c)
 */

void __fastcall CKstBase::~CKstBase(CKstBase *this)
{
  __int64 v2; // [rsp+30h] [rbp+10h] BYREF
  BOOL (__stdcall *v3)(HANDLE); // [rsp+38h] [rbp+18h] BYREF

  *(_QWORD *)this = &CKstBase::`vftable';
  CKstBase::Stop(this);
  if ( *((_QWORD *)this + 4) )
  {
    v2 = *((_QWORD *)this + 4);
    v3 = (BOOL (__stdcall *)(HANDLE))wil::details::CloseHandle;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  if ( (unsigned __int64)(*((_QWORD *)this + 2) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = CloseHandle;
    wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  if ( *((_QWORD *)this + 1) )
  {
    v2 = *((_QWORD *)this + 1);
    v3 = (BOOL (__stdcall *)(HANDLE))wil::details::CloseHandle;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
}
