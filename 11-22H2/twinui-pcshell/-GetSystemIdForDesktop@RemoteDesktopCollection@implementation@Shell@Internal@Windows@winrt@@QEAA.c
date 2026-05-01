/*
 * XREFs of ?GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUguid@6@@Z @ 0x18072FEE8
 * Callers:
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x180721258 (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUguid@6@@Z @ 0x180721D50 (-IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x180731570 (-DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x180733060 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
winrt::hstring *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetSystemIdForDesktop(
        RTL_SRWLOCK *a1,
        winrt::hstring *a2,
        __int128 *a3)
{
  __int64 ***Ptr; // rdi
  __int64 **i; // rbx
  __int64 v8; // r15
  struct winrt::impl::hstring_header *v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v13[3]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v15; // [rsp+48h] [rbp-40h]

  v13[0] = (__int64)a2;
  AcquireSRWLockShared(a1);
  v13[2] = (__int64)a1;
  Ptr = (__int64 ***)a1[2].Ptr;
  for ( i = *Ptr; ; i = (__int64 **)*i )
  {
    if ( i == (__int64 **)Ptr )
    {
      winrt::hstring::hstring(a2, &LocaleName);
      goto LABEL_13;
    }
    v13[0] = (__int64)i[3];
    v8 = v13[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 32LL))(v8, v14) >= 0 )
    {
      v15 = *a3;
      v11 = v14[0] - v15;
      if ( v14[0] == (_QWORD)v15 )
        v11 = v14[1] - *((_QWORD *)&v15 + 1);
      if ( !v11 )
        break;
    }
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v13);
  }
  *(_QWORD *)a2 = winrt::impl::duplicate_hstring((winrt::impl *)i[2], v9, v10);
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v13);
LABEL_13:
  if ( a1 )
    ReleaseSRWLockShared(a1);
  return a2;
}
