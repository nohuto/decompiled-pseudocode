/*
 * XREFs of RaCallMiniportFindAdapter @ 0x1C0040B0C
 * Callers:
 *     RaidAdapterReInitialize @ 0x1C0035EFC (RaidAdapterReInitialize.c)
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer @ 0x1C0040824 (McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer.c)
 *     McTemplateK0zzdqq_EtwWriteTransfer @ 0x1C00409C4 (McTemplateK0zzdqq_EtwWriteTransfer.c)
 */

__int64 __fastcall RaCallMiniportFindAdapter(_BYTE *a1, void *a2, __int64 a3)
{
  __int64 v3; // rax
  void *v4; // rbp
  unsigned int v5; // edi
  _BYTE *v6; // rbx
  int v7; // esi
  __int64 v9; // r15
  unsigned int *v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  int v13; // eax
  int v14; // esi
  int v15; // esi
  __int64 v16; // r10
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // ebp
  __int64 v21; // rcx
  unsigned int v22; // esi
  unsigned int v23; // r9d
  char v25; // [rsp+D0h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = &unk_1C006B0C8;
  v5 = 0;
  v6 = a1 + 8;
  v25 = 0;
  v7 = 3;
  v9 = *(_QWORD *)(v3 + 8);
  if ( a2 )
    v4 = a2;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer(
      (unsigned __int8)a1[91],
      &EventAdapterInitPortConfigInfo,
      (unsigned __int8)v6[97],
      *(_DWORD *)v6,
      *((_DWORD *)v6 + 6),
      a1[80],
      v6[97],
      a1[154],
      *((_DWORD *)v6 + 51),
      *((_DWORD *)v6 + 52),
      *((_DWORD *)v6 + 53),
      *((_DWORD *)v6 + 48),
      *((_DWORD *)v6 + 55),
      v6[98],
      v6[99],
      v6[144],
      *((_DWORD *)v6 + 54),
      *((_DWORD *)v6 + 40),
      a1[91],
      v6[196]);
  v10 = (unsigned int *)*((_QWORD *)a1 + 29);
  v11 = a1[248] | 1;
  a1[248] = v11;
  v12 = *v10;
  if ( (_DWORD)v12 == 136 )
  {
LABEL_9:
    v13 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *, _BYTE *, char *))v10 + 4))(
            *((_QWORD *)a1 + 30) + 16LL,
            0LL,
            0LL,
            v4,
            v6,
            &v25);
    goto LABEL_10;
  }
  if ( (v11 & 4) == 0 )
  {
    if ( (_DWORD)v12 != 208 )
      goto LABEL_11;
    goto LABEL_9;
  }
  v13 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void *, _BYTE *, char *))v10 + 4))(
          *((_QWORD *)a1 + 30) + 16LL,
          *(_QWORD *)(*(_QWORD *)a1 + 32LL),
          v9,
          *(_QWORD *)(*(_QWORD *)a1 + 24LL),
          v4,
          v6,
          &v25);
LABEL_10:
  v7 = v13;
LABEL_11:
  a1[248] &= ~1u;
  if ( v7 == 1 )
  {
    if ( !v6[90] || !v6[91] || !v6[81] || !v6[82] )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          WPP_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xAu,
            (__int64)&WPP_22dbf8d6d8ed332b22c627201937f270_Traceguids);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xBu,
            (__int64)&WPP_22dbf8d6d8ed332b22c627201937f270_Traceguids);
        }
      }
