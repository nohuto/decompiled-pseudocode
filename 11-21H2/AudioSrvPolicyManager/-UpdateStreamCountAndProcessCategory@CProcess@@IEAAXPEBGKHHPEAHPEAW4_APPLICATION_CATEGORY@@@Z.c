/*
 * XREFs of ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001CDB8
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x180016A40 (-EnsureBamExemption@CProcess@@IEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180017114 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18001718C (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     WPP_SF_dSS @ 0x18001E098 (WPP_SF_dSS.c)
 */

void __fastcall CProcess::UpdateStreamCountAndProcessCategory(
        CProcess *this,
        unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int *a6,
        enum _APPLICATION_CATEGORY *a7)
{
  __int64 v7; // rbp
  int v11; // esi
  int v12; // edi
  int v13; // ecx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v15; // rax
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  v7 = *((int *)this + 78);
  v11 = a4 != 0 ? 1 : -1;
  v12 = 0;
  if ( (int)CProcess::GetActiveStreamCountStatsForEndpoint(this, a2, a5, (unsigned int **)&pftDueTime) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)&pftDueTime + 4LL * a3) += v11;
    if ( a5 )
    {
      *((_DWORD *)this + 77) += v11;
    }
    else
    {
      *((_DWORD *)this + 76) += v11;
      if ( (unsigned int)CProcess::GetActiveRenderStreamCount(this, 3u)
        || (unsigned int)CProcess::GetActiveRenderStreamCount(this, 8u) )
      {
        *((_DWORD *)this + 78) = 0;
      }
      else if ( (unsigned int)CProcess::GetActiveRenderStreamCount(this, 2u) )
      {
        *((_DWORD *)this + 78) = 1;
      }
      else if ( (unsigned int)CProcess::GetActiveRenderStreamCount(this, 0xBu)
             || (unsigned int)CProcess::GetActiveRenderStreamCount(this, 0xAu)
             || (unsigned int)CProcess::GetActiveRenderStreamCount(this, 1u) )
      {
        *((_DWORD *)this + 78) = 2;
      }
      else
      {
        *((_DWORD *)this + 78) = 4 - ((unsigned int)CProcess::GetActiveRenderStreamCount(this, 7u) != 0);
      }
    }
    v13 = *((_DWORD *)this + 76) + *((_DWORD *)this + 77);
    if ( a4 )
    {
      if ( v13 == 1 )
        CProcess::EnsureBamExemption(this);
    }
    else if ( !v13 )
    {
      ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)this + 73);
      if ( ThreadpoolTimer
        || (ThreadpoolTimer = CreateThreadpoolTimer(
                                (PTP_TIMER_CALLBACK)lambda_27ffc4f27c89750b73dd50f8af6b1d3e_::_lambda_invoker_cdecl_,
                                this,
                                0LL),
            (*((_QWORD *)this + 73) = ThreadpoolTimer) != 0LL) )
      {
        pftDueTime.dwHighDateTime = -1;
        pftDueTime.dwLowDateTime = -200000000;
        SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
      }
    }
  }
  if ( a7 )
    *(_DWORD *)a7 = v7;
  if ( a6 )
  {
    LOBYTE(v12) = (_DWORD)v7 != *((_DWORD *)this + 78);
    *a6 = v12;
  }
  v15 = *((int *)this + 78);
  if ( (_DWORD)v7 != (_DWORD)v15
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSS(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)off_180049178[v7], (__int64)off_180049178[v15]);
  }
}
