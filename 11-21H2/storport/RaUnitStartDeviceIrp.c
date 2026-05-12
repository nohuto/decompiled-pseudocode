/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1C0087C34
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     RaidIsUnitQueueLocked @ 0x1C001596C (RaidIsUnitQueueLocked.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019338 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x1C0019CF8 (_tlgCreate1Sz_char.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 *     RaidUnitRegisterInterfaces @ 0x1C001EEC0 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C001F4BC (RaidUnitGetPowerCycleCount.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C001F5A4 (RaidUnitGetInitialTimestamp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RaidGetD3ColdInterface @ 0x1C002026C (RaidGetD3ColdInterface.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0020454 (RaidUnitConvertToNormalUnit.c)
 *     RaidUnitRestartQueue @ 0x1C0020478 (RaidUnitRestartQueue.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidGetD3ColdCapability @ 0x1C00491BC (RaidGetD3ColdCapability.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0088000 (RaidUnitGetDeviceParameters.c)
 *     RaUnitInitializeWMI @ 0x1C0088328 (RaUnitInitializeWMI.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v8; // cl
  _BYTE *v9; // rcx
  char v10; // al
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  char D3ColdCapability; // al
  char v16; // cl
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+31h] [rbp-CFh] BYREF
  char v19; // [rsp+32h] [rbp-CEh] BYREF
  char v20; // [rsp+33h] [rbp-CDh] BYREF
  char v21; // [rsp+34h] [rbp-CCh] BYREF
  char v22; // [rsp+35h] [rbp-CBh] BYREF
  char v23; // [rsp+36h] [rbp-CAh] BYREF
  char v24; // [rsp+37h] [rbp-C9h] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  int *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  char *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  char *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  char *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  _BYTE v46[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v47[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v48[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v49[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v50[16]; // [rsp+130h] [rbp+30h] BYREF
  char *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  char *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  char *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  char *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  char *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  __int128 *v61; // [rsp+190h] [rbp+90h]
  __int64 v62; // [rsp+198h] [rbp+98h]
  int *v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1A8h] [rbp+A8h]
  int *v65; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h]
  int *v67; // [rsp+1C0h] [rbp+C0h]
  __int64 v68; // [rsp+1C8h] [rbp+C8h]
  int *v69; // [rsp+1D0h] [rbp+D0h]
  __int64 v70; // [rsp+1D8h] [rbp+D8h]
  int *v71; // [rsp+1E0h] [rbp+E0h]
  __int64 v72; // [rsp+1E8h] [rbp+E8h]
  int *v73; // [rsp+1F0h] [rbp+F0h]
  __int64 v74; // [rsp+1F8h] [rbp+F8h]

  if ( *(_DWORD *)(a1 + 48) != 1 )
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
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1752)) >= 0 && *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 1824) & 8) != 0
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1752)), v16 = 2, !D3ColdCapability) )
      {
        v16 = 0;
      }
      *(_BYTE *)(a1 + 449) = v16 | *(_BYTE *)(a1 + 449) & 0xFD;
    }
    else
    {
      *(_BYTE *)(a1 + 449) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
    {
      v5 = *(_QWORD *)(a1 + 24);
      v32 = 0LL;
      LOWORD(v32) = 1;
      WORD1(v32) = *(_WORD *)(v5 + 56);
      WORD4(v32) = *(_WORD *)(a1 + 96);
      BYTE10(v32) = *(_BYTE *)(a1 + 98);
      DWORD1(v32) = 4;
      RaCallMiniportUnitControl(v5 + 336);
    }
    *(_BYTE *)(a1 + 449) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  *(_QWORD *)(a1 + 3280) = 0x10000000LL;
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  if ( *(_QWORD *)(a1 + 104) && (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn(v6, 0x400000000000LL) )
  {
    v7 = *(_QWORD *)(a1 + 24);
    v35 = 16LL;
    v37 = 16LL;
    v34 = v7 + 4936;
    v36 = a1 + 1976;
    v25 = *(_DWORD *)(v7 + 56);
    v38 = &v25;
    v17 = *(_BYTE *)(a1 + 96);
    v40 = &v17;
    v18 = *(_BYTE *)(a1 + 97);
    v42 = &v18;
    v19 = *(_BYTE *)(a1 + 98);
    v44 = &v19;
    v39 = 4LL;
    v41 = 1LL;
    v43 = 1LL;
    v45 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v46, *(_WORD **)(v7 + 4592));
    tlgCreate1Sz_char((__int64)v47, (_BYTE *)(a1 + 160));
    tlgCreate1Sz_char((__int64)v48, (_BYTE *)(a1 + 169));
    tlgCreate1Sz_char((__int64)v49, (_BYTE *)(a1 + 442));
    tlgCreate1Sz_char((__int64)v50, (_BYTE *)(a1 + 186));
    v8 = *(_BYTE *)(a1 + 128);
    v51 = &v20;
    v20 = v8 & 1;
    v9 = *(_BYTE **)(a1 + 104);
    v52 = 1LL;
    v10 = *v9 & 0x1F;
    v54 = 1LL;
    v21 = v10;
    v53 = &v21;
    v22 = *v9 >> 5;
    v55 = &v22;
    v56 = 1LL;
    v11 = v9[1] & 0x7F;
    v58 = 1LL;
    v23 = v11;
    v57 = &v23;
    v24 = v9[1] >> 7;
    v59 = &v24;
    *(_QWORD *)&v32 = *(_QWORD *)(a1 + 3224);
    v61 = &v32;
    v26 = *(_DWORD *)(a1 + 3216);
    v60 = 1LL;
    v62 = 8LL;
    v63 = &v26;
    v27 = *(_DWORD *)(a1 + 1800);
    v65 = &v27;
    v28 = *(_DWORD *)(a1 + 1804);
    v67 = &v28;
    v29 = *(_DWORD *)(a1 + 1808);
    v69 = &v29;
    v30 = *(_DWORD *)(a1 + 1812);
    v71 = &v30;
    v31 = *(_DWORD *)(a1 + 1820);
    v73 = &v31;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)v9, (unsigned __int8 *)dword_1C006CC90, v12, v13, 0x19u, &v33);
  }
  return RaidCompleteRequestEx(a2, 0, 0);
}
