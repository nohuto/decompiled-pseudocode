/*
 * XREFs of AcpiEval_CST @ 0x1C0027778
 * Callers:
 *     InitAcpi2CStates @ 0x1C0024270 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     AcpiEvaluateMethod @ 0x1C00293BC (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0029A00 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C002AC3C (AcpiTranslateAccessSize.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  _BYTE *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  __int64 v21; // [rsp+28h] [rbp-81h]
  int v22; // [rsp+40h] [rbp-69h]
  int v23; // [rsp+44h] [rbp-65h] BYREF
  PVOID P; // [rsp+48h] [rbp-61h] BYREF
  __int64 v25; // [rsp+50h] [rbp-59h]
  _QWORD *v26; // [rsp+58h] [rbp-51h]
  char v27; // [rsp+60h] [rbp-49h] BYREF
  int v28; // [rsp+62h] [rbp-47h]
  const char *v29; // [rsp+68h] [rbp-41h]
  __int64 (__fastcall *v30)(); // [rsp+70h] [rbp-39h]
  char v31; // [rsp+78h] [rbp-31h]
  int v32; // [rsp+7Ah] [rbp-2Fh]
  const char *v33; // [rsp+80h] [rbp-29h]
  __int64 (__fastcall *v34)(); // [rsp+88h] [rbp-21h]
  char v35; // [rsp+90h] [rbp-19h]
  int v36; // [rsp+92h] [rbp-17h]
  const char *v37; // [rsp+98h] [rbp-11h]
  __int64 (__fastcall *v38)(); // [rsp+A0h] [rbp-9h]
  char v39; // [rsp+A8h] [rbp-1h]
  int v40; // [rsp+AAh] [rbp+1h]
  const char *v41; // [rsp+B0h] [rbp+7h]
  __int64 (__fastcall *v42)(); // [rsp+B8h] [rbp+Fh]

  v2 = 0;
  v26 = a2;
  v23 = 0;
  v29 = "Register";
  v27 = 0;
  v32 = 786432;
  v30 = AcpiParseRegister;
  v28 = 2;
  v33 = "StateType";
  v31 = 1;
  v37 = "Latency";
  v34 = AcpiParseULong;
  v41 = "PowerConsumption";
  v35 = 2;
  v36 = 917504;
  v38 = AcpiParseULong;
  v39 = 3;
  v40 = 0x100000;
  v42 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 8u);
  v4 = AcpiEvaluateMethod(a1, 1414742879, 0, (unsigned int)&P, (__int64)&v23);
  v5 = P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x7F070;
    if ( !v23 )
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
          v22 = 0;
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
                LODWORD(v21) = v12;
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0xEu,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                  v21);
              }
              goto LABEL_44;
            }
            v13 = (unsigned __int16)v11[1];
            v25 = 5LL * v2;
            v6 = AcpiParseCore(
                   (unsigned int)&v27,
                   4,
                   (int)v11 + 4,
                   v13,
                   (__int64)&Pool2[v25 + 1],
                   20,
                   (__int64)"_CST",
                   0);
            if ( v6 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v21) = v22;
                WPP_RECORDER_SF_d(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0xFu,
                  (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
                  v21);
              }
              v6 = -1072431089;
              goto LABEL_47;
            }
            v15 = v25;
            v16 = &Pool2[v25 + 1];
            if ( *v16 != 127 )
            {
              AcpiTranslateAccessSize(v16, v14);
              v15 = v25;
            }
            v17 = (unsigned __int16)v11[1];
            if ( (unsigned __int16)v17 < 4u )
              v17 = 4LL;
            v18 = *(_QWORD *)(a1 + 280);
            v11 = (_WORD *)((char *)v11 + v17 + 4);
            v19 = Pool2[v15 + 4];
            v12 = ++v22;
            if ( (v18 & 0x1010) == 0 && v19 == 1 || (v18 & 0x2020) == 0 && v19 == 2 || (v18 & 0x4040) == 0 && v19 >= 3u )
              --v2;
            ++v2;
          }
          if ( !v2 )
          {
            v6 = -1073741823;
            goto LABEL_47;
          }
          *Pool2 = (unsigned __int8)v2;
          *v26 = Pool2;
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
