/*
 * XREFs of ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CADC
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180021A10 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x18005D088 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioMSHRTF *__fastcall CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(CSpatialAudioMSHRTF *this, HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  char *v6; // rbx
  __int64 v7; // rdi
  signed __int64 v8; // rcx
  __int16 v9; // ax
  char *v10; // rax
  signed __int64 v12; // rcx
  __int16 v13; // ax
  char *v14; // rax

  CSpatialAudioTech::CSpatialAudioTech(this);
  v4 = 128LL;
  *(_QWORD *)this = &CSpatialAudioMSHRTF::`vftable';
  v5 = (char *)this + 32;
  *((_OWORD *)this + 1) = MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x190u, (LPWSTR)this + 16, 128) <= 0 )
  {
    v12 = (char *)L"Microsoft HRTF" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v13 = *(_WORD *)&v5[v12];
      if ( !v13 )
        break;
      *(_WORD *)v5 = v13;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v14 = v5 - 2;
    if ( v4 )
      v14 = v5;
    *(_WORD *)v14 = 0;
  }
  v6 = (char *)this + 288;
  v7 = 256LL;
  if ( LoadStringW(a2, 0x1AEu, (LPWSTR)this + 144, 256) <= 0 )
  {
    v8 = (char *)&String2 - v6;
    do
    {
      if ( v7 == -2147483390 )
        break;
      v9 = *(_WORD *)&v6[v8];
      if ( !v9 )
        break;
      *(_WORD *)v6 = v9;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    v10 = v6 - 2;
    if ( v7 )
      v10 = v6;
    *(_WORD *)v10 = 0;
  }
  return this;
}
