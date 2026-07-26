/*
 * XREFs of ?Initialize@NdisPoll@@QEAAJXZ @ 0x1C0134D14
 * Callers:
 *     NdisRegisterPoll @ 0x1C01349C0 (NdisRegisterPoll.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ??1?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@XZ @ 0x1C0058484 (--1-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@XZ.c)
 *     NdisMQueryAdapterInstanceName @ 0x1C006C460 (NdisMQueryAdapterInstanceName.c)
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1C0134B84 (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 */

__int64 __fastcall NdisPoll::Initialize(struct KLOADER_MODULE_REFERENCE__ **this)
{
  unsigned int v2; // edi
  unsigned __int16 v3; // r9
  struct KLOADER_MODULE_REFERENCE__ *v4; // rdx
  _QWORD *v5; // rsi
  unsigned int v6; // eax
  char v8[4]; // [rsp+28h] [rbp-60h]
  char v9[4]; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  struct KLOADER_MODULE_REFERENCE__ *v11; // [rsp+38h] [rbp-50h]
  char *v12; // [rsp+40h] [rbp-48h]
  UNICODE_STRING pAdapterInstanceName; // [rsp+48h] [rbp-40h] BYREF
  wchar_t *Buffer; // [rsp+90h] [rbp+8h] BYREF

  v2 = ExecutionContextLibrary::Initialize(this);
  if ( v2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v3 = 10;
LABEL_4:
      *(_DWORD *)v8 = v2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v3,
        (struct _GUID *)&WPP_ecc0162481ba31e412c2de57aaf9ced1_Traceguids,
        *(_DWORD *)v8,
        v10,
        v11,
        v12);
    }
  }
  else
  {
    memset(this + 35, 0, 0x48uLL);
    *((_DWORD *)this + 70) = 4000;
    this[37] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtPollDriver;
    this[36] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[39] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 38);
    this[38] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 38);
    *((_DWORD *)this + 71) = 1817211460;
    memset(this + 44, 0, 0x48uLL);
    this[45] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[46] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtIndicateReceivedNbls;
    *((_DWORD *)this + 89) = 1817213010;
    this[48] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 47);
    this[47] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 47);
    *((_DWORD *)this + 88) = 6000;
    memset(this + 53, 0, 0x48uLL);
    *((_DWORD *)this + 106) = 6000;
    this[55] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtCompleteTransmittedNbls;
    this[54] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[57] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 56);
    this[56] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 56);
    *((_DWORD *)this + 107) = 1817213012;
    memset(this + 62, 0, 0x40uLL);
    HIDWORD(v10) = 0;
    this[63] = (struct KLOADER_MODULE_REFERENCE__ *)NdisPoll::EvtSetMiniportNotificationEnabled;
    this[62] = (struct KLOADER_MODULE_REFERENCE__ *)this;
    this[65] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 64);
    this[64] = (struct KLOADER_MODULE_REFERENCE__ *)(this + 64);
    v4 = this[70];
    pAdapterInstanceName = 0LL;
    LODWORD(v10) = 40;
    v12 = (char *)v4 + 4008;
    v11 = this[74];
    v2 = NdisMQueryAdapterInstanceName(&pAdapterInstanceName, v4);
    if ( v2 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v2;
      v3 = 11;
      goto LABEL_4;
    }
    v5 = this + 15;
    Buffer = pAdapterInstanceName.Buffer;
    v6 = ((__int64 (__fastcall *)(__int64 *, char *))this[1])(&v10, (char *)this + 120);
    v2 = v6;
    if ( v6 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v9 = v6;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_ecc0162481ba31e412c2de57aaf9ced1_Traceguids,
          *(_DWORD *)v9,
          v10,
          v11,
          v12);
      }
    }
    else
    {
      ((void (__fastcall *)(_QWORD, char *))this[3])(*v5, (char *)this + 352);
      ((void (__fastcall *)(_QWORD, char *))this[3])(*v5, (char *)this + 424);
      ((void (__fastcall *)(_QWORD, char *))this[3])(*v5, (char *)this + 280);
      ((void (__fastcall *)(_QWORD, char *))this[6])(*v5, (char *)this + 496);
      ((void (__fastcall *)(_QWORD))this[11])(*v5);
      v2 = 0;
    }
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::~unique_ptr<wchar_t,KFreePool<wchar_t>>((void **)&Buffer);
  }
  return v2;
}
