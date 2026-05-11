/*
 * XREFs of PinBuildDescriptors @ 0x1C003BE74
 * Callers:
 *     FilterCreateFilterContext @ 0x1C002BCD4 (FilterCreateFilterContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     PinGetDataFlow @ 0x1C002A0F4 (PinGetDataFlow.c)
 *     PinConflictingFormats @ 0x1C002C13C (PinConflictingFormats.c)
 *     PinGetCategoryForBridgePin @ 0x1C002C1AC (PinGetCategoryForBridgePin.c)
 *     PinGetTerminalUnit @ 0x1C003C494 (PinGetTerminalUnit.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, char **a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  __int64 v7; // r12
  unsigned int v8; // edi
  __int64 *v9; // rax
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  __int64 v12; // r14
  unsigned int v13; // esi
  int v14; // eax
  signed int DataFlow; // ebx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // rdi
  unsigned int v25; // eax
  char *Pool2; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r11
  __int64 v30; // r14
  char *v31; // r9
  __int64 v32; // r13
  char *v33; // rdi
  char *v34; // rsi
  __int64 TerminalUnit; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r9
  __int64 v38; // r10
  bool v39; // r12
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rcx
  bool v43; // al
  __int64 v44; // rdx
  _DWORD *v45; // r11
  bool v46; // zf
  int v47; // edx
  __int64 v48; // r8
  const GUID *v49; // r9
  int v50; // r10d
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // r15d
  unsigned int v54; // edi
  __int64 v55; // r13
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // r9
  char v62; // r10
  __int64 v63; // r11
  char v64; // dl
  int v65; // eax
  _UNKNOWN **v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r11
  unsigned int v70; // [rsp+50h] [rbp-39h] BYREF
  int v71; // [rsp+54h] [rbp-35h] BYREF
  unsigned __int64 v72; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v73; // [rsp+60h] [rbp-29h] BYREF
  char *v74; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v75; // [rsp+70h] [rbp-19h]
  __int64 v76; // [rsp+78h] [rbp-11h]
  char *v77; // [rsp+80h] [rbp-9h]
  char *v78; // [rsp+88h] [rbp-1h]
  char *v79; // [rsp+90h] [rbp+7h]
  __int64 v80; // [rsp+98h] [rbp+Fh]
  unsigned int v83; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v84; // [rsp+108h] [rbp+7Fh] BYREF

  v80 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v71 = 0;
  v5 = 0;
  v83 = 0;
  v6 = 0;
  v7 = v80 + 80;
  v70 = 0;
  v84 = 0;
  v8 = 0;
  v9 = *(__int64 **)(v80 + 80);
  v10 = 0;
  v76 = v80 + 80;
  v11 = 0;
  v75 = 0;
  if ( v9 != (__int64 *)(v80 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v9 + 5) <= 1u )
      {
        if ( *((_BYTE *)v9 + 72) )
          ++v10;
        else
          ++v11;
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != (__int64 *)v7 );
    v75 = v11;
  }
  v12 = v10 + v11;
  v13 = 0;
  *a3 = v12;
  *a4 = 176;
  if ( v10 )
  {
    do
    {
      LODWORD(v74) = 0;
      LODWORD(v72) = 0;
      LODWORD(v73) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, char **, unsigned __int64 *, unsigned __int64 *))(pExtBusDeviceDispatchTable + 72))(
              a1,
              v13,
              0LL,
              0LL,
              0LL,
              &v71,
              &v74,
              &v72,
              &v73);
      v5 = v83;
      v6 = v70;
      DataFlow = v14;
      v8 = v84;
      if ( v14 >= 0 )
      {
        v5 = (_DWORD)v74 + v83;
        v6 = v72 + v70;
        v8 = v73 + v84;
        v84 += v73;
        v83 += (unsigned int)v74;
        v70 += v72;
      }
      ++v13;
    }
    while ( v13 < v10 );
    v7 = v76;
    if ( v14 < 0 )
      return (unsigned int)DataFlow;
    v4 = v71;
  }
  v16 = 336 * v12;
  v17 = -1;
  if ( (unsigned __int64)(336 * v12) > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v18 = v5 * (unsigned __int64)(unsigned int)(v4 + 8);
  if ( v18 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v19 = v16 + v18;
  if ( v16 + (unsigned int)v18 < v16 )
    return (unsigned int)-1073741670;
  v20 = 8LL * v6;
  if ( v20 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v21 = v19 + v20;
  if ( v19 + (unsigned int)v20 < v19 )
    return (unsigned int)-1073741670;
  v22 = 16LL * v8;
  if ( v22 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v23 = v21 + v22;
  if ( v21 + (unsigned int)v22 < v21 )
    return (unsigned int)-1073741670;
  v24 = 16LL * v11;
  if ( v24 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v25 = v23 + v24;
  if ( v23 + (unsigned int)v24 >= v23 )
    v17 = v23 + v24;
  DataFlow = v25 < v23 ? 0xC0000095 : 0;
  if ( v25 < v23 )
    return (unsigned int)-1073741670;
  Pool2 = (char *)ExAllocatePool2(64LL, v17, 1096972357LL);
  v79 = Pool2;
  if ( (*a2 = Pool2) == 0LL )
    return (unsigned int)-1073741670;
  v28 = 176 * v12;
  v29 = 160 * v12;
  v30 = 0LL;
  v31 = &Pool2[v28];
  v78 = v31;
  v77 = &v31[v29];
  v32 = (__int64)&v31[16 * v84 + v29 + v24];
  v72 = (unsigned __int64)&v31[v29 + v24];
  v73 = v32 + 8 * (v83 + (unsigned __int64)v70);
  if ( v10 )
  {
    v31 += 8;
    v33 = Pool2 + 32;
    v34 = v78;
    v74 = v31;
    do
    {
      if ( DataFlow < 0 )
        break;
      TerminalUnit = PinGetTerminalUnit(v7, (unsigned int)v30, v27, v31);
      v39 = TerminalUnit && *(_DWORD *)(TerminalUnit + 68) == 257 && *(_DWORD *)(TerminalUnit + 76) == 2;
      *((_QWORD *)v33 - 4) = &PinDispatch;
      if ( v39 )
      {
        *((_QWORD *)v33 - 3) = 0LL;
      }
      else
      {
        *((_QWORD *)v33 - 3) = &v34[48 * v30];
        *((_DWORD *)v37 - 2) = 5;
        *((_DWORD *)v37 - 1) = 72;
        *v37 = &off_1C001C080;
      }
      v40 = v73;
      *((_QWORD *)v33 - 1) = &PinInterface;
      *((_DWORD *)v33 - 4) = 1;
      *(_DWORD *)v33 = 1;
      *((_QWORD *)v33 + 1) = &PinMedium;
      DataFlow = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64, __int64, int *, unsigned int *, unsigned int *, unsigned int *))(pExtBusDeviceDispatchTable + 72))(
                   a1,
                   v36,
                   v32,
                   v40,
                   v38,
                   &v71,
                   &v83,
                   &v70,
                   &v84);
      if ( DataFlow >= 0 )
      {
        v41 = v72;
        *((_QWORD *)v33 + 17) = v72;
        *((_DWORD *)v33 + 32) = v84;
        v42 = 16LL * v84 + v41;
        *((_DWORD *)v33 + 4) = v83 + v70;
        *((_QWORD *)v33 + 3) = v32;
        v72 = v42;
        if ( v83 <= 1 )
        {
          v33[116] = 0;
          *((_DWORD *)v33 + 19) = 1;
          *((_DWORD *)v33 + 26) = 1;
        }
        else
        {
          *((_DWORD *)v33 + 26) = 1;
          v43 = PinConflictingFormats((__int64)(v33 - 16));
          v33[116] = v43;
          *((_DWORD *)v33 + 19) = v43 + 1;
        }
        *((_DWORD *)v33 + 20) = 0;
        *((_DWORD *)v33 + 27) = 0;
        v32 += 8LL * (v83 + v70);
        v73 += v71 * v83;
        DataFlow = PinGetDataFlow(v76, (unsigned int)v30, (__int64)(v33 + 32));
        if ( DataFlow >= 0 )
        {
          if ( v39 )
          {
            *((_QWORD *)v33 + 12) = PinMIDIDataFormatIntersection;
            v46 = *v45 == 1;
            *((_QWORD *)v33 + 5) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
            if ( v46 )
            {
              v47 = 2162690;
              v27 = 1LL;
            }
            else
            {
              v47 = 10;
              v27 = 3LL;
            }
            *((_DWORD *)v33 + 9) = v27;
            *((_DWORD *)v33 + 18) = v47;
          }
          else
          {
            *((_QWORD *)v33 + 12) = PinDataFormatIntersection;
            if ( *v45 == 1 )
            {
              v48 = 2162690LL;
              v49 = &KSCATEGORY_AUDIO;
              v50 = 1;
            }
            else
            {
              v48 = 65538LL;
              v49 = &PINNAME_VIDEO_CAPTURE;
              v50 = 3;
            }
            v51 = v76;
            DataFlow = -1073741275;
            *((_DWORD *)v33 + 9) = v50;
            *((_QWORD *)v33 + 5) = v49;
            *((_DWORD *)v33 + 18) = v48;
            v52 = PinGetTerminalUnit(v51, v44, v48, v49);
            if ( v52 )
            {
              DataFlow = 0;
              *((_DWORD *)v33 + 28) = *(_DWORD *)(v52 + 28);
            }
          }
          *((_QWORD *)v33 + 11) = &AllocatorFraming;
        }
      }
      v30 = (unsigned int)(v30 + 1);
      v7 = v76;
      v31 = v74 + 48;
      v33 += 176;
      v74 += 48;
    }
    while ( (unsigned int)v30 < v10 );
    Pool2 = v79;
  }
  v53 = v75;
  v54 = 0;
  if ( v75 )
  {
    v55 = v80;
    while ( DataFlow >= 0 )
    {
      PinGetTerminalUnit(v7, (unsigned int)v30, v27, v31);
      v56 = 176LL * (unsigned int)v30;
      *(_QWORD *)&Pool2[v56 + 136] = 0LL;
      v60 = PinGetTerminalUnit(v58, v57, v59, v56);
      v64 = 0;
      if ( v60 )
      {
        if ( *(_DWORD *)(v60 + 20) == 1 )
        {
          v65 = *(_DWORD *)(v60 + 68) - 1538;
          if ( !v65 || v65 == 3 )
            v64 = 1;
        }
      }
      Pool2[v61 + 149] = v64;
      *(_QWORD *)&Pool2[v61] = 0LL;
      *(_QWORD *)&Pool2[v61 + 8] = 0LL;
      *(_QWORD *)&Pool2[v61 + 108] = 0LL;
      *(_QWORD *)&Pool2[v61 + 24] = &PinInterface;
      *(_DWORD *)&Pool2[v61 + 16] = 1;
      *(_QWORD *)&Pool2[v61 + 40] = &PinMedium;
      v66 = &pMIDIBridgePinFormats;
      if ( !v62 )
        v66 = &pAudioBridgePinFormats;
      *(_DWORD *)&Pool2[v61 + 32] = 1;
      *(_QWORD *)&Pool2[v61 + 56] = v66;
      *(_DWORD *)&Pool2[v61 + 48] = 1;
      *(_QWORD *)&Pool2[v61 + 72] = 16LL * v54 + v63;
      *(_DWORD *)&Pool2[v61 + 68] = 4;
      DataFlow = PinGetDataFlow(v7, (unsigned int)v30, (__int64)&Pool2[v61 + 64]);
      if ( DataFlow >= 0 )
        PinGetCategoryForBridgePin(v55, v67, v68);
      ++v54;
      LODWORD(v30) = v30 + 1;
      if ( v54 >= v53 )
        goto LABEL_68;
    }
    goto LABEL_70;
  }
LABEL_68:
  if ( DataFlow < 0 || (DataFlow = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool), DataFlow < 0) )
LABEL_70:
    ExFreePool(Pool2);
  return (unsigned int)DataFlow;
}
