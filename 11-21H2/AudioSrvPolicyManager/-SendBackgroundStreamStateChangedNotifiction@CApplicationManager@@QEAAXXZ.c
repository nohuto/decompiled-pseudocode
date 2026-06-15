/*
 * XREFs of ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180024AFC
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180017B84 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180017DF4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::SendBackgroundStreamStateChangedNotifiction(CApplicationManager *this)
{
  GUID *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // r15
  int v4; // r14d
  SIZE_T v5; // rbx
  HANDLE ProcessHeap; // rax
  GUID *v7; // rax
  _QWORD *v8; // rdi
  GUID *v9; // r13
  __int64 v10; // rbx
  bool i; // zf
  signed __int32 v12; // eax
  GUID v13; // xmm6
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  HANDLE v16; // rax

  v2 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_QWORD *)this + 11) )
  {
    v4 = 0;
    v5 = 20LL * *((_QWORD *)this + 11);
    if ( !is_mul_ok(*((_QWORD *)this + 11), 0x14uLL) )
      v5 = -1LL;
    ProcessHeap = GetProcessHeap();
    v7 = (GUID *)HeapAlloc(ProcessHeap, 0, v5);
    v2 = v7;
    if ( v7 )
    {
      v8 = (_QWORD *)*((_QWORD *)this + 9);
      if ( v8 )
      {
        v9 = v7;
        do
        {
          v10 = v8[2];
          v8 = (_QWORD *)*v8;
          for ( i = v10 == 0;
                !i;
                i = v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 12), v12 + 1, v12) )
          {
            v12 = *(_DWORD *)(v10 + 12);
            if ( v12 == 0x7FFFFFFF )
              break;
          }
          if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v10) )
          {
            v13 = GUID_00000000_0000_0000_0000_000000000000;
            EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 32));
            v14 = *(_QWORD **)(v10 + 72);
            if ( v14 )
            {
              while ( 1 )
              {
                v15 = v14[2];
                v14 = (_QWORD *)*v14;
                if ( !*(_DWORD *)(v15 + 416)
                  && *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 != *(_OWORD *)(v15 + 520) )
                {
                  break;
                }
                if ( !v14 )
                  goto LABEL_18;
              }
              v13 = *(GUID *)(v15 + 520);
            }
LABEL_18:
            if ( v10 != -32 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 32));
            *v9 = v13;
            LOBYTE(v9[1].Data1) = (unsigned int)CApplication::GetTotalActiveRenderStreamCount((CApplication *)v10) != 0;
            ++v4;
            v9 = (GUID *)((char *)v9 + 20);
          }
          if ( v10 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release((volatile signed __int32 *)v10);
        }
        while ( v8 );
        if ( v4 )
          RtlPublishWnfStateData(WNF_BMP_BG_PLAYSTATE_CHANGED, 0LL, v2, (unsigned int)(20 * v4), 0LL);
      }
    }
  }
  v16 = GetProcessHeap();
  HeapFree(v16, 0, v2);
  if ( v3 )
    LeaveCriticalSection(v3);
}
