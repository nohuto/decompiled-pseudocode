/*
 * XREFs of ?Initialize@NdisPoll@@QEAAJXZ @ 0x1C0140AD0
 * Callers:
 *     NdisRegisterPoll @ 0x1C0140730 (NdisRegisterPoll.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00331FC (WPP_RECORDER_SF_d_ea_1C00331FC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D018 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     NdisMQueryAdapterInstanceName @ 0x1C0071820 (NdisMQueryAdapterInstanceName.c)
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1C0140928 (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 */

__int64 __fastcall NdisPoll::Initialize(struct KLOADER_MODULE_REFERENCE__ **this)
{
  unsigned int v2; // edi
  unsigned __int16 v3; // r9
  struct KLOADER_MODULE_REFERENCE__ *v5; // rdx
  wchar_t *Buffer; // rbp
  _QWORD *v7; // rsi
  struct KLOADER_MODULE_REFERENCE__ *v8; // rax
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  struct KLOADER_MODULE_REFERENCE__ *v11; // [rsp+38h] [rbp-50h]
  char *v12; // [rsp+40h] [rbp-48h]
  UNICODE_STRING pAdapterInstanceName; // [rsp+48h] [rbp-40h] BYREF
  wchar_t *v14; // [rsp+90h] [rbp+8h] BYREF

  v2 = ExecutionContextLibrary::Initialize(this);
  if ( v2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v2;
    v3 = 10;
LABEL_4:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      v3,
      (struct _GUID *)&WPP_ecc0162481ba31e412c2de57aaf9ced1_Traceguids,
      v2,
      v10,
      v11,
      v12);
    return v2;
  }
  memset(this + 36, 0, 0x48uLL);
  *((_DWORD *)this + 72) = 4000;
  this[38] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtPollDriver;
  this[37] = (struct KLOADER_MODULE_REFERENCE__ *)this;
  this[40] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 39);
  this[39] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 39);
  *((_DWORD *)this + 73) = 1817211460;
  memset(this + 45, 0, 0x48uLL);
  this[46] = (struct KLOADER_MODULE_REFERENCE__ *)this;
  this[47] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtIndicateReceivedNbls;
  *((_DWORD *)this + 91) = 1817213010;
  this[49] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 48);
  this[48] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 48);
  *((_DWORD *)this + 90) = 6000;
  memset(this + 54, 0, 0x48uLL);
  *((_DWORD *)this + 108) = 6000;
  this[56] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtCompleteTransmittedNbls;
  this[55] = (struct KLOADER_MODULE_REFERENCE__ *)this;
  this[58] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 57);
  this[57] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 57);
  *((_DWORD *)this + 109) = 1817213012;
  memset(this + 63, 0, 0x40uLL);
  HIDWORD(v10) = 0;
  this[64] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtSetMiniportNotificationEnabled;
  this[63] = (struct KLOADER_MODULE_REFERENCE__ *)this;
  this[66] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 65);
  this[65] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 65);
  v5 = this[71];
  pAdapterInstanceName = 0LL;
  LODWORD(v10) = 40;
  v12 = (char *)v5 + 4008;
  v11 = this[75];
  v2 = NdisMQueryAdapterInstanceName(&pAdapterInstanceName, v5);
  if ( v2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v2;
    v3 = 11;
    goto LABEL_4;
  }
  Buffer = pAdapterInstanceName.Buffer;
  v7 = this + 16;
  v8 = this[1];
  v14 = pAdapterInstanceName.Buffer;
  v9 = ((__int64 (__fastcall *)(__int64 *, struct KLOADER_MODULE_REFERENCE__ **))v8)(&v10, this + 16);
  v2 = v9;
  if ( v9 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_ecc0162481ba31e412c2de57aaf9ced1_Traceguids,
        v9,
        v10,
        v11,
        v12);
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&v14);
    return v2;
  }
  ((void (__fastcall *)(_QWORD, char *))this[3])(*v7, (char *)this + 360);
  ((void (__fastcall *)(_QWORD, char *))this[3])(*v7, (char *)this + 432);
  ((void (__fastcall *)(_QWORD, char *))this[3])(*v7, (char *)this + 288);
  ((void (__fastcall *)(_QWORD, char *))this[6])(*v7, (char *)this + 504);
  ((void (__fastcall *)(_QWORD))this[11])(*v7);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  return 0LL;
}
