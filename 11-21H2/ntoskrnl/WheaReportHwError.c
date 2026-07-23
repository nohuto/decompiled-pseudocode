/*
 * XREFs of WheaReportHwError @ 0x140643630
 * Callers:
 *     sub_14021294C @ 0x14021294C (sub_14021294C.c)
 *     sub_14050745C @ 0x14050745C (sub_14050745C.c)
 *     HalHandleNMI @ 0x14050A180 (HalHandleNMI.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     sub_1403C0934 @ 0x1403C0934 (sub_1403C0934.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     WheaIsCriticalState @ 0x1403D2BA0 (WheaIsCriticalState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     WheaRecoveryBugCheck @ 0x1406435C0 (WheaRecoveryBugCheck.c)
 *     sub_140643AFC @ 0x140643AFC (sub_140643AFC.c)
 *     sub_140643B40 @ 0x140643B40 (sub_140643B40.c)
 *     sub_140643BBC @ 0x140643BBC (sub_140643BBC.c)
 *     sub_140643D54 @ 0x140643D54 (sub_140643D54.c)
 *     sub_140643DCC @ 0x140643DCC (sub_140643DCC.c)
 *     sub_140643F08 @ 0x140643F08 (sub_140643F08.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 *     sub_140643FCC @ 0x140643FCC (sub_140643FCC.c)
 *     sub_140645F80 @ 0x140645F80 (sub_140645F80.c)
 *     sub_140646270 @ 0x140646270 (sub_140646270.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  int v1; // r11d
  unsigned int v2; // ebx
  char v4; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r11d
  __int64 v11; // r15
  _DWORD *v12; // rcx
  __int64 v13; // rax
  char *v14; // r14
  int v15; // eax
  int v16; // edx
  char v17; // [rsp+30h] [rbp-39h]
  int v18; // [rsp+34h] [rbp-35h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-31h]
  __int64 v20; // [rsp+40h] [rbp-29h]
  unsigned __int64 v21; // [rsp+48h] [rbp-21h]
  _DWORD Src[6]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  _DWORD v24[10]; // [rsp+70h] [rbp+7h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  v2 = 0;
  v18 = 0;
  v17 = 0;
  v21 = 0LL;
  v4 = 0;
  if ( (v1 & 0xC0000000) == 0xC0000000 )
    return 3221225485LL;
  if ( (v1 & 0x40000000) != 0 )
  {
    v17 = 1;
    v1 &= ~0x40000000u;
    v21 = (*(unsigned int *)(a1 + 8) + a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_7:
    *(_DWORD *)(a1 + 20) = v1;
    goto LABEL_8;
  }
  if ( v1 < 0 )
  {
    v1 &= ~0x80000000;
    v4 = 1;
    goto LABEL_7;
  }
LABEL_8:
  if ( v1 == 3 && !v4 )
    return 0LL;
  v6 = *(_QWORD *)&KeGetPcr()[92].Unused2;
  v20 = v6;
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 8)) == 0 || !*(_DWORD *)(v7 + 4) )
  {
    if ( (unsigned int)v1 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    Src[0] = 1733060695;
    v12 = Src;
    Src[1] = 1;
    Src[2] = 32;
    Src[3] = 1;
    Src[5] = -2147483594;
    Src[4] = 1280201291;
    v23 = 2LL;
    goto LABEL_75;
  }
  v8 = sub_140643F2C(v7, *(unsigned int *)(a1 + 24));
  v11 = v8;
  if ( !v8 )
  {
    if ( v10 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v9, 0LL);
    return 3221225664LL;
  }
  _InterlockedAdd((volatile signed __int32 *)(v8 + 24), 1u);
  if ( *(_DWORD *)(a1 + 20) == 2 && (unsigned __int8)sub_140643BBC(v8) )
  {
    v12 = v24;
    v24[8] = *(_DWORD *)(a1 + 28);
    v24[9] = *(_DWORD *)(a1 + 24);
    v24[0] = 1733060695;
    v24[1] = 1;
    v24[2] = 40;
    v24[3] = 1;
    v24[5] = -2147483644;
    v24[4] = 1280201291;
    v24[6] = 2;
    v24[7] = 8;
LABEL_75:
    WheaLogInternalEvent(v12);
    return 0LL;
  }
  v13 = sub_140643B40(v11, &v18);
  v14 = (char *)v13;
  if ( !v13 )
  {
    ++*(_DWORD *)(v11 + 16);
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
      KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
    return 3221225626LL;
  }
  *(_DWORD *)(v13 + 24) ^= (*(_DWORD *)(v13 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 4;
  *(_DWORD *)(v13 + 24) ^= ((unsigned __int8)*(_DWORD *)(v13 + 24) ^ (unsigned __int8)(*(_DWORD *)(a1 + 12) >> 2)) & 8;
  if ( sub_1403C0934(v11, 2, 0) )
    v15 = sub_14042A5E0(v11 + 96, a1);
  else
    v15 = -1073741822;
  v19 = v15;
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 92));
  if ( v15 >= 0 )
  {
    if ( v4 || v17 )
      *((_DWORD *)v14 + 36) |= 8u;
    if ( (*((_DWORD *)v14 + 36) & 2) != 0 )
    {
      if ( (*((_DWORD *)v14 + 6) & 1) != 0 && !WheaIsCriticalState() )
      {
        if ( dword_140C10AF8 != 1 )
        {
LABEL_45:
          sub_140643F08(v14);
          return v2;
        }
LABEL_44:
        sub_140645F80(v14 + 40);
        goto LABEL_45;
      }
LABEL_68:
      sub_140646270(*(_QWORD *)(v20 + 16), v14);
      return v2;
    }
    if ( !byte_140C0DA84 && !v4 )
    {
      sub_140643DCC(0LL, v14 + 40);
      if ( (int)PshedWriteErrorRecord(1LL, *((unsigned int *)v14 + 15), v14 + 40) < 0 )
        byte_140C0DA84 = 1;
    }
    v16 = *(_DWORD *)(a1 + 20);
    if ( v16 == 1 )
    {
      if ( !v4 )
      {
        PshedFinalizeErrorRecord(v14 + 40, v11 + 96);
        sub_140643FCC(v14 + 40);
        sub_140643DCC(3LL, v14 + 40);
        PshedWriteErrorRecord(0LL, *((unsigned int *)v14 + 15), v14 + 40);
        sub_140643AFC(v14 + 40, *((unsigned int *)v14 + 15));
        if ( v17 )
          KeBugCheckEx(0x124u, *(int *)(v11 + 104), (ULONG_PTR)(v14 + 40), *(_QWORD *)(v21 + 72), *(_QWORD *)(v21 + 80));
        PshedBugCheckSystem(v11 + 96, v14 + 40);
        return v2;
      }
    }
    else if ( (unsigned int)(v16 - 2) > 1 )
    {
      if ( v16 )
      {
        sub_140643F08(v14);
        return (unsigned int)-1073741811;
      }
      PshedFinalizeErrorRecord(v14 + 40, v11 + 96);
      sub_140643D54(v14 + 40);
      if ( *((_DWORD *)v14 + 13) == 2 )
      {
        *((_DWORD *)v14 + 36) |= 1u;
      }
      else if ( !v4 )
      {
        WheaRecoveryBugCheck((__int64)(v14 + 40), v11 + 96);
        return v2;
      }
      if ( (*((_DWORD *)v14 + 6) & 1) != 0 && dword_140C10AF8 == 1 && !WheaIsCriticalState() && v14[144] >= 0 )
        goto LABEL_44;
      goto LABEL_68;
    }
    PshedFinalizeErrorRecord(v14 + 40, v11 + 96);
    goto LABEL_68;
  }
  if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 && !v4 )
    KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
  sub_140643F08(v14);
  return v19;
}
