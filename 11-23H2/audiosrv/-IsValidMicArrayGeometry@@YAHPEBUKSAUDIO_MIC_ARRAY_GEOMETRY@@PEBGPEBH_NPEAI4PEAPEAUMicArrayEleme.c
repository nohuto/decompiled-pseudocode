/*
 * XREFs of ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x180158C94
 * Callers:
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180157AD8 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x1801590B8 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
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
  __int64 usNumberOfMicrophones; // rsi
  int v9; // eax
  int v10; // ecx
  SHORT wVerticalAngleBegin; // dx
  int v12; // eax
  USHORT usFrequencyBandLo; // cx
  int v14; // edx
  char v15; // r10
  char v16; // r13
  unsigned __int16 v17; // r12
  SHORT *p_wVerticalAngle; // r11
  __int16 v19; // r8
  SHORT v20; // bp
  SHORT v21; // di
  __int16 v22; // r14
  SHORT *p_wYCoord; // r8
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v27; // [rsp+60h] [rbp+8h]
  char v28; // [rsp+78h] [rbp+20h]

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
  if ( a1->usVersion != 256 )
    v10 |= 8u;
  if ( a1->usMicArrayType && (unsigned int)a1->usMicArrayType - 1 >= 2 )
    v10 |= 0x10u;
  if ( (unsigned __int16)(a1->wHorizontalAngleBegin + 31416) > 0x7AB8u )
    v10 |= 0x100u;
  if ( a1->wHorizontalAngleEnd > 0x7AB8u )
    v10 |= 0x200u;
  wVerticalAngleBegin = a1->wVerticalAngleBegin;
  if ( (unsigned __int16)(wVerticalAngleBegin + 15708) > 0x7AB8u )
    v10 |= 0x20u;
  if ( (unsigned __int16)(a1->wVerticalAngleEnd + 15708) > 0x7AB8u )
    v10 |= 0x40u;
  if ( a1->wHorizontalAngleBegin > 0 || a1->wHorizontalAngleEnd < 0 )
    v10 |= 0x400u;
  v12 = v10 | 0x80;
  if ( wVerticalAngleBegin <= a1->wVerticalAngleEnd )
    v12 = v10;
  usFrequencyBandLo = a1->usFrequencyBandLo;
  v14 = v12 | 0x800;
  if ( usFrequencyBandLo < a1->usFrequencyBandHi )
    v14 = v12;
  if ( a1->usFrequencyBandHi < 0x14u || usFrequencyBandLo > 0x4E20u )
    v14 |= 0x20000u;
  v28 = 1;
  v15 = 0;
  v16 = 1;
  if ( !(_WORD)usNumberOfMicrophones )
    goto LABEL_75;
  v17 = 1;
  v27 = usNumberOfMicrophones;
  p_wVerticalAngle = &a1->KsMicCoord[0].wVerticalAngle;
  do
  {
    v19 = *(p_wVerticalAngle - 4);
    if ( v19
      && *(p_wVerticalAngle - 4) != 1
      && *(p_wVerticalAngle - 4) != 2
      && *(p_wVerticalAngle - 4) != 3
      && (unsigned int)(unsigned __int16)*(p_wVerticalAngle - 4) - 4 >= 2 )
    {
      if ( (v19 & 0xF) == 0xF )
        v14 |= 4u;
      else
        v14 |= 0x2000u;
    }
    v20 = p_wVerticalAngle[1];
    if ( (unsigned __int16)(v20 + 31416) > 0xF570u )
      v14 |= 0x8000u;
    v21 = *p_wVerticalAngle;
    if ( (unsigned __int16)(*p_wVerticalAngle + 15708) > 0x7AB8u )
      v14 |= 0x4000u;
    if ( (v21 == -15708 || v21 == 15708) && v20 )
      v14 |= 0x100000u;
    if ( (unsigned __int16)(v20 + 15707) <= 0x7AB6u )
      v15 = 1;
    if ( v20 || v21 )
      v16 = 0;
    v22 = *(p_wVerticalAngle - 2);
    if ( v22 || *(p_wVerticalAngle - 1) )
      v28 = 0;
    if ( v17 < (unsigned __int16)usNumberOfMicrophones )
    {
      p_wYCoord = &a1->KsMicCoord[v17].wYCoord;
      v24 = (unsigned __int16)(usNumberOfMicrophones - v17);
      do
      {
        if ( *(p_wVerticalAngle - 3) == *(p_wYCoord - 1)
          && v22 == *p_wYCoord
          && *(p_wVerticalAngle - 1) == p_wYCoord[1]
          && v20 == p_wYCoord[3]
          && v21 == p_wYCoord[2] )
        {
          v14 |= 0x10000u;
        }
        p_wYCoord += 6;
        --v24;
      }
      while ( v24 );
    }
    p_wVerticalAngle += 6;
    ++v17;
    --v27;
  }
  while ( v27 );
  if ( v28 && v16 )
LABEL_75:
    v14 |= 0x40000u;
  v25 = v14 | 0x80000;
  if ( v15 )
    v25 = v14;
  *a5 = v25;
  return v5;
}
