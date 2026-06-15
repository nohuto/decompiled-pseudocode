/*
 * XREFs of ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x1400110D4
 * Callers:
 *     ??0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAudioProcessingObjectNotifications@@PEAUIAPOProcessingHost@@@Z @ 0x14000DA90 (--0CAPONode@@QEAA@AEBU_GUID@@PEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudi.c)
 *     ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004FF1C (-RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetMaxSupportedConnectionVersion(struct IAudioProcessingObject *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  char v4; // dl
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp+10h] BYREF
  __int64 v8; // [rsp+38h] [rbp+18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_25385759_3236_4101_a943_25693dfb5d2d,
      &v8);
    v2 = v8;
  }
  v3 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014,
      &v9);
    v2 = v8;
    v3 = v9;
  }
  v4 = 0;
  v7 = 0;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 24LL))(v3, &v7);
    v2 = v8;
    v3 = v9;
    v4 = v7;
  }
  if ( (v4 & 2) != 0 )
  {
    v5 = 0x7FFFFFFF;
  }
  else if ( v2 || (v5 = 1, (v4 & 1) != 0) )
  {
    v5 = 2;
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v2 = v8;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v5;
}
