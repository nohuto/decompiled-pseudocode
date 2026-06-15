/*
 * XREFs of ?CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z @ 0x180018B64
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180018874 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 * Callees:
 *     ?GetPolicyVolume@CAudioStream@@IEAAJKQEAMAEA_J@Z @ 0x180018C20 (-GetPolicyVolume@CAudioStream@@IEAAJKQEAMAEA_J@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18001A350 (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::CalculateAPOVolume(
        CAudioStream *this,
        unsigned int a2,
        float *const a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v6; // rsi
  int PolicyVolume; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  float *v12; // rbx
  double *v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rdx
  float v16; // xmm1_4
  __int64 v18[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a2;
  PolicyVolume = CAudioStream::GetPolicyVolume(this, a2, a3, v18);
  v10 = PolicyVolume;
  if ( PolicyVolume < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)PolicyVolume,
      v18[0]);
    return v10;
  }
  else
  {
    v11 = v18[0];
    *a4 = *((_BYTE *)this + 544);
    if ( v11 < *((_QWORD *)this + 67) )
      v11 = *((_QWORD *)this + 67);
    *a5 = v11;
    if ( (_DWORD)v6 )
    {
      v12 = a3;
      do
      {
        v13 = (double *)*((_QWORD *)this + 69);
        v14 = *((_QWORD *)this + 66);
        v15 = (char *)v12 - (char *)a3;
        if ( v13 )
          v16 = CVolumeUnit::ScalarFromTaper(
                  (CVolumeUnit *)v13,
                  (float)(*(float *)(v14 + v15) * *v12) * (v13[4] - v13[3]) + v13[3]);
        else
          v16 = *(float *)(v14 + v15) * *v12;
        *v12++ = v16;
        --v6;
      }
      while ( v6 );
    }
    return 0LL;
  }
}
