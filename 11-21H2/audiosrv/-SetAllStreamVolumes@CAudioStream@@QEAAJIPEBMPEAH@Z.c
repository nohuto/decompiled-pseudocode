/*
 * XREFs of ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180012B70
 * Callers:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180012220 (-SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180014050 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::SetAllStreamVolumes(CAudioStream *this, unsigned int a2, float *a3, int *a4)
{
  int v6; // ebx
  unsigned int v7; // eax
  float *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  float v13; // xmm1_4
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == *((_DWORD *)this + 21) )
  {
    v6 = 0;
    v7 = 0;
    if ( a2 )
    {
      v8 = a3;
      do
      {
        if ( *v8 < 0.0 || *v8 > 1.0 )
        {
          v15 = 791LL;
          goto LABEL_17;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < a2 );
      v9 = 0LL;
      v10 = a2;
      v11 = 0;
      do
      {
        v12 = *((_QWORD *)this + 13);
        v13 = a3[v9];
        if ( *(float *)(v12 + v9 * 4) != v13 )
        {
          *(float *)(v12 + v9 * 4) = v13;
          ++v11;
        }
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      v11 = 0;
    }
    CAudioStream::RecalculateVolume(this, 0, 0LL);
    if ( a4 )
    {
      LOBYTE(v6) = v11 == 0;
      *a4 = v6;
    }
    return 0LL;
  }
  else
  {
    v15 = 787LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL,
      v16);
    return 2147942487LL;
  }
}
