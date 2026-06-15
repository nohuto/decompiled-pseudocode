/*
 * XREFs of ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1400658B4
 * Callers:
 *     ?QueueInitialVolumeNotification@@YAJAEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140066200 (-QueueInitialVolumeNotification@@YAJAEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVC.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC8C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAudioVolumeNotificationData(struct IMMDevice *a1, struct AUDIO_VOLUME_NOTIFICATION_DATA **a2)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  GUID *v7; // rax
  GUID *v8; // rbx
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF
  GUID *v20; // [rsp+78h] [rbp+48h]

  lpVtbl = a1->lpVtbl;
  v19 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))lpVtbl->Activate)(
         a1,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         23LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 217LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_20;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 40LL))(v19, &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 220LL;
    goto LABEL_5;
  }
  v7 = (GUID *)operator new[](4LL * v18 + 32, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v20 = v7;
  if ( v7 )
  {
    *(_DWORD *)v7[1].Data4 = v18;
    v9 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v19 + 120LL))(v19, v7 + 1);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v19 + 72LL))(v19, &v8[1].Data2);
      v5 = v12;
      if ( v12 >= 0 )
      {
        *v8 = GUID_00000000_0000_0000_0000_000000000000;
        v13 = 0;
        if ( !v18 )
        {
LABEL_14:
          v15 = (struct AUDIO_VOLUME_NOTIFICATION_DATA *)v8;
          v8 = 0LL;
          *a2 = v15;
          v5 = 0;
          goto LABEL_18;
        }
        while ( 1 )
        {
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int8 *))(*(_QWORD *)v19 + 104LL))(
                  v19,
                  v13,
                  &v8[1].Data4[4 * v13 + 4]);
          v5 = v14;
          if ( v14 < 0 )
            break;
          if ( ++v13 >= v18 )
            goto LABEL_14;
        }
        v10 = (unsigned int)v14;
        v11 = 232LL;
      }
      else
      {
        v10 = (unsigned int)v12;
        v11 = 228LL;
      }
    }
    else
    {
      v10 = (unsigned int)v9;
      v11 = 227LL;
    }
  }
  else
  {
    v5 = -2147024882;
    v10 = 2147942414LL;
    v11 = 224LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)v10);
LABEL_18:
  if ( v8 )
    operator delete(v8);
LABEL_20:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
  return v5;
}
