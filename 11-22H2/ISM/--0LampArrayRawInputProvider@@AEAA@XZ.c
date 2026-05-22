/*
 * XREFs of ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x18004AFB0
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18004AED0 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18002BB90 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18004B4FC (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x18005A290 (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800A9E6C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A9EE8 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 */

LampArrayRawInputProvider *__fastcall LampArrayRawInputProvider::LampArrayRawInputProvider(
        LampArrayRawInputProvider *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 EventW; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &LampArrayRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = &LampArrayRawInputProvider::`vftable'{for `IRawInputSessionNotify'};
  *((_QWORD *)this + 2) = &LampArrayRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &LampArrayRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_OWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 184) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  QpcTimeConverter::QpcTimeConverter((LampArrayRawInputProvider *)((char *)this + 296));
  EventW = -1LL;
  *((_BYTE *)this + 312) = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
    (char *)this + 320,
    &EventW);
  Microsoft::WRL::AgileRef::AgileRef((LampArrayRawInputProvider *)((char *)this + 328));
  *((_QWORD *)this + 42) = 0LL;
  EventW = (__int64)CreateEventW(0LL, 0, 0, 0LL);
  v2 = wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
         &v6,
         &EventW);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
    (char *)this + 320,
    v2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v6);
  EventW = (__int64)CreateEventW(0LL, 0, 0, 0LL);
  v3 = wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
         &v7,
         &EventW);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
    (char *)this + 328,
    v3);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v7);
  return this;
}
