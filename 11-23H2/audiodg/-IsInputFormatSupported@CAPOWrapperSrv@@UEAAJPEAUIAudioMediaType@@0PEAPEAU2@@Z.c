/*
 * XREFs of ?IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140024B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsInputFormatSupported(
        CAPOWrapperSrv *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(*(_QWORD *)v4 + 56LL))(
             v4,
             a2,
             a3,
             a4);
  else
    return 2147500033LL;
}
