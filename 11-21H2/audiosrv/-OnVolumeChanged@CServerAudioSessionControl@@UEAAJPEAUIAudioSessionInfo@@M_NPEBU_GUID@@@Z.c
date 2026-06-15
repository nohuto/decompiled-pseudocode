/*
 * XREFs of ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180005C90
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     WPP_SF_Sgd @ 0x1800DDFA4 (WPP_SF_Sgd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CServerAudioSessionControl::OnVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        float a3,
        char a4,
        struct _GUID *a5)
{
  int v5; // r8d
  int MediaEvent; // ebp
  CEndpointStoreCache *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  unsigned int *v14; // rax
  unsigned __int64 v15; // r8
  unsigned int *v16; // r14
  GUID *v17; // rax
  __int64 v18; // r9
  _WORD *v19; // rcx
  unsigned __int64 v20; // rdx
  __int16 v21; // ax
  HANDLE ProcessHeap; // rax
  double v24; // [rsp+20h] [rbp-48h]

  MediaEvent = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v9 + 28) & 0x40) != 0
      && *((_BYTE *)v9 + 25) >= 4u )
    {
      v24 = a3;
      WPP_SF_Sgd(*((_QWORD *)v9 + 2), (_DWORD)a2, v5, 0, SLOBYTE(v24), a4);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 656);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = (unsigned int *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v17 = a5;
      if ( !a5 )
        v17 = &GUID_00000000_0000_0000_0000_000000000000;
      *(GUID *)(v16 + 7) = *v17;
      v16[1] = 1;
      v16[6] = v12;
      *((float *)v16 + 12) = a3;
      *((_BYTE *)v16 + 52) = a4;
      v18 = *(_QWORD *)(*((_QWORD *)this + 9) + 656LL);
      v19 = v16 + 18;
      v20 = (unsigned __int64)v12 >> 1;
      if ( v20 )
      {
        v15 = 2147483646 - v20;
        v18 -= (__int64)v19;
        while ( v15 + v20 )
        {
          v21 = *(_WORD *)((char *)v19 + v18);
          if ( !v21 )
            break;
          *v19++ = v21;
          if ( !--v20 )
          {
            --v19;
            break;
          }
        }
        *v19 = 0;
      }
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          30LL,
          &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v16,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v16, *((unsigned int *)this + 20), v15, v18);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v16);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnVolumeChanged", 0x46Bu, MediaEvent);
    }
  }
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
