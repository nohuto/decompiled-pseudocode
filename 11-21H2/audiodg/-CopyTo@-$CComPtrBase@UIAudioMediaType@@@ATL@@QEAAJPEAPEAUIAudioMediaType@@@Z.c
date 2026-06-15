/*
 * XREFs of ?CopyTo@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14001C444
 * Callers:
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14001C180 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14001C340 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<IAudioMediaType>::CopyTo(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = *a1;
  v2 = *a1;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
