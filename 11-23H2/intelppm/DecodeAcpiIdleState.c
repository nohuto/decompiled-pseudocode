/*
 * XREFs of DecodeAcpiIdleState @ 0x1C002D668
 * Callers:
 *     DecodeAcpi2CState @ 0x1C002D610 (DecodeAcpi2CState.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C0038784 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterHvLpiStates @ 0x1C003A30C (RegisterHvLpiStates.c)
 *     RegisterHiddenIdleStates @ 0x1C003F060 (RegisterHiddenIdleStates.c)
 *     RegisterKernelLpiStates @ 0x1C003F5D0 (RegisterKernelLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0044C98 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000316C (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C0029C94 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpiIdleState(
        __int64 a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
        char *a6,
        char *a7,
        __int64 a8)
{
  void (__fastcall *v8)(_QWORD *, __int64, _QWORD *); // r15
  char v10; // r12
  __int64 v12; // r10
  unsigned int v13; // r13d
  int v14; // ecx
  char v15; // cl
  const char *v16; // rdx
  char v17; // r11
  unsigned __int16 v18; // r9
  int v19; // ecx
  __int64 v20; // xmm1_8
  void *v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // eax
  __int64 (*v24)(); // r8
  int v25; // eax
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  int v28; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+C0h] [rbp+50h]

  v8 = 0LL;
  v10 = 0;
  v12 = a1;
  *a5 = 0LL;
  v13 = -1073741823;
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
  if ( qword_1C001F1E8 )
  {
    v13 = qword_1C001F1E8(v12, a2, a3);
    if ( (v13 & 0x80000000) == 0 )
    {
LABEL_39:
      if ( a8 && HIBYTE(word_1C001F901) )
      {
        *(_QWORD *)(a8 + 24) = HvRequestIdle;
        *(_QWORD *)(a8 + 64) = HvIdleDecode;
        *(_QWORD *)(a8 + 32) = *a5;
        *(_DWORD *)(a8 + 40) = v30;
        *(_QWORD *)(a8 + 56) = *a5;
      }
      return v13;
    }
    v12 = a1;
  }
  v15 = *a2;
  v16 = "LPI";
  v17 = 1;
  if ( a3 != -1 )
    v16 = "C";
  if ( v15 != 127 )
  {
    if ( v15 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 16;
        goto LABEL_46;
      }
      return v13;
    }
    if ( a3 < 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 15;
        goto LABEL_46;
      }
      return v13;
    }
    if ( a3 != 2 && a3 != -1 )
    {
      v23 = *((_DWORD *)a2 + 2);
      v27 = *(_QWORD *)a2;
      v28 = v23;
      AcpiTranslateAccessSize(&v27);
      v24 = C3IdleCheck;
      v20 = v27;
      v21 = C3Idle;
      v8 = DecodeRegisterContext;
      v19 = v28;
      *a5 = *a5 & 0xF40FFFFFFFFFFFFFuLL | 0xB20000000000000LL;
      *(_WORD *)a5 = WORD2(v27);
LABEL_33:
      v13 = 0;
      if ( a8 )
      {
        *(_QWORD *)(a8 + 32) = v20;
        *(_DWORD *)(a8 + 40) = v19;
        *(_BYTE *)(a8 + 80) = v17;
        *(_QWORD *)(a8 + 16) = v24;
        *(_QWORD *)(a8 + 24) = v21;
        *(_QWORD *)(a8 + 64) = v8;
      }
      if ( a6 )
        *a6 = v10;
      if ( a7 )
        *a7 = v17;
      goto LABEL_39;
    }
    v25 = *((_DWORD *)a2 + 2);
    v27 = *(_QWORD *)a2;
    v28 = v25;
    AcpiTranslateAccessSize(&v27);
    v21 = C2Idle;
    v20 = v27;
    v22 = *a5 & 0xFB0FFFFFFFFFFFFFuLL | 0x420000000000000LL;
    v19 = v28;
    goto LABEL_31;
  }
  if ( a2[1] == 1 )
  {
    if ( a2[2] != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 13;
LABEL_46:
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v18,
          (__int64)&WPP_e0adb0cd688e3d58f88317709de3b4ac_Traceguids,
          v16);
        return v13;
      }
      return v13;
    }
    v19 = *((_DWORD *)a2 + 2);
    v20 = *(_QWORD *)a2;
    v27 = *(_QWORD *)a2;
    if ( HIDWORD(v27) )
    {
      LODWORD(v27) = 134219777;
      v19 = 0;
      v20 = v27;
    }
    v21 = IoHaltC1Idle;
    v10 = 1;
    v22 = *a5 & 0xFF0FFFFFFFFFFFFFuLL | 0x10000000000000LL;
LABEL_31:
    *a5 = v22;
    v8 = DecodeRegisterContext;
    *(_WORD *)a5 = WORD2(v27);
    goto LABEL_32;
  }
  if ( a3 == 1 || a3 == -1 && (*(_QWORD *)(v12 + 280) & 0xE0000000000LL) != 0 )
  {
    v20 = *(_QWORD *)a2;
    v21 = C1Idle;
    v19 = *((_DWORD *)a2 + 2);
    *a5 &= 0xFF0FFFFFFFFFFFFFuLL;
    v10 = 1;
LABEL_32:
    v24 = 0LL;
    goto LABEL_33;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 14;
    goto LABEL_46;
  }
  return v13;
}
