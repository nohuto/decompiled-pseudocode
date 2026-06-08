/*
 * XREFs of DecodeAcpiIdleState @ 0x1C0023C48
 * Callers:
 *     DecodeAcpi2CState @ 0x1C0023BF0 (DecodeAcpi2CState.c)
 *     RegisterHvLpiStates @ 0x1C0025CDC (RegisterHvLpiStates.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002F53C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterHiddenIdleStates @ 0x1C0033060 (RegisterHiddenIdleStates.c)
 *     RegisterKernelLpiStates @ 0x1C0034178 (RegisterKernelLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003C3A0 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0004FC8 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C002AC3C (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpiIdleState(
        __int64 a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
        char *a6,
        _BYTE *a7,
        __int64 a8)
{
  void (__fastcall *v9)(_QWORD *, __int64, _QWORD *); // r12
  char v11; // r13
  __int64 v13; // r10
  int v14; // ecx
  char v15; // cl
  const char *v16; // rdx
  unsigned __int16 v17; // r9
  int v18; // ecx
  __int64 v19; // xmm1_8
  void *v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 (*v23)(); // r8
  int v24; // eax
  __int64 v26; // [rsp+58h] [rbp-18h] BYREF
  int v27; // [rsp+60h] [rbp-10h]
  unsigned int v29; // [rsp+B0h] [rbp+40h]
  int v30; // [rsp+C0h] [rbp+50h]

  v9 = 0LL;
  v11 = 0;
  v29 = -1073741823;
  *a5 = 0LL;
  v13 = a1;
  if ( a3 == -1 )
  {
    v30 = 3;
  }
  else
  {
    v14 = a3;
    if ( a3 >= 3 )
      v14 = 3;
    v30 = v14;
  }
  if ( qword_1C00126A8 )
  {
    v29 = qword_1C00126A8(v13, a2, a3);
    if ( (v29 & 0x80000000) == 0 )
    {
LABEL_39:
      if ( a8 && HIBYTE(word_1C0012DC1) )
      {
        *(_QWORD *)(a8 + 24) = HvRequestIdle;
        *(_QWORD *)(a8 + 64) = HvIdleDecode;
        *(_QWORD *)(a8 + 32) = *a5;
        *(_DWORD *)(a8 + 40) = v30;
        *(_QWORD *)(a8 + 56) = *a5;
      }
      return v29;
    }
    v13 = a1;
  }
  v15 = *a2;
  v16 = "LPI";
  if ( a3 != -1 )
    v16 = "C";
  if ( v15 != 127 )
  {
    if ( v15 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 16;
        goto LABEL_46;
      }
      return v29;
    }
    if ( a3 < 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 15;
        goto LABEL_46;
      }
      return v29;
    }
    if ( a3 != 2 && a3 != -1 )
    {
      v22 = *((_DWORD *)a2 + 2);
      v26 = *(_QWORD *)a2;
      v27 = v22;
      AcpiTranslateAccessSize(&v26, v16);
      v23 = C3IdleCheck;
      v19 = v26;
      v20 = C3Idle;
      v9 = DecodeRegisterContext;
      v18 = v27;
      *a5 = *a5 & 0xF40FFFFFFFFFFFFFuLL | 0xB20000000000000LL;
      *(_WORD *)a5 = WORD2(v26);
LABEL_33:
      v29 = 0;
      if ( a8 )
      {
        *(_QWORD *)(a8 + 32) = v19;
        *(_DWORD *)(a8 + 40) = v18;
        *(_BYTE *)(a8 + 80) = 1;
        *(_QWORD *)(a8 + 16) = v23;
        *(_QWORD *)(a8 + 24) = v20;
        *(_QWORD *)(a8 + 64) = v9;
      }
      if ( a6 )
        *a6 = v11;
      if ( a7 )
        *a7 = 1;
      goto LABEL_39;
    }
    v24 = *((_DWORD *)a2 + 2);
    v26 = *(_QWORD *)a2;
    v27 = v24;
    AcpiTranslateAccessSize(&v26, v16);
    v20 = C2Idle;
    v19 = v26;
    v21 = *a5 & 0xFB0FFFFFFFFFFFFFuLL | 0x420000000000000LL;
    v18 = v27;
    goto LABEL_31;
  }
  if ( a2[1] == 1 )
  {
    if ( a2[2] != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 13;
LABEL_46:
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v17,
          (__int64)&WPP_e0adb0cd688e3d58f88317709de3b4ac_Traceguids,
          v16);
        return v29;
      }
      return v29;
    }
    v18 = *((_DWORD *)a2 + 2);
    v19 = *(_QWORD *)a2;
    v26 = *(_QWORD *)a2;
    if ( HIDWORD(v26) )
    {
      LODWORD(v26) = 134219777;
      v18 = 0;
      v19 = v26;
    }
    v20 = IoHaltC1Idle;
    v11 = 1;
    v21 = *a5 & 0xFF0FFFFFFFFFFFFFuLL | 0x10000000000000LL;
LABEL_31:
    *a5 = v21;
    v9 = DecodeRegisterContext;
    *(_WORD *)a5 = WORD2(v26);
    goto LABEL_32;
  }
  if ( a3 == 1 || a3 == -1 && (*(_QWORD *)(v13 + 280) & 0xE0000000000LL) != 0 )
  {
    v19 = *(_QWORD *)a2;
    v20 = C1Idle;
    v18 = *((_DWORD *)a2 + 2);
    *a5 &= 0xFF0FFFFFFFFFFFFFuLL;
    v11 = 1;
LABEL_32:
    v23 = 0LL;
    goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 14;
    goto LABEL_46;
  }
  return v29;
}
