/*
 * XREFs of ??0?$CComQIPtr@UIAudioClientInternal@@$1?_GUID_c64f5665_8a09_4032_a580_80f345604ce1@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180073F78
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x1801302BC (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_c64f5665_8a09_4032_a580_80f345604ce1>::CComQIPtr<IAudioClientInternal,&__s_GUID const _GUID_c64f5665_8a09_4032_a580_80f345604ce1>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_c64f5665_8a09_4032_a580_80f345604ce1, a1);
  return a1;
}
