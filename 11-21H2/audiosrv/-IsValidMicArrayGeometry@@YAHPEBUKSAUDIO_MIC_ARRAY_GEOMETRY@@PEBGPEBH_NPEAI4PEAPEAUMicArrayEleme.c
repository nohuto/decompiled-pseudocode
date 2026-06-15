/*
 * XREFs of ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x1801518FC
 * Callers:
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801506EC (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180151D18 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 */

__int64 __fastcall IsValidMicArrayGeometry(
        const struct KSAUDIO_MIC_ARRAY_GEOMETRY *a1,
        const unsigned __int16 *a2,
        const int *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  const char *v7; // r8
  __int64 usNumberOfMicrophones; // r11
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  SHORT wVerticalAngleBegin; // r8
  USHORT usFrequencyBandLo; // cx
  int v15; // eax
  int v16; // edx
  char v17; // r12
  char v18; // r13
  unsigned __int16 v19; // si
  SHORT *p_wHorizontalAngle; // r10
  unsigned __int16 v21; // ax
  SHORT v22; // r14
  __int16 v23; // di
  __int16 v24; // bp
  SHORT *p_wYCoord; // r8
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v29; // [rsp+60h] [rbp+8h]
  char v30; // [rsp+78h] [rbp+20h]

  v5 = 0;
  if ( !a1 )
  {
    v7 = "209";
LABEL_3:
    v5 = -2147024809;
    DumpTraceWin32((const char *)a1, "IsValidMicArrayGeometry", v7, -2147024809);
    return v5;
  }
  if ( !a5 )
  {
    v7 = "210";
    goto LABEL_3;
  }
  usNumberOfMicrophones = a1->usNumberOfMicrophones;
  v9 = 4096;
  if ( (_WORD)usNumberOfMicrophones )
    v9 = 0;
  v10 = v9;
  if ( a2 && *a2 != (_WORD)usNumberOfMicrophones )
    v10 = v9 | 1;
  if ( a3 && (int)usNumberOfMicrophones > *a3 )
    v10 |= 2u;
  v11 = v10 | 8;
  if ( a1->usVersion == 256 )
    v11 = v10;
  v12 = v11 | 0x10;
  if ( a1->usMicArrayType <= 2u )
    v12 = v11;
  if ( (unsigned __int16)(a1->wHorizontalAngleBegin + 31416) > 0x7AB8u )
    v12 |= 0x100u;
  wVerticalAngleBegin = a1->wVerticalAngleBegin;
  if ( a1->wHorizontalAngleEnd > 0x7AB8u )
    v12 |= 0x200u;
  if ( (unsigned __int16)(wVerticalAngleBegin + 15708) > 0x7AB8u )
    v12 |= 0x20u;
  if ( (unsigned __int16)(a1->wVerticalAngleEnd + 15708) > 0x7AB8u )
    v12 |= 0x40u;
  if ( a1->wHorizontalAngleBegin > 0 || a1->wHorizontalAngleEnd < 0 )
    v12 |= 0x400u;
  usFrequencyBandLo = a1->usFrequencyBandLo;
  v15 = v12 | 0x80;
  if ( wVerticalAngleBegin <= a1->wVerticalAngleEnd )
    v15 = v12;
  v16 = v15 | 0x800;
  if ( usFrequencyBandLo < a1->usFrequencyBandHi )
    v16 = v15;
  if ( a1->usFrequencyBandHi < 0x14u || usFrequencyBandLo > 0x4E20u )
    v16 |= 0x20000u;
  v30 = 1;
  v17 = 0;
  v18 = 1;
  if ( !(_WORD)usNumberOfMicrophones )
    goto LABEL_70;
  v19 = 1;
  v29 = usNumberOfMicrophones;
  p_wHorizontalAngle = &a1->KsMicCoord[0].wHorizontalAngle;
  do
  {
    v21 = *(p_wHorizontalAngle - 5);
    if ( v21 > 5u )
    {
      if ( (v21 & 0xF) == 0xF )
        v16 |= 4u;
      else
        v16 |= 0x2000u;
    }
    v22 = *p_wHorizontalAngle;
    v23 = *(p_wHorizontalAngle - 1);
    if ( (unsigned __int16)(*p_wHorizontalAngle + 31416) > 0xF570u )
      v16 |= 0x8000u;
    if ( (unsigned __int16)(v23 + 15708) > 0x7AB8u )
      v16 |= 0x4000u;
    if ( (v23 == -15708 || v23 == 15708) && v22 )
      v16 |= 0x100000u;
    if ( (unsigned __int16)(v22 + 15707) <= 0x7AB6u )
      v17 = 1;
    if ( v22 || v23 )
      v18 = 0;
    v24 = *(p_wHorizontalAngle - 3);
    if ( v24 || *(p_wHorizontalAngle - 2) )
      v30 = 0;
    if ( v19 < (unsigned __int16)usNumberOfMicrophones )
    {
      p_wYCoord = &a1->KsMicCoord[v19].wYCoord;
      v26 = (unsigned __int16)(usNumberOfMicrophones - v19);
      do
      {
        if ( *(p_wHorizontalAngle - 4) == *(p_wYCoord - 1)
          && v24 == *p_wYCoord
          && *(p_wHorizontalAngle - 2) == p_wYCoord[1]
          && v22 == p_wYCoord[3]
          && v23 == p_wYCoord[2] )
        {
          v16 |= 0x10000u;
        }
        p_wYCoord += 6;
        --v26;
      }
      while ( v26 );
    }
    p_wHorizontalAngle += 6;
    ++v19;
    --v29;
  }
  while ( v29 );
  if ( v30 && v18 )
LABEL_70:
    v16 |= 0x40000u;
  v27 = v16 | 0x80000;
  if ( v17 )
    v27 = v16;
  *a5 = v27;
  return v5;
}
