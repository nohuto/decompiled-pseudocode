/*
 * XREFs of PinBuildDescriptors @ 0x1C002A4A4
 * Callers:
 *     FilterCreateFilterFactory @ 0x1C0029ED4 (FilterCreateFilterFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, __int64 *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // edi
  unsigned int v6; // r10d
  __int64 *v7; // r15
  unsigned int v8; // r11d
  __int64 *v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  unsigned int v13; // r14d
  unsigned int v14; // esi
  int v15; // eax
  NTSTATUS v16; // edi
  __int64 v17; // rsi
  unsigned int v18; // ecx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned int v21; // r9d
  unsigned __int64 v22; // rax
  unsigned int v23; // r8d
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 Pool2; // rax
  char *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned int v32; // esi
  unsigned __int64 v33; // r12
  __int64 *v34; // rdx
  char *v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rax
  char v38; // cl
  __int64 v39; // rcx
  bool v40; // si
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  unsigned int v43; // r11d
  bool v44; // r8
  __int64 v45; // r10
  __int64 i; // rdx
  __int64 v47; // r9
  __int64 v48; // rcx
  unsigned int v49; // edx
  __int64 v50; // rax
  char v51; // cl
  __int64 v52; // rcx
  int v53; // ecx
  __int64 v54; // rax
  char v55; // cl
  __int64 v56; // rcx
  unsigned int v57; // ebx
  unsigned int v58; // r11d
  __int64 v59; // r12
  __int64 v60; // r13
  __int64 v61; // rax
  char v62; // cl
  char v63; // cl
  bool v64; // r10
  __int64 v65; // r8
  char v66; // cl
  __int64 v67; // rax
  char v68; // r9
  __int64 v69; // rcx
  _UNKNOWN **v70; // rax
  __int64 v71; // rdx
  char v72; // cl
  __int64 v73; // rax
  char v74; // cl
  char v75; // cl
  __int64 v76; // rax
  bool v77; // cf
  unsigned __int16 *v78; // rcx
  __int64 v79; // r9
  __int64 v80; // r8
  int v81; // ecx
  GUID v82; // xmm0
  int v83; // eax
  GUID v84; // xmm0
  unsigned int v86; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v87; // [rsp+54h] [rbp-25h]
  int v88; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v89; // [rsp+5Ch] [rbp-1Dh]
  unsigned __int64 v90; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v91; // [rsp+68h] [rbp-11h] BYREF
  __int64 *v92; // [rsp+70h] [rbp-9h]
  __int64 v93; // [rsp+78h] [rbp-1h]
  char *v94; // [rsp+80h] [rbp+7h]
  __int64 v95; // [rsp+88h] [rbp+Fh]
  __int64 v96; // [rsp+90h] [rbp+17h]
  unsigned int v98; // [rsp+F0h] [rbp+77h]
  unsigned int v99; // [rsp+F8h] [rbp+7Fh]

  v96 = *(_QWORD *)(a1 + 16);
  v88 = 0;
  v5 = 0;
  v98 = 0;
  v6 = 0;
  v7 = (__int64 *)(v96 + 80);
  v87 = 0;
  v99 = 0;
  v8 = 0;
  v9 = *(__int64 **)(v96 + 80);
  v10 = 0;
  v92 = (__int64 *)(v96 + 80);
  v11 = 0;
  v89 = 0;
  v12 = 0;
  if ( v9 != (__int64 *)(v96 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v9 + 5) <= 1u )
      {
        if ( *((_BYTE *)v9 + 72) )
          ++v11;
        else
          ++v12;
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != v7 );
    v89 = v12;
  }
  v13 = v12 + v11;
  v14 = 0;
  *a3 = v12 + v11;
  *a4 = 176;
  if ( v11 )
  {
    do
    {
      v86 = 0;
      LODWORD(v90) = 0;
      LODWORD(v91) = 0;
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, unsigned int *, unsigned __int64 *, unsigned __int64 *))(pExtBusDeviceDispatchTable + 72))(
              a1,
              v14,
              0LL,
              0LL,
              0LL,
              &v88,
              &v86,
              &v90,
              &v91);
      v6 = v98;
      v8 = v87;
      v16 = v15;
      v10 = v99;
      if ( v15 >= 0 )
      {
        v6 = v86 + v98;
        v8 = v90 + v87;
        v10 = v91 + v99;
        v99 += v91;
        v98 += v86;
        v87 += v90;
      }
      ++v14;
    }
    while ( v14 < v11 );
    v7 = v92;
    if ( v15 < 0 )
      return (unsigned int)v16;
    v5 = v88;
  }
  v17 = v13;
  v18 = -1;
  v19 = 336LL * v13;
  if ( v19 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v20 = v6 * (unsigned __int64)(unsigned int)(v5 + 8);
  if ( v20 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v21 = v20 + v19;
  if ( (int)v20 + (int)v19 < (unsigned int)v19 )
    return (unsigned int)-1073741670;
  v22 = 8LL * v8;
  if ( v22 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v23 = v22 + v21;
  if ( (unsigned int)v22 + v21 < v21 )
    return (unsigned int)-1073741670;
  v24 = 16LL * v10;
  if ( v24 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v25 = v24 + v23;
  if ( (unsigned int)v24 + v23 < v23 )
    return (unsigned int)-1073741670;
  v26 = 16LL * v89;
  if ( v26 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v27 = v26 + v25;
  if ( (unsigned int)v26 + v25 >= v25 )
    v18 = v26 + v25;
  v16 = v27 < v25 ? 0xC0000095 : 0;
  if ( v27 >= v25
    && (Pool2 = ExAllocatePool2(64LL, v18, 1096972357LL), v94 = (char *)Pool2, v29 = (char *)Pool2, (*a2 = Pool2) != 0) )
  {
    v30 = Pool2 + 176 * v17;
    v31 = 160 * v17;
    v32 = 0;
    v93 = v30;
    v95 = v30 + v31;
    v86 = 0;
    v90 = v26 + v30 + v31;
    v33 = v90 + 16LL * v99;
    v91 = v33 + 8 * (v98 + (unsigned __int64)v87);
    if ( v11 )
    {
      v34 = (__int64 *)(v30 + 8);
      v35 = v29 + 68;
      v36 = v93;
      v92 = v34;
      do
      {
        if ( v16 < 0 )
          break;
        v37 = *v7;
        v38 = 0;
        while ( (__int64 *)v37 != v7 && !v38 )
        {
          if ( *(_DWORD *)(v37 + 20) < 2u && *(_DWORD *)(v37 + 64) == v32 )
            v38 = 1;
          else
            v37 = *(_QWORD *)v37;
        }
        v39 = v37 & -(__int64)(v38 != 0);
        v40 = v39 && *(_DWORD *)(v39 + 68) == 257 && *(_DWORD *)(v39 + 76) == 2;
        *(_QWORD *)(v35 - 68) = &PinDispatch;
        if ( v40 )
        {
          *(_QWORD *)(v35 - 60) = 0LL;
        }
        else
        {
          *(_QWORD *)(v35 - 60) = v36 + 48LL * v86;
          *((_DWORD *)v34 - 2) = 5;
          *((_DWORD *)v34 - 1) = 72;
          *v34 = (__int64)&off_1C001B240;
        }
        v41 = v86;
        *((_DWORD *)v35 - 13) = 1;
        *(_QWORD *)(v35 - 44) = &PinInterface;
        *((_DWORD *)v35 - 9) = 1;
        *(_QWORD *)(v35 - 28) = &PinMedium;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(pExtBusDeviceDispatchTable + 72))(
                a1,
                v41,
                v33);
        if ( v16 >= 0 )
        {
          v42 = v90;
          *(_QWORD *)(v35 + 100) = v90;
          *((_DWORD *)v35 + 23) = v99;
          v43 = v98 + v87;
          *((_DWORD *)v35 - 5) = v98 + v87;
          *(_QWORD *)(v35 - 12) = v33;
          v90 = 16LL * v99 + v42;
          if ( v98 <= 1 )
          {
            v35[80] = 0;
            *((_DWORD *)v35 + 10) = 1;
            *((_DWORD *)v35 + 17) = 1;
          }
          else
          {
            *((_DWORD *)v35 + 17) = 1;
            v44 = 0;
            v45 = *(_QWORD *)v33;
            for ( i = (unsigned int)((*(_DWORD *)(*(_QWORD *)v33 + 4LL) & 2) != 0) + 1;
                  (unsigned int)i < v43 && !v44;
                  i = ((*(_DWORD *)(v47 + 4) & 2) != 0) + 1 + (unsigned int)i )
            {
              v47 = *(_QWORD *)(v33 + 8 * i);
              v48 = *(_QWORD *)(v45 + 32) - *(_QWORD *)(v47 + 32);
              if ( !v48 )
                v48 = *(_QWORD *)(v45 + 40) - *(_QWORD *)(v47 + 40);
              v44 = v48 != 0;
            }
            v35[80] = v44;
            *((_DWORD *)v35 + 10) = v44 + 1;
          }
          *((_DWORD *)v35 + 11) = 0;
          *((_DWORD *)v35 + 18) = 0;
          v33 += 8LL * (v98 + v87);
          v49 = v86;
          v50 = *v7;
          v51 = 0;
          v91 += v88 * v98;
          while ( (__int64 *)v50 != v7 && !v51 )
          {
            if ( *(_DWORD *)(v50 + 20) < 2u && *(_DWORD *)(v50 + 64) == v86 )
              v51 = 1;
            else
              v50 = *(_QWORD *)v50;
          }
          v52 = v50 & -(__int64)(v51 != 0);
          if ( v52 )
          {
            v16 = 0;
            v53 = (*(_DWORD *)(v52 + 20) != 0) + 1;
            *((_DWORD *)v35 - 1) = v53;
            *((_DWORD *)v35 + 9) = 2;
            if ( v40 )
            {
              *(_QWORD *)(v35 + 60) = PinMIDIDataFormatIntersection;
              *(_QWORD *)(v35 + 4) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
              if ( v53 == 1 )
              {
                *(_DWORD *)v35 = 1;
                *((_DWORD *)v35 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v35 = 3;
                *((_DWORD *)v35 + 9) |= 8u;
              }
            }
            else
            {
              *(_QWORD *)(v35 + 60) = &PinDataFormatIntersection;
              if ( v53 == 1 )
              {
                *(_DWORD *)v35 = 1;
                *(_QWORD *)(v35 + 4) = &KSCATEGORY_AUDIO;
                *((_DWORD *)v35 + 9) |= 0x210000u;
              }
              else
              {
                *(_DWORD *)v35 = 3;
                *(_QWORD *)(v35 + 4) = &PINNAME_VIDEO_CAPTURE;
                *((_DWORD *)v35 + 9) |= 0x10000u;
              }
              v54 = *v7;
              v16 = -1073741275;
              v55 = 0;
              while ( (__int64 *)v54 != v7 && !v55 )
              {
                if ( *(_DWORD *)(v54 + 20) < 2u && *(_DWORD *)(v54 + 64) == v49 )
                  v55 = 1;
                else
                  v54 = *(_QWORD *)v54;
              }
              v56 = v54 & -(__int64)(v55 != 0);
              if ( v56 )
              {
                v16 = 0;
                *((_DWORD *)v35 + 19) = *(_DWORD *)(v56 + 28);
              }
            }
            *(_QWORD *)(v35 + 52) = &AllocatorFraming;
          }
          else
          {
            v16 = -1073741275;
          }
        }
        v32 = v86 + 1;
        v34 = v92 + 6;
        v86 = v32;
        v35 += 176;
        v92 += 6;
      }
      while ( v32 < v11 );
      v29 = v94;
    }
    v57 = v89;
    v58 = 0;
    if ( v89 )
    {
      v59 = v95;
      v60 = v96;
      while ( 1 )
      {
        if ( v16 < 0 )
          goto LABEL_158;
        v61 = *v7;
        v62 = 0;
        while ( (__int64 *)v61 != v7 && !v62 )
        {
          if ( *(_DWORD *)(v61 + 20) < 2u && *(_DWORD *)(v61 + 64) == v32 )
            v62 = 1;
          else
            v61 = *(_QWORD *)v61;
        }
        v63 = -v62;
        v64 = (v61 & -(__int64)(v63 != 0)) != 0 && *(_DWORD *)((v61 & -(__int64)(v63 != 0)) + 0x44) == 2305;
        v65 = 176LL * v32;
        v16 = 0;
        v66 = 0;
        *(_QWORD *)&v29[v65 + 136] = 0LL;
        v67 = *v7;
        while ( (__int64 *)v67 != v7 && !v66 )
        {
          if ( *(_DWORD *)(v67 + 20) < 2u && *(_DWORD *)(v67 + 64) == v32 )
            v66 = 1;
          else
            v67 = *(_QWORD *)v67;
        }
        v68 = 0;
        v69 = v67 & -(__int64)(v66 != 0);
        if ( v69 && *(_DWORD *)(v69 + 20) == 1 && (*(_DWORD *)(v69 + 68) == 1538 || *(_DWORD *)(v69 + 68) == 1541) )
          v68 = 1;
        v29[v65 + 149] = v68;
        *(_QWORD *)&v29[v65] = 0LL;
        *(_QWORD *)&v29[v65 + 8] = 0LL;
        *(_QWORD *)&v29[v65 + 108] = 0LL;
        *(_QWORD *)&v29[v65 + 24] = &PinInterface;
        *(_QWORD *)&v29[v65 + 40] = &PinMedium;
        v70 = &pMIDIBridgePinFormats;
        if ( !v64 )
          v70 = &pAudioBridgePinFormats;
        v71 = v59 + 16LL * v58;
        *(_DWORD *)&v29[v65 + 16] = 1;
        *(_QWORD *)&v29[v65 + 72] = v71;
        v72 = 0;
        *(_DWORD *)&v29[v65 + 32] = 1;
        *(_DWORD *)&v29[v65 + 48] = 1;
        *(_QWORD *)&v29[v65 + 56] = v70;
        *(_DWORD *)&v29[v65 + 68] = 4;
        v73 = *v7;
        while ( (__int64 *)v73 != v7 && !v72 )
        {
          if ( *(_DWORD *)(v73 + 20) < 2u && *(_DWORD *)(v73 + 64) == v32 )
            v72 = 1;
          else
            v73 = *(_QWORD *)v73;
        }
        v74 = -v72;
        if ( (v73 & -(__int64)(v74 != 0)) == 0 )
        {
          v16 = -1073741275;
          goto LABEL_155;
        }
        *(_DWORD *)&v29[v65 + 64] = (*(_DWORD *)((v73 & -(__int64)(v74 != 0)) + 0x14) != 0) + 1;
        v75 = 0;
        v76 = *v7;
        while ( (__int64 *)v76 != v7 && !v75 )
        {
          if ( *(_DWORD *)(v76 + 20) < 2u && *(_DWORD *)(v76 + 64) == v32 )
            v75 = 1;
          else
            v76 = *(_QWORD *)v76;
        }
        v77 = v75 != 0;
        v78 = (unsigned __int16 *)&unk_1C001BD82;
        v79 = v76 & -(__int64)v77;
        v80 = 0LL;
        while ( *(_DWORD *)(v60 + 40) != *(v78 - 1) || *(_DWORD *)(v60 + 44) != *v78 )
        {
          v80 = (unsigned int)(v80 + 1);
          v78 += 4;
          if ( (unsigned int)v80 >= 0xA )
          {
            LOBYTE(v81) = 0;
            goto LABEL_130;
          }
        }
        v81 = dword_1C001BD84[2 * v80];
LABEL_130:
        *(GUID *)v71 = GUID_NULL;
        if ( !v79 )
          goto LABEL_155;
        if ( *(_DWORD *)((v76 & -(__int64)v77) + 0x44) != 2305 )
          break;
        v82 = KSCATEGORY_AUDIO;
LABEL_152:
        *(GUID *)v71 = v82;
LABEL_155:
        ++v58;
        ++v32;
        if ( v58 >= v57 )
          goto LABEL_156;
      }
      v83 = *(unsigned __int16 *)((v76 & -(__int64)v77) + 0x44) - 537781792;
      *(_DWORD *)(v71 + 4) = 298907407;
      *(_DWORD *)v71 = v83;
      *(_DWORD *)(v71 + 8) = -1610606663;
      *(_DWORD *)(v71 + 12) = -1775164727;
      if ( (v81 & 1) != 0 )
      {
        if ( *(_QWORD *)v71 == *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
          && *(_QWORD *)(v71 + 8) == *(_QWORD *)KSNODETYPE_SPEAKER.Data4 )
        {
          v84 = KSNODETYPE_COMMUNICATION_SPEAKER;
        }
        else
        {
          if ( *(_QWORD *)v71 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
            || *(_QWORD *)(v71 + 8) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4 )
          {
            goto LABEL_148;
          }
          v84 = KSNODETYPE_PERSONAL_MICROPHONE;
        }
      }
      else
      {
        if ( (v81 & 2) == 0
          || (*(_QWORD *)v71 != *(_QWORD *)&KSNODETYPE_SPEAKER.Data1
           || *(_QWORD *)(v71 + 8) != *(_QWORD *)KSNODETYPE_SPEAKER.Data4)
          && (*(_QWORD *)v71 != *(_QWORD *)&KSNODETYPE_MICROPHONE.Data1
           || *(_QWORD *)(v71 + 8) != *(_QWORD *)KSNODETYPE_MICROPHONE.Data4) )
        {
          goto LABEL_148;
        }
        v84 = KSNODETYPE_HANDSET;
      }
      *(GUID *)v71 = v84;
LABEL_148:
      if ( *(_QWORD *)v71 != *(_QWORD *)&KSNODETYPE_HEADSET.Data1
        || *(_QWORD *)(v71 + 8) != *(_QWORD *)KSNODETYPE_HEADSET.Data4 )
      {
        goto LABEL_155;
      }
      if ( *(_DWORD *)(v79 + 20) )
        v82 = KSNODETYPE_COMMUNICATION_SPEAKER;
      else
        v82 = KSNODETYPE_PERSONAL_MICROPHONE;
      goto LABEL_152;
    }
LABEL_156:
    if ( v16 < 0 || (v16 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v29, ExFreePool), v16 < 0) )
LABEL_158:
      ExFreePool(v29);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v16;
}
