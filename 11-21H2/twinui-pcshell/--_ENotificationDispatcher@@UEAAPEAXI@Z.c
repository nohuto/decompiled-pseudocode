/*
 * XREFs of ??_ENotificationDispatcher@@UEAAPEAXI@Z @ 0x180310080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
NotificationDispatcher *__fastcall NotificationDispatcher::`vector deleting destructor'(
        NotificationDispatcher *this,
        char a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 i; // rdi
  __int64 v6; // rdx

  v4 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 7); ++i )
    {
      v4 = (_QWORD *)*((_QWORD *)this + 6);
      v6 = v4[i];
      if ( v6 )
      {
        v4[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        v4 = (_QWORD *)*((_QWORD *)this + 6);
      }
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
