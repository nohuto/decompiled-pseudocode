/*
 * XREFs of ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800E55E0
 * Callers:
 *     ?SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z @ 0x1800EFB70 (-SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z.c)
 * Callees:
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x180012788 (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180014050 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::SetAllInitialStreamVolumes(CAudioStream *this, int a2, float *a3, __int64 a4)
{
  float *v4; // rbx
  CAudioStream *v5; // r11
  __int64 v6; // rdx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v5 = this;
  if ( a2 == *((_DWORD *)this + 21) )
  {
    if ( a2 )
    {
      do
      {
        if ( !ValidateAudioLevel(*a3) )
        {
          v6 = 829LL;
          goto LABEL_3;
        }
        a3 = (float *)(v10 + 4);
      }
      while ( v9 + 1 < (unsigned int)v11 );
      v12 = v11;
      do
      {
        *(float *)(v8 + *((_QWORD *)v5 + 13)) = *(float *)((char *)v4 + v8);
        v8 += 4LL;
        --v12;
      }
      while ( v12 );
    }
    CAudioStream::RecalculateVolume(v5, 1, a4);
    return 0LL;
  }
  else
  {
    v6 = 825LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
