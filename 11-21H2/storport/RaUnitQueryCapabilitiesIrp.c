/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C0089094
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000FA68 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaUnitIsSMRDisabled @ 0x1C001E0F4 (RaUnitIsSMRDisabled.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0055DE0 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortGetDeviceType @ 0x1C00879D8 (PortGetDeviceType.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C00892B8 (PortWdmGetDeviceCapabilities.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  bool v4; // zf
  int v5; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  __int64 v7; // r14
  _DWORD *Pool; // rsi
  __int64 v9; // r8
  int v10; // r9d
  int v11; // edx
  unsigned int v12; // r8d
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rax
  int AccessState; // eax
  int SecurityQos_high; // r8d
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  _BYTE v39[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v40[4]; // [rsp+40h] [rbp-78h] BYREF

  memset(v40, 0, sizeof(v40));
  v4 = *(_QWORD *)(a1 + 24) == 0LL;
  v39[0] = 0;
  if ( v4 || (v5 = *(_DWORD *)(a1 + 48)) == 0 || (unsigned int)(v5 - 5) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v12 = -1073741810;
  }
  else
  {
    RaidUnitPoFxActivateComponent(a1, 0LL, 1LL, v39);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    v7 = 4 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 4 | 2u);
    Pool = (_DWORD *)RaidAllocatePool(64LL, v7, 1918067026LL, *(_QWORD *)(a1 + 8));
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v40);
    v9 = 128LL;
    *(_OWORD *)&SecurityContext->SecurityQos = v40[0];
    v10 = 256;
    *(_OWORD *)&SecurityContext->DesiredAccess = v40[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v40[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v40[3];
    v11 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v11;
    if ( (*(_DWORD *)(a1 + 1824) & 0x20) != 0 || *((_BYTE *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F) + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v9 | v11;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96));
    if ( Pool )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 4) != 0 )
      {
        v14 = Pool[1];
        *Pool = 1572865;
        Pool[1] ^= (HIDWORD(SecurityContext->SecurityQos) ^ v14) & 1;
        v15 = Pool[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ Pool[1]) & 2;
        Pool[1] = v15;
        v16 = v15 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v15) & 4;
        Pool[1] = v16;
        v17 = v16 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v16) & 8;
        Pool[1] = v17;
        v18 = v17 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v17) & 0x10;
        Pool[1] = v18;
        v19 = v18 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v18) & 0x20;
        Pool[1] = v19;
        v20 = v19 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v19) & 0x40;
        Pool[1] = v20;
        v21 = v20 ^ v9 & (HIDWORD(SecurityContext->SecurityQos) ^ v20);
        Pool[1] = v21;
        v22 = v21 ^ v10 & (HIDWORD(SecurityContext->SecurityQos) ^ v21);
        Pool[1] = v22;
        v23 = v22 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v22) & 0x200;
        Pool[1] = v23;
        v24 = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        Pool[1] = v24;
        Pool[3] = HIDWORD(SecurityContext->AccessState);
        v25 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v25 + 4619) == 1 && *(_BYTE *)(v25 + 4618) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 96) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        Pool[2] = AccessState;
        Pool[1] = v24 & 0xFFFFF7FF;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9u, v9, (__int64)Pool, v7) >= 0 )
      {
        SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
        v28 = SecurityQos_high ^ Pool[1];
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 4) != 0 )
        {
          v29 = SecurityQos_high ^ v28 & 1;
          HIDWORD(SecurityContext->SecurityQos) = v29;
          v30 = (Pool[1] ^ v29) & 2 ^ v29;
          HIDWORD(SecurityContext->SecurityQos) = v30;
          v31 = (Pool[1] ^ v30) & 4 ^ v30;
          HIDWORD(SecurityContext->SecurityQos) = v31;
          v32 = (Pool[1] ^ v31) & 8 ^ v31;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          v33 = (Pool[1] ^ v32) & 0x10 ^ v32;
          HIDWORD(SecurityContext->SecurityQos) = v33;
          v34 = (Pool[1] ^ v33) & 0x20 ^ v33;
          HIDWORD(SecurityContext->SecurityQos) = v34;
          v35 = (Pool[1] ^ v34) & 0x40 ^ v34;
          HIDWORD(SecurityContext->SecurityQos) = v35;
          v36 = (Pool[1] ^ v35) & 0x80 ^ v35;
          HIDWORD(SecurityContext->SecurityQos) = v36;
          v37 = (Pool[1] ^ v36) & 0x100 ^ v36;
          HIDWORD(SecurityContext->SecurityQos) = v37;
          v38 = (Pool[1] ^ v37) & 0x200 ^ v37;
          HIDWORD(SecurityContext->SecurityQos) = v38;
          HIDWORD(SecurityContext->SecurityQos) = v38 ^ (v38 ^ (Pool[1] << 7)) & 0x20000;
          HIDWORD(SecurityContext->AccessState) = Pool[3];
          LODWORD(SecurityContext->AccessState) = Pool[2];
          if ( (Pool[1] & 0x800) != 0 )
          {
            *(_DWORD *)(a1 + 1824) |= 0x10u;
            RaidUnitSetDefaultWriteCachePolicy(a1);
          }
        }
        else
        {
          HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high ^ v28 & 0x10;
        }
      }
      ExFreePoolWithTag(Pool, 0x72536152u);
    }
    if ( OverrideDeviceUniqueIDCapability )
      HIDWORD(SecurityContext->SecurityQos) &= ~0x40u;
    *(_BYTE *)(a1 + 450) ^= (*(_BYTE *)(a1 + 450) ^ ((unsigned __int8)(HIDWORD(SecurityContext->SecurityQos) >> 4) << 6)) & 0x40;
    *(_BYTE *)(a1 + 450) = *(_BYTE *)(a1 + 450) & 0x7F | ((unsigned __int8)(HIDWORD(SecurityContext->SecurityQos) >> 9) << 7);
    if ( (unsigned int)RaUnitIsSMRDisabled(a1) )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    RaidUnitPoFxIdleComponent(a1, 0, 0, v39);
    v12 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v12);
}
