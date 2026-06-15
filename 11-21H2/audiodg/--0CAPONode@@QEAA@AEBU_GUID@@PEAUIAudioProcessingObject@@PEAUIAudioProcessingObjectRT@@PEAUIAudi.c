/*
 * XREFs of ??0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAudioProcessingObjectNotifications@@PEAUIAPOProcessingHost@@@Z @ 0x14000DA90
 * Callers:
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x1400108C0 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 * Callees:
 *     ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x1400110D4 (-GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
CAPONode *__fastcall CAPONode::CAPONode(
        CAPONode *this,
        const struct _GUID *a2,
        struct IAudioProcessingObject *a3,
        struct IAudioProcessingObjectRT *a4,
        struct IAudioProcessingObjectConfiguration *a5,
        struct IAudioProcessingObjectNotifications *a6,
        struct IAPOProcessingHost *a7)
{
  __int64 v10; // rcx

  *(_QWORD *)this = &CAPONode::`vftable';
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 2) = a4;
  *((_QWORD *)this + 3) = a5;
  if ( a5 )
    ((void (__fastcall *)(struct IAudioProcessingObjectConfiguration *))a5->lpVtbl->AddRef)(a5);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a6;
  if ( a6 )
    (*(void (__fastcall **)(struct IAudioProcessingObjectNotifications *))(*(_QWORD *)a6 + 8LL))(a6);
  *((_QWORD *)this + 6) = a7;
  if ( a7 )
    (*(void (__fastcall **)(struct IAPOProcessingHost *))(*(_QWORD *)a7 + 8LL))(a7);
  *((_BYTE *)this + 56) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((struct _GUID *)this + 20) = *a2;
  *((_DWORD *)this + 84) = 1;
  v10 = *((_QWORD *)this + 2);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *((_DWORD *)this + 84) = GetMaxSupportedConnectionVersion(*((struct IAudioProcessingObject **)this + 1));
  return this;
}
