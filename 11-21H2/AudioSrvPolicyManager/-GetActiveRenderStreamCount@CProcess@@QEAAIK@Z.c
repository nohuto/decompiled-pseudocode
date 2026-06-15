/*
 * XREFs of ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180017114
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015950 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x1800185BC (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001CDB8 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180032264 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001D210 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall CProcess::GetActiveRenderStreamCount(CProcess *this, unsigned int a2)
{
  __int64 v2; // r11
  unsigned int v3; // r8d
  CProcess *v4; // rbx
  int v5; // r10d
  __int64 i; // r9
  __int64 v7; // rax

  v2 = *((int *)this + 68);
  v3 = 0;
  v4 = this;
  v5 = 0;
  if ( (int)v2 > 0 )
  {
    for ( i = 0LL; i < v2; ++i )
    {
      if ( v5 >= (int)v2 )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        JUMPOUT(0x18001716BLL);
      }
      ++v5;
      LODWORD(this) = a2;
      v7 = *(_QWORD *)(*((_QWORD *)v4 + 33) + 8 * i);
      v3 += *(_DWORD *)(v7 + 4LL * a2);
    }
  }
  return v3;
}
