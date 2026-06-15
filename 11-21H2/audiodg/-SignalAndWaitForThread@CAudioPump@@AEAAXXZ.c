/*
 * XREFs of ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140001F40
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140005DA0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x1400196B0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ??1CAudioPump@@QEAA@XZ @ 0x14001F4AC (--1CAudioPump@@QEAA@XZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAudioPump::SignalAndWaitForThread(CAudioPump *this, void *a2)
{
  *((_BYTE *)this + 76) = 1;
  wil::details::SetEvent(*((wil::details **)this + 32), a2);
  if ( *((_QWORD *)this + 583) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 582) + 48LL))(*((_QWORD *)this + 582));
    *((_QWORD *)this + 583) = 0LL;
  }
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((char *)this + 4656);
  WaitForSingleObjectEx(*((HANDLE *)this + 14), 0xFFFFFFFF, 0);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 112,
    0LL);
}
