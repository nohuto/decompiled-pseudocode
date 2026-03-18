/*
 * XREFs of ?RectangleGeometrySetRectangle@CChannel@@UEAAJIMMMMMMMMMMMM_N@Z @ 0x180074140
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::RectangleGeometrySetRectangle(
        CChannel *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        bool a15)
{
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v29; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v30; // [rsp+3Ch] [rbp-55h]
  float v31; // [rsp+40h] [rbp-51h]
  _DWORD v32[10]; // [rsp+48h] [rbp-49h] BYREF
  bool v33; // [rsp+70h] [rbp-21h]
  __int16 v34; // [rsp+71h] [rbp-20h]
  char v35; // [rsp+73h] [rbp-1Eh]
  char *v36; // [rsp+A8h] [rbp+17h] BYREF

  v36 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 137);
  v32[0] = 329;
  v35 = 0;
  *(float *)&v32[2] = a7;
  *(float *)&v32[3] = a8;
  *(float *)&v32[4] = a9;
  *(float *)&v32[5] = a10;
  *(float *)&v32[6] = a11;
  *(float *)&v32[7] = a12;
  *(float *)&v32[8] = a13;
  *(float *)&v32[9] = a14;
  v32[1] = a2;
  v33 = a15;
  v34 = 256;
  v17 = CChannel::SendCommand(this, v32, 0x2Cu);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x755u);
  }
  else
  {
    v29 = 327;
    v31 = a3;
    v30 = a2;
    v20 = CChannel::SendCommand(this, &v29, 0xCu);
    v19 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x75Du);
    }
    else
    {
      v29 = 332;
      v31 = a4;
      v30 = a2;
      v22 = CChannel::SendCommand(this, &v29, 0xCu);
      v19 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x765u);
      }
      else
      {
        v29 = 330;
        v31 = a5;
        v30 = a2;
        v24 = CChannel::SendCommand(this, &v29, 0xCu);
        v19 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x76Du);
        }
        else
        {
          v29 = 326;
          v31 = a6;
          v30 = a2;
          v26 = CChannel::SendCommand(this, &v29, 0xCu);
          v19 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x775u);
        }
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v36);
  return v19;
}
