/*
 * XREFs of sub_1C00A1C44 @ 0x1C00A1C44
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008990 @ 0x1C0008990 (sub_1C0008990.c)
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     sub_1C001A3AC @ 0x1C001A3AC (sub_1C001A3AC.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C00633B0 @ 0x1C00633B0 (sub_1C00633B0.c)
 *     sub_1C00A2018 @ 0x1C00A2018 (sub_1C00A2018.c)
 *     sub_1C00A25D0 @ 0x1C00A25D0 (sub_1C00A25D0.c)
 */

__int64 __fastcall sub_1C00A1C44(__int64 a1, IRP *a2)
{
  bool v4; // zf
  int v5; // eax
  PIO_SECURITY_CONTEXT SecurityContext; // rbx
  __int64 v7; // r14
  _DWORD *v8; // rsi
  __int64 v9; // r8
  int v10; // r9d
  int v11; // edx
  char v12; // dl
  __int64 v13; // rcx
  unsigned int v14; // r8d
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rax
  int AccessState; // eax
  int SecurityQos_high; // r8d
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  int v41; // edx
  _BYTE v42[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD Dst[4]; // [rsp+40h] [rbp-78h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  v4 = *(_QWORD *)(a1 + 24) == 0LL;
  v42[0] = 0;
  if ( v4 || (v5 = *(_DWORD *)(a1 + 48)) == 0 || (unsigned int)(v5 - 5) <= 1 )
  {
    a2->IoStatus.Information = 0LL;
    v14 = -1073741810;
  }
  else
  {
    sub_1C0008A7C(a1, 0, 1LL, v42);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    v7 = 4 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 4 | 2u);
    v8 = (_DWORD *)sub_1C0007CF4(64LL, v7, 1918067026LL, *(_QWORD *)(a1 + 8));
    sub_1C00A2018(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), Dst);
    v9 = 128LL;
    *(_OWORD *)&SecurityContext->SecurityQos = Dst[0];
    v10 = 256;
    *(_OWORD *)&SecurityContext->DesiredAccess = Dst[1];
    *(_OWORD *)&SecurityContext[1].AccessState = Dst[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = Dst[3];
    v11 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v11;
    if ( (*(_DWORD *)(a1 + 1872) & 0x20) != 0 || *(_BYTE *)(sub_1C00A25D0(**(_BYTE **)(a1 + 104) & 0x1F) + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v9 | v11;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96));
    if ( v8 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 4) != 0 )
      {
        v16 = v8[1];
        *v8 = 1572865;
        v17 = v16 ^ (v16 ^ HIDWORD(SecurityContext->SecurityQos)) & 1;
        v8[1] = v17;
        v18 = v17 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v17) & 2;
        v8[1] = v18;
        v19 = v18 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v18) & 4;
        v8[1] = v19;
        v20 = v19 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v19) & 8;
        v8[1] = v20;
        v21 = v20 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v20) & 0x10;
        v8[1] = v21;
        v22 = v21 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v21) & 0x20;
        v8[1] = v22;
        v23 = v22 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v22) & 0x40;
        v8[1] = v23;
        v24 = v23 ^ v9 & (HIDWORD(SecurityContext->SecurityQos) ^ v23);
        v8[1] = v24;
        v25 = v24 ^ v10 & (HIDWORD(SecurityContext->SecurityQos) ^ v24);
        v8[1] = v25;
        v26 = v25 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v25) & 0x200;
        v8[1] = v26;
        v27 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        v8[1] = v27;
        v8[3] = HIDWORD(SecurityContext->AccessState);
        v28 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v28 + 4683) == 1 && *(_BYTE *)(v28 + 4682) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 96) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        v8[2] = AccessState;
        v8[1] = v27 & 0xFFFFF7FF;
      }
      if ( (int)sub_1C001A4C0(*(_QWORD *)(a1 + 8), 9u, v9, (__int64)v8, v7) >= 0 )
      {
        SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
        v31 = SecurityQos_high ^ v8[1];
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 4) != 0 )
        {
          v32 = SecurityQos_high ^ v31 & 1;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          v33 = (v8[1] ^ v32) & 2 ^ v32;
          HIDWORD(SecurityContext->SecurityQos) = v33;
          v34 = (v8[1] ^ v33) & 4 ^ v33;
          HIDWORD(SecurityContext->SecurityQos) = v34;
          v35 = (v8[1] ^ v34) & 8 ^ v34;
          HIDWORD(SecurityContext->SecurityQos) = v35;
          v36 = (v8[1] ^ v35) & 0x10 ^ v35;
          HIDWORD(SecurityContext->SecurityQos) = v36;
          v37 = (v8[1] ^ v36) & 0x20 ^ v36;
          HIDWORD(SecurityContext->SecurityQos) = v37;
          v38 = (v8[1] ^ v37) & 0x40 ^ v37;
          HIDWORD(SecurityContext->SecurityQos) = v38;
          v39 = (v8[1] ^ v38) & 0x80 ^ v38;
          HIDWORD(SecurityContext->SecurityQos) = v39;
          v40 = (v8[1] ^ v39) & 0x100 ^ v39;
          HIDWORD(SecurityContext->SecurityQos) = v40;
          v41 = (v8[1] ^ v40) & 0x200 ^ v40;
          HIDWORD(SecurityContext->SecurityQos) = v41;
          HIDWORD(SecurityContext->SecurityQos) = v41 ^ (v41 ^ (v8[1] << 7)) & 0x20000;
          HIDWORD(SecurityContext->AccessState) = v8[3];
          LODWORD(SecurityContext->AccessState) = v8[2];
          if ( (v8[1] & 0x800) != 0 )
          {
            *(_DWORD *)(a1 + 1872) |= 0x10u;
            sub_1C00633B0(a1);
          }
        }
        else
        {
          HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high ^ v31 & 0x10;
        }
      }
      ExFreePoolWithTag(v8, 0x72536152u);
    }
    if ( byte_1C00933F4 )
      HIDWORD(SecurityContext->SecurityQos) &= ~0x40u;
    v12 = *(_BYTE *)(a1 + 450) ^ (*(_BYTE *)(a1 + 450) ^ ((unsigned __int8)(HIDWORD(SecurityContext->SecurityQos) >> 4) << 6)) & 0x40;
    *(_BYTE *)(a1 + 450) = v12;
    *(_BYTE *)(a1 + 450) = v12 & 0x7F | ((unsigned __int8)(HIDWORD(SecurityContext->SecurityQos) >> 9) << 7);
    if ( (unsigned int)sub_1C001A3AC(a1) )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    sub_1C0008990(v13, 0, 0, v42);
    v14 = 0;
  }
  return sub_1C0003440(a2, 0, v14);
}
