/*
 * XREFs of AcpiEval_PCCP @ 0x1C0026958
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C003AB2C (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     AcpiEvaluateMethod @ 0x1C0027F18 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0028560 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PCCP(__int64 a1, _QWORD *a2)
{
  void *Pool2; // rsi
  int v5; // ebx
  PVOID v6; // rdi
  char v8; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+42h] [rbp-2Eh]
  const char *v10; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v11)(); // [rsp+50h] [rbp-20h]
  char v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ah] [rbp-16h]
  const char *v14; // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v15)(); // [rsp+68h] [rbp-8h]
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h] BYREF

  v12 = 1;
  v16 = 0;
  v10 = "InputBufferOffset";
  v8 = 0;
  v9 = 0;
  v14 = "OutputBufferOffset";
  v11 = AcpiParseULong;
  Pool2 = 0LL;
  v13 = 0x40000;
  v15 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x8000u);
  v5 = AcpiEvaluateMethod(a1, 1346585424, 0, (unsigned int)&P, (__int64)&v16);
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x80000000;
    if ( v16 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 8LL, 1919119952LL);
      if ( Pool2 )
      {
        v6 = P;
        v5 = AcpiParseCore(
               (unsigned int)&v8,
               2,
               (int)P + 12,
               *((_DWORD *)P + 1) - 12,
               (__int64)Pool2,
               8,
               (__int64)"PCCP",
               0);
        if ( v5 >= 0 )
        {
          *a2 = Pool2;
          goto LABEL_9;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x2Eu,
            (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      }
      else
      {
        v5 = -1073741670;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x2Du,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      v5 = -1073741275;
    }
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x8000u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)0);
  v6 = P;
LABEL_9:
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)0);
  return (unsigned int)v5;
}
