/*
 * XREFs of ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x18006AA70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0dz_EventWriteTransfer @ 0x18006AAD4 (McTemplateU0dz_EventWriteTransfer.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1805E93D8 (-GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

void __fastcall CTaskWindow::UpdateTitle(CTaskWindow *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  HWND v4; // rsi

  v4 = (HWND)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
  if ( v4 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((char *)this + 64);
    *((_QWORD *)this + 9) = -1LL;
    *((_QWORD *)this + 10) = -1LL;
    GetApplicationViewTitle(v4, (unsigned __int16 **)this + 8);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dz_EventWriteTransfer(v3, v2, (unsigned int)v4, *((_QWORD *)this + 8));
}
