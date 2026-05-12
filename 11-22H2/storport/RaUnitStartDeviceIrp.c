/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1C00A15D8
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidIsUnitControlSupported @ 0x1C00046D0 (RaidIsUnitControlSupported.c)
 *     RaidIsUnitQueueLocked @ 0x1C000F7A4 (RaidIsUnitQueueLocked.c)
 *     RaCallMiniportUnitControl @ 0x1C0017914 (RaCallMiniportUnitControl.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019D9C (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x1C0019DF8 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001C770 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C001D480 (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C001D560 (RaidUnitGetPowerCycleCount.c)
 *     RaidGetD3ColdInterface @ 0x1C0020144 (RaidGetD3ColdInterface.c)
 *     RaidUnitRegisterInterfaces @ 0x1C00204CC (RaidUnitRegisterInterfaces.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0022014 (RaidUnitConvertToNormalUnit.c)
 *     RaidUnitRestartQueue @ 0x1C002205C (RaidUnitRestartQueue.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaidGetD3ColdCapability @ 0x1C004C21C (RaidGetD3ColdCapability.c)
 *     RaUnitInitializeWMI @ 0x1C00A19C0 (RaUnitInitializeWMI.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00A30B8 (RaidUnitGetDeviceParameters.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // cl
  _BYTE *v10; // rcx
  char v11; // al
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  char D3ColdCapability; // al
  char v17; // cl
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+31h] [rbp-CFh] BYREF
  char v20; // [rsp+32h] [rbp-CEh] BYREF
  char v21; // [rsp+33h] [rbp-CDh] BYREF
  char v22; // [rsp+34h] [rbp-CCh] BYREF
  char v23; // [rsp+35h] [rbp-CBh] BYREF
  char v24; // [rsp+36h] [rbp-CAh] BYREF
  char v25; // [rsp+37h] [rbp-C9h] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _BYTE v47[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v48[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v49[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v50[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v51[16]; // [rsp+130h] [rbp+30h] BYREF
  char *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  char *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  char *v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  char *v58; // [rsp+170h] [rbp+70h]
  __int64 v59; // [rsp+178h] [rbp+78h]
  char *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  __int128 *v62; // [rsp+190h] [rbp+90h]
  __int64 v63; // [rsp+198h] [rbp+98h]
  int *v64; // [rsp+1A0h] [rbp+A0h]
  __int64 v65; // [rsp+1A8h] [rbp+A8h]
  int *v66; // [rsp+1B0h] [rbp+B0h]
  __int64 v67; // [rsp+1B8h] [rbp+B8h]
  int *v68; // [rsp+1C0h] [rbp+C0h]
  __int64 v69; // [rsp+1C8h] [rbp+C8h]
  int *v70; // [rsp+1D0h] [rbp+D0h]
  __int64 v71; // [rsp+1D8h] [rbp+D8h]
  int *v72; // [rsp+1E0h] [rbp+E0h]
  __int64 v73; // [rsp+1E8h] [rbp+E8h]
  int *v74; // [rsp+1F0h] [rbp+F0h]
  __int64 v75; // [rsp+1F8h] [rbp+F8h]

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v5 = (__int64 *)(a1 + 24);
  }
  else
  {
    RaUnitInitializeWMI();
    RaidUnitRegisterInterfaces(a1);
    if ( (unsigned int)RaidIsUnitQueueLocked(a1) )
    {
      *(_BYTE *)(a1 + 693) = 0;
      RaidUnitRestartQueue(v4, 0);
    }
    *(_DWORD *)(a1 + 48) = 1;
    RaidUnitConvertToNormalUnit(a1);
    v5 = (__int64 *)(a1 + 24);
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1800)) >= 0 && *v5 )
    {
      if ( (*(_DWORD *)(a1 + 1872) & 8) != 0
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1800)), v17 = 2, !D3ColdCapability) )
      {
        v17 = 0;
      }
      *(_BYTE *)(a1 + 449) = v17 | *(_BYTE *)(a1 + 449) & 0xFD;
    }
    else
    {
      *(_BYTE *)(a1 + 449) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
    {
      v6 = *v5;
      v33 = 0LL;
      LOWORD(v33) = 1;
      WORD1(v33) = *(_WORD *)(v6 + 56);
      WORD4(v33) = *(_WORD *)(a1 + 96);
      BYTE10(v33) = *(_BYTE *)(a1 + 98);
      DWORD1(v33) = 4;
      RaCallMiniportUnitControl(v6 + 336);
    }
    *(_BYTE *)(a1 + 449) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  *(_QWORD *)(a1 + 3328) = 0x10000000LL;
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  if ( *(_QWORD *)(a1 + 104) && (unsigned int)dword_1C00920C8 > 5 && tlgKeywordOn(v7, 0x400000000000LL) )
  {
    v8 = *v5;
    v36 = 16LL;
    v38 = 16LL;
    v35 = v8 + 5000;
    v37 = a1 + 2024;
    v26 = *(_DWORD *)(v8 + 56);
    v39 = &v26;
    v18 = *(_BYTE *)(a1 + 96);
    v41 = &v18;
    v19 = *(_BYTE *)(a1 + 97);
    v43 = &v19;
    v20 = *(_BYTE *)(a1 + 98);
    v45 = &v20;
    v40 = 4LL;
    v42 = 1LL;
    v44 = 1LL;
    v46 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v47, *(_WORD **)(v8 + 4656));
    tlgCreate1Sz_char((__int64)v48, (_BYTE *)(a1 + 160));
    tlgCreate1Sz_char((__int64)v49, (_BYTE *)(a1 + 169));
    tlgCreate1Sz_char((__int64)v50, (_BYTE *)(a1 + 442));
    tlgCreate1Sz_char((__int64)v51, (_BYTE *)(a1 + 186));
    v9 = *(_BYTE *)(a1 + 128);
    v52 = &v21;
    v21 = v9 & 1;
    v10 = *(_BYTE **)(a1 + 104);
    v53 = 1LL;
    v11 = *v10 & 0x1F;
    v55 = 1LL;
    v22 = v11;
    v54 = &v22;
    v23 = *v10 >> 5;
    v56 = &v23;
    v57 = 1LL;
    v12 = v10[1] & 0x7F;
    v59 = 1LL;
    v24 = v12;
    v58 = &v24;
    v25 = v10[1] >> 7;
    v60 = &v25;
    *(_QWORD *)&v33 = *(_QWORD *)(a1 + 3272);
    v62 = &v33;
    v27 = *(_DWORD *)(a1 + 3264);
    v61 = 1LL;
    v63 = 8LL;
    v64 = &v27;
    v28 = *(_DWORD *)(a1 + 1848);
    v66 = &v28;
    v29 = *(_DWORD *)(a1 + 1852);
    v68 = &v29;
    v30 = *(_DWORD *)(a1 + 1856);
    v70 = &v30;
    v31 = *(_DWORD *)(a1 + 1860);
    v72 = &v31;
    v32 = *(_DWORD *)(a1 + 1868);
    v74 = &v32;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)v10, (unsigned __int8 *)dword_1C0083E40, v13, v14, 0x19u, &v34);
  }
  return RaidCompleteRequestEx(a2, 0, 0);
}
