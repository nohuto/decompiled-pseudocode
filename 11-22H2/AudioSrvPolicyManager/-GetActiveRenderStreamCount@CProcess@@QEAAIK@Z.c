/*
 * XREFs of ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800135C0
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000ADE0 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CD30 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetActiveRenderStreamCount@CApplication@@IEAAIK@Z @ 0x180026D8C (-GetActiveRenderStreamCount@CApplication@@IEAAIK@Z.c)
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180027A8C (-IsPlaying@CApplication@@QEAAHH@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18002AFF4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CProcess::GetActiveRenderStreamCount(CProcess *this, unsigned int a2)
{
  int v2; // r9d
  unsigned int v3; // r10d
  CProcess *v4; // r11
  int v5; // r8d
  __int64 v6; // rax

  v2 = *((_DWORD *)this + 68);
  v3 = 0;
  v4 = this;
  v5 = 0;
  if ( v2 > 0 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 < 0 || v5 >= v2 )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        JUMPOUT(0x180013614LL);
      }
      ++v5;
      this = *(CProcess **)(*((_QWORD *)v4 + 33) + v6);
      v6 += 8LL;
      v3 += *((_DWORD *)this + a2);
    }
    while ( v5 < v2 );
  }
  return v3;
}
