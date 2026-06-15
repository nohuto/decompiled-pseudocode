/*
 * XREFs of ?RuntimeClassInitialize@CAPOProcessingHostObject@@QEAAJPEAUIAudioProcessingObject@@@Z @ 0x1400052AC
 * Callers:
 *     ??$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOProcessingHostObject@@AEAPEAUIAudioProcessingObject@@@Z @ 0x140005074 (--$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@M.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHostObject::RuntimeClassInitialize(
        CAPOProcessingHostObject *this,
        struct IAudioProcessingObject *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  v3 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))a2->lpVtbl->AddRef)(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
    *((_QWORD *)this + 3),
    &GUID_56b0c76f_02fd_4b21_a52e_9f8219fc86e4,
    (char *)this + 32);
  return 0LL;
}
