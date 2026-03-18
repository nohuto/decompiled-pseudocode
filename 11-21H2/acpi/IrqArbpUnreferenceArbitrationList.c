/*
 * XREFs of IrqArbpUnreferenceArbitrationList @ 0x1C009A974
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009C700 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0023BB0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0023C70 (WPP_RECORDER_SF_DDq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C006C894 (ProcessorDeleteDeviceIdtAssignment.c)
 *     IcGetPossibleInput @ 0x1C0097288 (IcGetPossibleInput.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C009A1D0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C009A2C0 (IrqArbGsivFromIrq.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00B5F4C (LinkNodeGetPossibleGsiv.c)
 *     IcRemovePossibleReference @ 0x1C00B7154 (IcRemovePossibleReference.c)
 */

__int64 __fastcall IrqArbpUnreferenceArbitrationList(__int64 a1, __int64 ***a2)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  PRTL_RANGE i; // rcx
  _DWORD *UserData; // rdi
  __int64 **j; // rbx
  int v11; // eax
  PRTL_RANGE v12; // rax
  unsigned int k; // r14d
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // esi
  __int64 v17; // rdx
  int v18; // r8d
  unsigned int v19; // r15d
  int v20; // [rsp+20h] [rbp-60h]
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+B0h] [rbp+30h] BYREF

  v2 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  Range = 0LL;
  v22 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  RtlGetFirstRange(v2, &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDq((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v20);
      i = Range;
    }
    UserData = i->UserData;
    UserData[1] &= ~8u;
    for ( j = *a2; a2 != (__int64 ***)j; j = (__int64 **)*j )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0x14u,
          (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
      if ( Range->Owner == j[4] )
      {
        v11 = UserData[1];
        if ( (v11 & 8) == 0 )
        {
          UserData[1] = v11 | 8;
          v12 = Range;
          for ( k = Range->Start; k <= LODWORD(v12->End); ++k )
          {
            v14 = IrqArbGsivFromIrq(k);
            v16 = v14;
            if ( v14 < 0xFFF00000 && (int)IcGetPossibleInput(v14, v15, 0LL) >= 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  4u,
                  v18 + 20,
                  v18 + 21,
                  (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
              LOBYTE(v17) = Range->Attributes & 1;
              IcRemovePossibleReference(v16, v17);
            }
            if ( (int)ProcessorGetDeviceIdtAssignment(j[4], v16, 1, &v21) >= 0 )
            {
              v19 = DWORD1(v22);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  4u,
                  0x14u,
                  0x16u,
                  (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
              ProcessorDeleteDeviceIdtAssignment(j[4], v16, v19, 1);
            }
            v12 = Range;
          }
          if ( UserData[2] == 2 )
          {
            LinkNodeGetPossibleGsiv(*((_QWORD *)UserData + 2), 0LL);
            --*(_DWORD *)(*((_QWORD *)UserData + 2) + 28LL);
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