LABEL_24:
      v5 = -1073741438;
      goto LABEL_42;
    }
  }
  else
  {
    if ( !v7 )
    {
      v5 = -1073741275;
      goto LABEL_42;
    }
    v14 = v7 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v5 = -1073741630;
        goto LABEL_42;
      }
      if ( v15 != 1 )
      {
        v5 = -1073741595;
        goto LABEL_42;
      }
      goto LABEL_24;
    }
  }
  v16 = *(_QWORD *)a1;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 4672LL) && *(_QWORD *)(v16 + 4680) && *(_QWORD *)(v16 + 4688) )
  {
    v17 = 0;
    do
    {
      v12 = *(_QWORD *)(v16 + 4680) + 16LL * v17;
      a3 = v17;
      v18 = *(_QWORD *)v12 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
      if ( *(_QWORD *)v12 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
        v18 = *(_QWORD *)(v12 + 8) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
      if ( v18 )
        PoRegisterPowerSettingCallback(
          *(PDEVICE_OBJECT *)(v16 + 8),
          (LPCGUID)v12,
          (PPOWER_SETTING_CALLBACK)RaidPowerSettingCallback,
          (PVOID)v16,
          (PVOID *)(*(_QWORD *)(v16 + 4688) + 8LL * v17));
      v16 = *(_QWORD *)a1;
      ++v17;
    }
    while ( v17 < *(_DWORD *)(*(_QWORD *)a1 + 4672LL) );
  }
LABEL_42:
  v19 = *((unsigned int *)v6 + 51);
  v20 = 1000;
  if ( (unsigned int)v19 <= 0x3E8 || (v12 = (unsigned __int8)v6[144], (unsigned __int8)(v6[144] - 2) <= 2u) )
  {
    v20 = *((_DWORD *)v6 + 51);
    if ( (unsigned int)v19 < 0x10 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0zzdqq_EtwWriteTransfer(v19, v12, a3, L"MaxNumberOfIO", L"MaxNumberOfIO", 16, v19, 16);
      *((_DWORD *)v6 + 51) = 16;
      v20 = 16;
    }
  }
  else
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zzdqq_EtwWriteTransfer(v19, v12, a3, L"MaxNumberOfIO", L"Dma64BitAddresses", v12, v19, 232);
    *((_DWORD *)v6 + 51) = 1000;
  }
  v21 = *((unsigned int *)v6 + 52);
  v22 = 255;
  if ( (unsigned int)v21 > 0xFF )
  {
    v12 = (unsigned __int8)v6[98];
    if ( (_BYTE)v12 != 1 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0zzdqq_EtwWriteTransfer(v21, v12, a3, L"MaxIOsPerLun", L"SrbType", v12, v21, 255);
LABEL_62:
      *((_DWORD *)v6 + 52) = v22;
      goto LABEL_63;
    }
LABEL_59:
    v22 = *((_DWORD *)v6 + 52);
    if ( (unsigned int)v21 <= v20 )
      goto LABEL_63;
    v22 = v20;
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    {
      McTemplateK0zzdqq_EtwWriteTransfer(v21, v12, a3, L"MaxIOsPerLun", L"MaxNumberOfIO", v20, v21, v20);
      v22 = *((_DWORD *)v6 + 51);
    }
    goto LABEL_62;
  }
  if ( (unsigned int)v21 >= 0x10 )
    goto LABEL_59;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zzdqq_EtwWriteTransfer(v21, v12, a3, L"MaxIOsPerLun", L"MaxIOsPerLun", 16, v21, 16);
  *((_DWORD *)v6 + 52) = 16;
  v22 = 16;
LABEL_63:
  v23 = *((_DWORD *)v6 + 53);
  if ( v23 > v22 )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    {
      McTemplateK0zzdqq_EtwWriteTransfer(v21, v12, a3, L"InitialLunQueueDepth", L"MaxIOsPerLun", v22, v23, v22);
      v22 = *((_DWORD *)v6 + 52);
    }
    *((_DWORD *)v6 + 53) = v22;
    LOBYTE(v23) = v22;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer(
      *((unsigned int *)v6 + 6),
      &EventAdapterFinalPortConfigInfo,
      (unsigned __int8)v6[97],
      *(_DWORD *)v6,
      *((_DWORD *)v6 + 6),
      v6[72],
      v6[97],
      v6[146],
      *((_DWORD *)v6 + 51),
      v22,
      v23,
      *((_DWORD *)v6 + 48),
      *((_DWORD *)v6 + 55),
      v6[98],
      v6[99],
      v6[144],
      *((_DWORD *)v6 + 54),
      *((_DWORD *)v6 + 40),
      v6[83],
      v6[196]);
  return v5;
}
