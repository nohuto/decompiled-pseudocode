/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x1C01958A0
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C0198794 (RIMSetDeviceOutputConfig.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C019A364 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00E74FA (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0188460 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01A614C (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C01A6AF4 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01B61C4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1C01B68C8 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall RIMSuppressAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct RIMDEV *v5; // rsi
  LARGE_INTEGER v6; // rbx
  int v7; // r13d
  int v8; // r12d
  __int64 v9; // r8
  __int64 active; // rax
  __int64 v11; // r8
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // r14
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  _BYTE v24[32]; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+C8h] [rbp+48h]
  __int64 v26; // [rsp+D8h] [rbp+58h]

  v26 = *(_QWORD *)(a2 + 864) + 1LL;
  v25 = *(_DWORD *)(a2 + 836) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = *(struct RIMDEV **)(a2 + 16);
  v6 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v5);
  v7 = 0;
  v8 = 0;
  active = RIMCmActiveContactsBegin((__int64)&v22, a2, v9);
  v12 = *(_QWORD *)(active + 16);
  v20 = *(_OWORD *)active;
  v21 = v12;
  while ( 1 )
  {
    v13 = RIMCmActiveContactsEnd((__int64)v24, a2, v11);
    v15 = *(_OWORD *)v13;
    v16 = *(_QWORD *)(v13 + 16);
    v17 = *(_QWORD *)v13;
    v23 = v16;
    v22 = v15;
    if ( (_QWORD)v20 == v17 )
    {
      result = DWORD2(v22);
      if ( DWORD2(v20) == DWORD2(v22) && v21 == v23 )
        break;
    }
    v19 = v21 - 16;
    if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v21 - 16) )
    {
      RIMCmAddContactSuppressionReasons(a2, v19);
      if ( !v7 )
      {
        v7 = 1;
        v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
               a1,
               v5,
               (LARGE_INTEGER)v6.QuadPart);
      }
      if ( v8 )
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v5, v19, v26, v25, 1);
    }
    RIMCmActiveContactsNext(a2, &v20);
  }
  if ( v8 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v5, v14);
    return RIMCompletePointerDeviceFrame(a1, v5);
  }
  return result;
}
