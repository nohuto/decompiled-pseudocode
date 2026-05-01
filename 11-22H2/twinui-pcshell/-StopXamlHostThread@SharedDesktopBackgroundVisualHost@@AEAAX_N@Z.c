/*
 * XREFs of ?StopXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAAX_N@Z @ 0x1806EBDD8
 * Callers:
 *     ?Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z @ 0x1806E8DB8 (-Shutdown@SharedDesktopBackgroundVisualHost@@QEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

void __fastcall SharedDesktopBackgroundVisualHost::StopXamlHostThread(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v2; // rdi
  char v5; // si
  PVOID Ptr; // r15
  HANDLE pHandles; // [rsp+60h] [rbp+8h] BYREF
  DWORD dwindex; // [rsp+68h] [rbp+10h] BYREF

  v2 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  if ( (unsigned int)(LODWORD(this[23].Ptr) - 1) <= 1 )
  {
    v5 = 1;
    LODWORD(this[23].Ptr) = 3;
  }
  else
  {
    v5 = 0;
  }
  Ptr = this[27].Ptr;
  pHandles = this[29].Ptr;
  if ( a2 )
    BYTE2(this[26].Ptr) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v5 )
  {
    SetEvent(Ptr);
    CoWaitForMultipleHandles(0x1Au, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
    AcquireSRWLockExclusive(v2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &this[29].Ptr,
      0LL);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
