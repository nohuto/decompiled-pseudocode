/*
 * XREFs of AcpiEval_CST @ 0x1C0026EC8
 * Callers:
 *     InitAcpi2CStates @ 0x1C0036A68 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     AcpiEvaluateMethod @ 0x1C0028B0C (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0029150 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C002A38C (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiEval_CST(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  int v4; // eax
  _DWORD *v5; // rsi
  int v6; // ebx
  unsigned __int16 v7; // r9
  int v8; // r12d
  _DWORD *Pool2; // r15
  __int64 v10; // rax
  _WORD *v11; // r14
  int v12; // edx
  int v13; // r9d
  __int64 v14; // r8
  _BYTE *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  __int64 v20; // [rsp+28h] [rbp-81h]
  int v21; // [rsp+40h] [rbp-69h]
  int v22; // [rsp+44h] [rbp-65h] BYREF
  PVOID P; // [rsp+48h] [rbp-61h] BYREF
  __int64 v24; // [rsp+50h] [rbp-59h]
  _QWORD *v25; // [rsp+58h] [rbp-51h]
  char v26; // [rsp+60h] [rbp-49h] BYREF
  int v27; // [rsp+62h] [rbp-47h]
  const char *v28; // [rsp+68h] [rbp-41h]
  __int64 (__fastcall *v29)(); // [rsp+70h] [rbp-39h]
  char v30; // [rsp+78h] [rbp-31h]
  int v31; // [rsp+7Ah] [rbp-2Fh]
  const char *v32; // [rsp+80h] [rbp-29h]
  __int64 (__fastcall *v33)(); // [rsp+88h] [rbp-21h]
  char v34; // [rsp+90h] [rbp-19h]
  int v35; // [rsp+92h] [rbp-17h]
  const char *v36; // [rsp+98h] [rbp-11h]
  __int64 (__fastcall *v37)(); // [rsp+A0h] [rbp-9h]
  char v38; // [rsp+A8h] [rbp-1h]
  int v39; // [rsp+AAh] [rbp+1h]
  const char *v40; // [rsp+B0h] [rbp+7h]
  __int64 (__fastcall *v41)(); // [rsp+B8h] [rbp+Fh]

  v2 = 0;
  v25 = a2;
  v22 = 0;
  v28 = "Register";
  v26 = 0;
  v31 = 786432;
  v29 = AcpiParseRegister;
  v27 = 2;
  v32 = "StateType";
  v30 = 1;
  v36 = "Latency";
  v33 = AcpiParseULong;
  v40 = "PowerConsumption";
  v34 = 2;
  v35 = 917504;
  v37 = AcpiParseULong;
  v38 = 3;
  v39 = 0x100000;
  v41 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 8u);
  v4 = AcpiEvaluateMethod(a1, 1414742879, 0, (unsigned int)&P, (__int64)&v22);
  v5 = P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x7F070;
    if ( !v22 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v6 = -1073741275;
        goto LABEL_49;
      }
      v7 = 10;
LABEL_5:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v7,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      goto LABEL_6;
    }
    if ( !v5[2] )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v7 = 11;
      goto LABEL_5;
    }
    if ( *((_WORD *)v5 + 6) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xCu,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      v6 = -1072431096;
    }
    else
    {
      v8 = v5[4];
      if ( v8 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v8 + 4), 1919119952LL);
        if ( Pool2 )
        {
          v10 = *((unsigned __int16 *)v5 + 7);
          if ( (unsigned __int16)v10 < 4u )
            v10 = 4LL;
          v11 = (_WORD *)((char *)v5 + v10 + 16);
          v12 = 0;
          v21 = 0;
          while ( v11 < (_WORD *)((char *)v5 + (unsigned int)v5[1]) )
          {
            if ( v2 == v8 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0xDu,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
LABEL_44:
              v6 = -1072431096;
LABEL_47:
              ExFreePoolWithTag(Pool2, (ULONG)0);
              goto LABEL_49;
            }
            if ( *v11 != 3 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v20) = v12;
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0xEu,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                  v20);
              }
              goto LABEL_44;
            }
            v13 = (unsigned __int16)v11[1];
            v24 = 5LL * v2;
            v6 = AcpiParseCore(
                   (unsigned int)&v26,
                   4,
                   (int)v11 + 4,
                   v13,
                   (__int64)&Pool2[v24 + 1],
                   20,
                   (__int64)"_CST",
                   0);
            if ( v6 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v20) = v21;
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0xFu,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                  v20);
              }
              v6 = -1072431089;
              goto LABEL_47;
            }
            v14 = v24;
            v15 = &Pool2[v24 + 1];
            if ( *v15 != 127 )
            {
              AcpiTranslateAccessSize(v15);
              v14 = v24;
            }
            v16 = (unsigned __int16)v11[1];
            if ( (unsigned __int16)v16 < 4u )
              v16 = 4LL;
            v17 = *(_QWORD *)(a1 + 280);
            v11 = (_WORD *)((char *)v11 + v16 + 4);
            v18 = Pool2[v14 + 4];
            v12 = ++v21;
            if ( (v17 & 0x1010) == 0 && v18 == 1 || (v17 & 0x2020) == 0 && v18 == 2 || (v17 & 0x4040) == 0 && v18 >= 3u )
              --v2;
            ++v2;
          }
          if ( !v2 )
          {
            v6 = -1073741823;
            goto LABEL_47;
          }
          *Pool2 = (unsigned __int8)v2;
          *v25 = Pool2;
        }
        else
        {
          v6 = -1073741670;
        }
      }
      else
      {
        v6 = -1073741823;
      }
    }
  }
LABEL_49:
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)0);
  if ( v6 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
  return (unsigned int)v6;
}
