/*
 * XREFs of ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180050C58
 * Callers:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180050B90 (-SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180018874 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x180050D04 (-ValidateAudioLevel@@YA_NM@Z.c)
 */

__int64 __fastcall CAudioStream::SetAllStreamVolumes(CAudioStream *this, int a2, float *a3, int *a4)
{
  CAudioStream *v5; // r10
  int v6; // ebx
  unsigned int v7; // edx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  float v15; // xmm1_4
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = this;
  if ( a2 == *((_DWORD *)this + 24) )
  {
    v6 = 0;
    if ( a2 )
    {
      do
      {
        if ( !ValidateAudioLevel(*a3) )
        {
          v17 = 879LL;
          goto LABEL_15;
        }
        a3 = (float *)(v9 + 4);
      }
      while ( v8 + 1 < v7 );
      v11 = 0;
      v12 = v7;
      v13 = 0LL;
      do
      {
        v14 = *((_QWORD *)v5 + 15);
        v15 = *(float *)(v13 + v10);
        if ( *(float *)(v14 + v13) != v15 )
        {
          *(float *)(v14 + v13) = v15;
          ++v11;
        }
        v13 += 4LL;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      v11 = 0;
    }
    CAudioStream::RecalculateVolume(v5, 0, 0LL);
    if ( a4 )
    {
      LOBYTE(v6) = v11 == 0;
      *a4 = v6;
    }
    return 0LL;
  }
  else
  {
    v17 = 875LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
