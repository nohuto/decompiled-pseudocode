/*
 * XREFs of ??1CConnection@@UEAA@XZ @ 0x180193C2C
 * Callers:
 *     ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x180193A30 (--1CInternalMilCmdConnection@@UEAA@XZ.c)
 *     ??_GCConnection@@UEAAPEAXI@Z @ 0x180193CA0 (--_GCConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x180193CEC (-Disconnect@CConnection@@QEAAXXZ.c)
 */

void __fastcall CConnection::~CConnection(void **this)
{
  void *v2; // rcx
  void *v3; // rcx

  *this = &CConnection::`vftable';
  CConnection::Disconnect((CConnection *)this);
  v2 = this[2];
  if ( v2 )
  {
    SetEvent(v2);
    v3 = this[2];
    if ( v3 )
    {
      CloseHandle(v3);
      this[2] = 0LL;
    }
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this + 6);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this + 5);
}
