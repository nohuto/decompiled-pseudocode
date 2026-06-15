/*
 * XREFs of ?SetSessionVolume@CAudioStream@@QEAAJMKQEAM_J_N@Z @ 0x180009EB8
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180009760 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180009CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180018874 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::SetSessionVolume(
        CAudioStream *this,
        float a2,
        unsigned int a3,
        float *const a4,
        __int64 a5)
{
  unsigned int v5; // eax
  _QWORD *v6; // r11
  __int64 i; // rdx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  float v13; // xmm1_4
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)this + 24);
  v6 = (_QWORD *)((char *)this + 528);
  for ( i = 0LL; (unsigned int)i < v5; v5 = *((_DWORD *)this + 24) )
  {
    *(float *)(*v6 + 4 * i) = a2;
    i = (unsigned int)(i + 1);
  }
  if ( a3 < v5 )
  {
    v13 = 0.0;
    if ( a3 )
    {
      v14 = a3;
      do
      {
        if ( v13 <= *a4 )
          v13 = *a4;
        ++a4;
        --v14;
      }
      while ( v14 );
    }
    v15 = 0LL;
    if ( v5 )
    {
      do
      {
        *(float *)(*v6 + 4 * v15) = v13 * *(float *)(*v6 + 4 * v15);
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < *((_DWORD *)this + 24) );
    }
  }
  else
  {
    v9 = 0LL;
    if ( v5 )
    {
      do
      {
        *(float *)(*v6 + 4 * v9) = a4[v9] * *(float *)(*v6 + 4 * v9);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 24) );
    }
  }
  *((_QWORD *)this + 67) = a5;
  v10 = CAudioStream::RecalculateVolume(this, 0, 0LL);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F9,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v10,
    v16);
  return v11;
}
