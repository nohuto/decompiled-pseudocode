/*
 * XREFs of PnpiBiosAddressQuadToIoDescriptor @ 0x1C00974BC
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0022FA0 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005E810 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     WPP_RECORDER_SF_i @ 0x1C005F66C (WPP_RECORDER_SF_i.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C00980F0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C0098B40 (PnpiUpdateResourceList.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0098D5C (PnpiBiosAddressHandleMemoryFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C00AA0D4 (AcpiDiagTraceMemoryReserved.c)
 */

NTSTATUS __fastcall PnpiBiosAddressQuadToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  ULONGLONG v4; // rsi
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // r10
  NTSTATUS result; // eax
  __int64 v11; // rdi
  struct _IO_RESOURCE_DESCRIPTOR *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rax
  ULONGLONG v15; // r13
  ULONGLONG v16; // r12
  ULONG_PTR v17; // r8
  ULONGLONG v18; // rdx
  ULONGLONG v19; // r14
  unsigned __int8 v20; // cl
  ULONG_PTR v21; // r12
  ULONGLONG v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  int Type; // eax
  ULONGLONG MaximumAddress; // [rsp+28h] [rbp-28h]
  char v28; // [rsp+38h] [rbp-18h]
  ULONGLONG v29; // [rsp+40h] [rbp-10h] BYREF
  ULONGLONG Alignment; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR Length; // [rsp+90h] [rbp+40h] BYREF
  __int64 v32; // [rsp+98h] [rbp+48h]
  unsigned int v33; // [rsp+A0h] [rbp+50h]

  v33 = a3;
  v32 = a2;
  v29 = 0LL;
  v4 = 0LL;
  Alignment = 0LL;
  if ( (BugCheckParameter2[4] & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    LOBYTE(v8) = BugCheckParameter2[5];
    v28 = v7;
    LOBYTE(v7) = BugCheckParameter2[3];
    AcpiDiagTraceMemoryReserved(
      v7,
      v6,
      v8,
      *(_QWORD *)(BugCheckParameter2 + 6),
      *(_QWORD *)(BugCheckParameter2 + 14),
      *(_QWORD *)(BugCheckParameter2 + 22),
      *(_QWORD *)(BugCheckParameter2 + 30),
      v28);
    return 0;
  }
  if ( !v7 )
    return 0;
  v11 = v9 + 8LL * v8;
  result = PnpiUpdateResourceList(v11, &v29);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v12 = (struct _IO_RESOURCE_DESCRIPTOR *)v29;
    }
    else
    {
      result = PnpiUpdateResourceList(v11, &Alignment);
      if ( result < 0 )
        return result;
      v4 = Alignment;
      *(_BYTE *)(Alignment + 1) = -127;
      v12 = (struct _IO_RESOURCE_DESCRIPTOR *)(v4 - 32);
      *(_WORD *)(v4 + 4) = 24576;
    }
    v13 = *(unsigned __int16 *)(BugCheckParameter2 + 1);
    if ( v13 < 0x2B )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x13u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          *(unsigned __int16 *)(BugCheckParameter2 + 1));
        LOWORD(v13) = *(_WORD *)(BugCheckParameter2 + 1);
      }
      KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (unsigned __int16)v13);
    }
    v14 = *(_QWORD *)(BugCheckParameter2 + 30);
    v15 = *(_QWORD *)(BugCheckParameter2 + 14);
    v16 = *(_QWORD *)(BugCheckParameter2 + 6) + 1LL;
    v17 = *(_QWORD *)(BugCheckParameter2 + 38);
    v18 = *(_QWORD *)(BugCheckParameter2 + 22);
    Length = v17;
    Alignment = v16;
    v19 = v14 + v15;
    v29 = v18;
    if ( v14 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v15, v18, v14);
      v17 = Length;
      v18 = v29;
    }
    v20 = BugCheckParameter2[4];
    if ( (v20 & 4) != 0 && (v20 & 8) != 0 )
    {
      v21 = v18 - v15 + 1;
      if ( v21 != v17 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xDu,
            0x14u,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
        v17 = v21;
        Length = v21;
      }
      if ( (v15 & *(_QWORD *)(BugCheckParameter2 + 6)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xDu,
            0x15u,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          v17 = Length;
        }
        Alignment = 1LL;
      }
    }
    if ( v17 > 0xFFFFFFFF && BugCheckParameter2[3] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_i(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v18,
          0xDu,
          0x16u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v17);
        v17 = Length;
      }
      if ( (AcpiOverrideAttributes & 0x80u) == 0 || v15 < 0xFFFFFFFF )
        KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&Length);
    }
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v12->u.Port.Alignment = Alignment;
        v12->u.Port.Length = Length;
        v22 = v29;
        v12->u.Port.MinimumAddress.QuadPart = v15;
        v12->u.Port.MaximumAddress.QuadPart = v22;
        v12->Type = 1;
        v23 = BugCheckParameter2[5];
        if ( (v23 & 0x20) != 0 )
        {
          *(_WORD *)(v4 + 4) |= 1u;
          v23 = BugCheckParameter2[5];
        }
        *(_DWORD *)(v4 + 8) = (v23 & 0x10 | 8u) >> 3;
        *(_QWORD *)(v4 + 12) = v19;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v12->Flags |= 0x20u;
        v12->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v12->Type = 6;
        v12->u.Port.Length = Length;
        v12->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 14);
        v12->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 22);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(MaximumAddress) = BugCheckParameter2[3];
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x17u,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          MaximumAddress);
      }
    }
    else
    {
      result = RtlIoEncodeMemIoResource(v12, 3u, v17, Alignment, v15, v29);
      if ( result < 0 )
        return result;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        Type = 1;
      else
        Type = v12->Type;
      *(_DWORD *)(v4 + 8) = Type;
      *(_QWORD *)(v4 + 12) = v19;
      PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2, v12, v24, v25);
    }
    result = PnpiBiosAddressHandleGlobalFlags(BugCheckParameter2, v32, v33, v12);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
