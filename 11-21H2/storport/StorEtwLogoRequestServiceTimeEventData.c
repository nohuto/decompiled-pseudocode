/*
 * XREFs of StorEtwLogoRequestServiceTimeEventData @ 0x1C005B01C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001BAA4 (GetSrbScsiData.c)
 *     McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer @ 0x1C0059B20 (McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer.c)
 */

int __fastcall StorEtwLogoRequestServiceTimeEventData(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 SrbScsiData; // rax
  __int64 v4; // rdi
  char v5; // si
  int v6; // ebp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  LARGE_INTEGER v12; // rax
  signed __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rtt
  __int64 v19; // r8
  __int64 v20; // rcx
  char v21; // dl
  char v22; // r9
  char v23; // r10
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF
  union _LARGE_INTEGER v26; // [rsp+C0h] [rbp+8h] BYREF
  int v27; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v28; // [rsp+D0h] [rbp+18h]

  SrbScsiData = (unsigned __int64)&retaddr;
  v28 = a3;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0;
  v26.QuadPart = 0LL;
  v6 = 0;
  LOBYTE(v7) = 0;
  v27 = 0;
  LOBYTE(v8) = 0;
  v9 = 0LL;
  if ( !a2 )
  {
    if ( UseQPCTime )
      v12 = KeQueryPerformanceCounter(&v26);
    else
      v12.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v12.QuadPart <= 0 || (v13 = *(_QWORD *)(a1 + 696), v12.QuadPart >= v13) )
    {
      v13 = *(_QWORD *)(a1 + 696);
      v14 = v12.QuadPart - v13;
    }
    else
    {
      v14 = v12.QuadPart - v13 - 1;
    }
    if ( UseQPCTime )
    {
      if ( v26.QuadPart && v14 )
        v7 = 10000 * (1000 * (v14 % v26.QuadPart) % v26.QuadPart) / v26.QuadPart
           + 10000 * (1000 * (v14 % v26.QuadPart) / v26.QuadPart + 1000 * (v14 / v26.QuadPart));
    }
    else
    {
      LOBYTE(v7) = v14;
    }
    v15 = *(_QWORD *)(a1 + 704);
    if ( v15 >= v13 )
    {
      v16 = v15 - v13;
      if ( UseQPCTime )
      {
        if ( v26.QuadPart && v16 )
          v8 = 10000 * (1000 * (v16 % v26.QuadPart) % v26.QuadPart) / v26.QuadPart
             + 10000 * (1000 * (v16 % v26.QuadPart) / v26.QuadPart + 1000 * (v16 / v26.QuadPart));
      }
      else
      {
        LOBYTE(v8) = v15 - v13;
      }
    }
    if ( v15 && (v17 = *(_QWORD *)(a1 + 712), v17 >= v15) )
    {
      SrbScsiData = v17 - v15;
    }
    else
    {
      SrbScsiData = *(_QWORD *)(a1 + 712);
      if ( (__int64)SrbScsiData < v13 )
        goto LABEL_30;
      SrbScsiData -= v13;
    }
    if ( UseQPCTime )
    {
      if ( v26.QuadPart && SrbScsiData )
      {
        v18 = 1000 * (SrbScsiData % v26.QuadPart);
        v19 = v18 / v26.QuadPart + 1000 * (SrbScsiData / v26.QuadPart);
        SrbScsiData = 10000 * (v18 % v26.QuadPart) / v26.QuadPart;
        v5 = SrbScsiData + 16 * v19;
      }
    }
    else
    {
      v5 = SrbScsiData;
    }
  }
LABEL_30:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v4 + 20) )
    {
      SrbScsiData = GetSrbScsiData(v4, &v27, &v27, 0LL, 0LL, 0LL);
      v6 = v27;
      v9 = SrbScsiData;
    }
    v20 = *(unsigned int *)(v4 + 52);
    v21 = *(_BYTE *)(v20 + v4 + 8);
    v22 = *(_BYTE *)(v20 + v4 + 9);
    v23 = *(_BYTE *)(v20 + v4 + 10);
  }
  else
  {
    v21 = *(_BYTE *)(v4 + 5);
    v9 = v4 + 72;
    v22 = *(_BYTE *)(v4 + 6);
    v6 = 16;
    v23 = *(_BYTE *)(v4 + 7);
  }
  if ( a2 )
  {
    if ( (byte_1C00799E3 & 2) != 0 )
      LODWORD(SrbScsiData) = McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer(
                               *(_QWORD *)(a1 + 216),
                               &EventLogoPerformanceMeasurementTarget,
                               (const GUID *)(a1 + 728),
                               *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                               v21,
                               v22,
                               v23,
                               v28,
                               v6,
                               v9,
                               *(_BYTE *)(v4 + 3),
                               *(_QWORD *)(a1 + 160),
                               *(_QWORD *)(a1 + 768),
                               0,
                               0,
                               0);
  }
  else if ( (byte_1C00799E3 & 2) != 0 )
  {
    LODWORD(SrbScsiData) = McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer(
                             *(_QWORD *)(a1 + 216),
                             &EventLogoPerformanceMeasurement,
                             (const GUID *)(a1 + 728),
                             *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                             v21,
                             v22,
                             v23,
                             v7,
                             v6,
                             v9,
                             *(_BYTE *)(v4 + 3),
                             *(_QWORD *)(a1 + 160),
                             *(_QWORD *)(a1 + 768),
                             v8,
                             v5,
                             *(_QWORD *)(a1 + 720));
  }
  return SrbScsiData;
}
