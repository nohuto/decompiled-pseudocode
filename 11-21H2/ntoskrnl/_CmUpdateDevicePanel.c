/*
 * XREFs of _CmUpdateDevicePanel @ 0x14076E224
 * Callers:
 *     PiUpdateDevicePanel @ 0x14076E168 (PiUpdateDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14076E548 (_CmQueryDevicePanelPldProperty.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmIsRootDevice @ 0x140789040 (_CmIsRootDevice.c)
 *     _CmAddPanelDevice @ 0x140A279F4 (_CmAddPanelDevice.c)
 *     _CmBuildDevicePanelId @ 0x140A27CF4 (_CmBuildDevicePanelId.c)
 *     _CmCreateDevicePanel @ 0x140A27D84 (_CmCreateDevicePanel.c)
 *     _CmGetDevicePanelGroup @ 0x140A28A2C (_CmGetDevicePanelGroup.c)
 *     _CmGetParentDeviceContainerId @ 0x140A28D58 (_CmGetParentDeviceContainerId.c)
 *     _CmRemovePanelDevice @ 0x140A29270 (_CmRemovePanelDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmUpdateDevicePanel(__int64 a1, const WCHAR *a2, int a3)
{
  __int64 v3; // rdi
  _DWORD *v4; // r12
  wchar_t *v5; // r14
  void *v6; // r13
  int DevicePanelPldProperty; // eax
  int ParentDeviceContainerId; // ebx
  void *v11; // rax
  int v12; // eax
  const wchar_t *v13; // rbx
  unsigned __int16 *v14; // rax
  _DWORD *v15; // r12
  int v16; // eax
  __int64 v17; // rdx
  int v19; // ecx
  __int64 Pool2; // rax
  int v21; // ebx
  __int64 i; // rdx
  int ObjectProperty; // eax
  void *v24; // rax
  PVOID v25; // rcx
  bool v26; // al
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // ecx
  int v34; // r8d
  int DevicePanel; // eax
  unsigned int v36; // ebx
  int v37; // eax
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // ecx
  __int64 v41; // rax
  PVOID v42; // r9
  __int64 v43; // r8
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rax
  int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // r8d
  unsigned int v50; // ecx
  unsigned int v51; // [rsp+60h] [rbp-A0h] BYREF
  char v52; // [rsp+64h] [rbp-9Ch]
  char v53; // [rsp+65h] [rbp-9Bh] BYREF
  char v54; // [rsp+66h] [rbp-9Ah]
  PVOID v55; // [rsp+68h] [rbp-98h]
  unsigned int v56; // [rsp+70h] [rbp-90h] BYREF
  char v57[4]; // [rsp+74h] [rbp-8Ch] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned int DevicePanelGroup; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v61; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v62; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v63; // [rsp+98h] [rbp-68h]
  unsigned int v64; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v65; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v66; // [rsp+A4h] [rbp-5Ch]
  int v67; // [rsp+A8h] [rbp-58h] BYREF
  int v68; // [rsp+ACh] [rbp-54h] BYREF
  PVOID v69; // [rsp+B0h] [rbp-50h]
  PVOID v70; // [rsp+B8h] [rbp-48h]
  void *v71; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v72; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v73; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v74; // [rsp+E0h] [rbp-20h] BYREF
  int v75; // [rsp+F0h] [rbp-10h]
  __int128 v76; // [rsp+F8h] [rbp-8h] BYREF
  int v77; // [rsp+108h] [rbp+8h]

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  v72 = 0LL;
  v68 = 0;
  v62 = 0LL;
  v67 = 0;
  v70 = 0LL;
  v4 = 0LL;
  v63 = 0;
  v5 = 0LL;
  v55 = 0LL;
  v6 = 0LL;
  v73 = 0LL;
  v54 = 0;
  DevicePanelGroup = 0;
  v61 = 0;
  P = 0LL;
  v69 = 0LL;
  v52 = 0;
  v74 = 0LL;
  v75 = 0;
  v76 = 0LL;
  v77 = 0;
  v71 = 0LL;
  v53 = 0;
  v51 = 0;
  v64 = 0;
  v65 = 0;
  v57[0] = 0;
  v56 = 0;
  v59 = 1;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&v72,
                             (__int64)&v68,
                             (__int64)&v62,
                             (__int64)&v67);
  ParentDeviceContainerId = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
  {
    v62 = 0LL;
    goto LABEL_4;
  }
  if ( DevicePanelPldProperty >= 0 )
  {
    v4 = v62;
    if ( !v62 )
      goto LABEL_4;
    ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v73);
    if ( ParentDeviceContainerId >= 0 )
    {
      v54 = 1;
      DevicePanelGroup = CmGetDevicePanelGroup(v4, 0LL);
      v19 = 0;
      if ( ((v4[2] >> 3) & 7) != 7 )
        v19 = dword_140047930[(v4[2] >> 3) & 7];
      v61 = v19;
      Pool2 = ExAllocatePool2(256LL, 114LL, 1380994640LL);
      v5 = (wchar_t *)Pool2;
      if ( Pool2 )
      {
        ParentDeviceContainerId = CmBuildDevicePanelId(&v73, DevicePanelGroup, v61, Pool2);
        if ( ParentDeviceContainerId < 0 )
          goto LABEL_58;
        v21 = 16;
        for ( i = 16LL; ; i = v56 )
        {
          v66 = v21;
          v24 = (void *)ExAllocatePool2(256LL, i, 1380994640LL);
          v55 = v24;
          if ( !v24 )
          {
            ParentDeviceContainerId = -1073741801;
            goto LABEL_58;
          }
          ObjectProperty = PnpGetObjectProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             a3,
                             0LL,
                             (__int64)DEVPKEY_Device_PhysicalDeviceLocationSpatial,
                             (__int64)&v59,
                             (__int64)v24,
                             v21,
                             (__int64)&v56,
                             0);
          ParentDeviceContainerId = ObjectProperty;
          if ( ObjectProperty != -1073741789 )
            break;
          if ( v56 <= v66 )
          {
            ParentDeviceContainerId = -1073741823;
            goto LABEL_58;
          }
          ExFreePoolWithTag(v55, 0);
          v21 = v56;
        }
        if ( ObjectProperty == -1073741275 )
        {
          v25 = v55;
        }
        else
        {
          if ( ObjectProperty < 0 )
            goto LABEL_58;
          v25 = v55;
          if ( v59 == 4099 && v56 >= 0x10 && (*(_BYTE *)v55 & 0x1F) != 0 )
          {
LABEL_4:
            v11 = (void *)ExAllocatePool2(256LL, 114LL, 1380994640LL);
            P = v11;
            if ( !v11 )
            {
              ParentDeviceContainerId = -1073741801;
              goto LABEL_29;
            }
            v12 = PnpGetObjectProperty(
                    v3,
                    (_DWORD)a2,
                    1,
                    a3,
                    0LL,
                    (__int64)&DEVPKEY_Device_PanelId,
                    (__int64)&v59,
                    (__int64)v11,
                    114,
                    (__int64)&v56,
                    0);
            ParentDeviceContainerId = v12;
            if ( v12 == -1073741275 )
              goto LABEL_6;
            if ( v12 < 0 )
              goto LABEL_29;
            if ( v59 != 18 || v56 < 2 )
            {
LABEL_6:
              ExFreePoolWithTag(P, 0);
              v13 = 0LL;
              P = 0LL;
            }
            else
            {
              v13 = (const wchar_t *)P;
            }
            if ( v5 )
            {
              v26 = !v13 || wcsicmp(v13, v5);
              if ( !v13 )
                goto LABEL_84;
              v52 = v26;
              if ( !v26 )
                goto LABEL_84;
            }
            else
            {
              if ( !v13 )
                goto LABEL_9;
              v52 = 1;
            }
            ParentDeviceContainerId = CmRemovePanelDevice(v3, v13, a2);
            if ( ParentDeviceContainerId < 0 )
              goto LABEL_29;
            if ( !v5 )
            {
              v13 = (const wchar_t *)P;
              if ( !P )
                goto LABEL_9;
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
              goto LABEL_103;
            }
            v26 = v52;
LABEL_84:
            v52 = v26;
            v27 = -1LL;
            do
              ++v27;
            while ( v5[v27] );
            ParentDeviceContainerId = PnpSetObjectProperty(
                                        v3,
                                        (_DWORD)a2,
                                        1,
                                        0LL,
                                        (__int64)&DEVPKEY_Device_PanelId,
                                        18,
                                        (__int64)v5,
                                        2 * (int)v27 + 2,
                                        0);
            if ( ParentDeviceContainerId < 0 )
              goto LABEL_58;
            ParentDeviceContainerId = PnpSetObjectProperty(
                                        v3,
                                        (_DWORD)a2,
                                        1,
                                        0LL,
                                        (__int64)DEVPKEY_Device_PanelGroup,
                                        7,
                                        (__int64)&DevicePanelGroup,
                                        4,
                                        0);
            if ( ParentDeviceContainerId < 0 )
              goto LABEL_58;
            ParentDeviceContainerId = PnpSetObjectProperty(
                                        v3,
                                        (_DWORD)a2,
                                        1,
                                        0LL,
                                        (__int64)DEVPKEY_Device_PanelSide,
                                        7,
                                        (__int64)&v61,
                                        4,
                                        0);
            if ( ParentDeviceContainerId < 0 )
              goto LABEL_58;
            if ( v4 )
            {
              if ( v55 )
              {
                v51 = (unsigned __int16)*((_DWORD *)v55 + 1);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelWidth,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_58;
                v51 = *((unsigned __int16 *)v55 + 3);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelHeight,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_58;
                v51 = (unsigned __int16)*((_DWORD *)v55 + 2);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelLength,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_58;
              }
              else
              {
                v51 = (unsigned __int16)v4[1];
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelWidth,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_58;
                v51 = *((unsigned __int16 *)v4 + 3);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelHeight,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_58;
                if ( P )
                  PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
              }
              goto LABEL_104;
            }
            v13 = (const wchar_t *)P;
            if ( !P )
            {
LABEL_104:
              if ( v4 && *((_WORD *)v4 + 9) != 0xFFFF && (unsigned __int16)v4[4] != 0xFFFF )
              {
                v14 = (unsigned __int16 *)v55;
                goto LABEL_108;
              }
              v13 = (const wchar_t *)P;
LABEL_9:
              v14 = (unsigned __int16 *)v55;
              if ( !v55 )
              {
                if ( !v13 )
                {
LABEL_11:
                  if ( v5 && v4 )
                  {
                    if ( v14 )
                    {
                      v51 = ((*(_DWORD *)v14 >> 5) & 0x1FFu) % 0x168;
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (_DWORD)a2,
                                                  1,
                                                  0LL,
                                                  (__int64)DEVPKEY_Device_PanelRotationX,
                                                  7,
                                                  (__int64)&v51,
                                                  4,
                                                  0);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_58;
                      v51 = ((*(_DWORD *)v55 >> 14) & 0x1FFu) % 0x168;
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (_DWORD)a2,
                                                  1,
                                                  0LL,
                                                  (__int64)DEVPKEY_Device_PanelRotationY,
                                                  7,
                                                  (__int64)&v51,
                                                  4,
                                                  0);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_58;
                      v51 = (*(_DWORD *)v55 >> 23) % 0x168u;
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (_DWORD)a2,
                                                  1,
                                                  0LL,
                                                  (__int64)DEVPKEY_Device_PanelRotationZ,
                                                  7,
                                                  (__int64)&v51,
                                                  4,
                                                  0);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_58;
                      v13 = (const wchar_t *)P;
                    }
                    else
                    {
                      v51 = 45 * ((v4[3] >> 19) & 0xFu) % 0x168;
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (_DWORD)a2,
                                                  1,
                                                  0LL,
                                                  (__int64)DEVPKEY_Device_PanelRotationZ,
                                                  7,
                                                  (__int64)&v51,
                                                  4,
                                                  0);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_58;
                      v13 = (const wchar_t *)P;
                      if ( P )
                      {
                        PnpSetObjectProperty(
                          v3,
                          (_DWORD)a2,
                          1,
                          0LL,
                          (__int64)DEVPKEY_Device_PanelRotationX,
                          0,
                          0LL,
                          0,
                          0);
                        PnpSetObjectProperty(
                          v3,
                          (_DWORD)a2,
                          1,
                          0LL,
                          (__int64)DEVPKEY_Device_PanelRotationY,
                          0,
                          0LL,
                          0,
                          0);
                      }
                    }
                  }
                  else
                  {
                    if ( v13 )
                    {
                      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
                      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
                      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelRotationZ, 0, 0LL, 0, 0);
                    }
                    if ( !v5 )
                      goto LABEL_15;
                  }
                  if ( v4 && (*v4 & 0x80u) == 0 )
                  {
                    v51 = (unsigned __int8)BYTE1(*v4) | (((*((unsigned __int8 *)v4 + 3) << 8) | (unsigned __int8)BYTE2(*v4)) << 8) | 0xFF000000;
                    ParentDeviceContainerId = PnpSetObjectProperty(
                                                v3,
                                                (_DWORD)a2,
                                                1,
                                                0LL,
                                                (__int64)DEVPKEY_Device_PanelColor,
                                                7,
                                                (__int64)&v51,
                                                4,
                                                0);
                    if ( ParentDeviceContainerId < 0 )
                      goto LABEL_58;
                    v13 = (const wchar_t *)P;
LABEL_130:
                    if ( v4 )
                    {
                      v28 = 0;
                      v29 = (v4[2] >> 10) & 0xF;
                      if ( (unsigned int)v29 < 9 )
                        v28 = dword_140047970[v29];
                      v51 = v28;
                      ParentDeviceContainerId = PnpSetObjectProperty(
                                                  v3,
                                                  (_DWORD)a2,
                                                  1,
                                                  0LL,
                                                  (__int64)DEVPKEY_Device_PanelShape,
                                                  7,
                                                  (__int64)&v51,
                                                  4,
                                                  0);
                      if ( ParentDeviceContainerId < 0 )
                        goto LABEL_58;
                      v13 = (const wchar_t *)P;
LABEL_135:
                      if ( v4 )
                      {
                        v57[0] = -((v4[2] & 1) != 0);
                        ParentDeviceContainerId = PnpSetObjectProperty(
                                                    v3,
                                                    (_DWORD)a2,
                                                    1,
                                                    0LL,
                                                    (__int64)DEVPKEY_Device_PanelVisible,
                                                    17,
                                                    (__int64)v57,
                                                    1,
                                                    0);
                        if ( ParentDeviceContainerId < 0 )
                          goto LABEL_58;
                        goto LABEL_137;
                      }
LABEL_21:
                      if ( v13 )
                        PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelVisible, 0, 0LL, 0, 0);
                      if ( !v5 )
                        goto LABEL_24;
LABEL_137:
                      if ( !v52
                        || (ParentDeviceContainerId = CmAddPanelDevice(v3, v5, a2), ParentDeviceContainerId >= 0) )
                      {
LABEL_24:
                        v15 = 0LL;
                        v75 = 2;
                        v74 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
                        v77 = 2;
                        v76 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
                        while ( 2 )
                        {
                          v16 = CmQueryDevicePanelPldProperty(
                                  v3,
                                  (_DWORD)a2,
                                  1,
                                  a3,
                                  (__int64)&v74,
                                  (__int64)&v72,
                                  (__int64)&v68,
                                  (__int64)&v62,
                                  (__int64)&v67);
                          v17 = 0LL;
                          ParentDeviceContainerId = v16;
                          if ( v16 == -1073741275 )
                          {
                            ParentDeviceContainerId = 0;
                            goto LABEL_27;
                          }
                          if ( v16 < 0 )
                          {
LABEL_27:
                            if ( v6 )
                              ZwClose(v6);
LABEL_29:
                            if ( v5 )
                              break;
                            goto LABEL_30;
                          }
                          if ( !v54 )
                          {
                            ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v73);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            v54 = 1;
                          }
                          DevicePanelGroup = CmGetDevicePanelGroup(v62, v17);
                          v31 = DevicePanelGroup;
                          v32 = 0LL;
                          v33 = (*(_DWORD *)(v30 + 8) >> 3) & 7;
                          if ( v33 < 7 )
                            v32 = (unsigned int)dword_140047930[v33];
                          v61 = v32;
                          if ( !v5 )
                          {
                            v5 = (wchar_t *)ExAllocatePool2(256LL, 114LL, 1380994640LL);
                            if ( !v5 )
                            {
LABEL_226:
                              ParentDeviceContainerId = -1073741801;
                              goto LABEL_27;
                            }
                            v31 = DevicePanelGroup;
                            v32 = v61;
                          }
                          ParentDeviceContainerId = CmBuildDevicePanelId(&v73, v31, v32, v5);
                          if ( ParentDeviceContainerId < 0 )
                            goto LABEL_27;
                          DevicePanel = CmCreateDevicePanel(v3, (_DWORD)v5, v34, (unsigned int)&v71, (__int64)&v53);
                          v6 = v71;
                          ParentDeviceContainerId = DevicePanel;
                          if ( DevicePanel < 0 )
                            goto LABEL_27;
                          v51 = (unsigned __int16)v62[1];
                          ParentDeviceContainerId = PnpSetObjectProperty(
                                                      v3,
                                                      (_DWORD)v5,
                                                      6,
                                                      0LL,
                                                      (__int64)DEVPKEY_DevicePanel_Width,
                                                      7,
                                                      (__int64)&v51,
                                                      4,
                                                      0);
                          if ( ParentDeviceContainerId < 0 )
                            goto LABEL_27;
                          v51 = *((unsigned __int16 *)v62 + 3);
                          ParentDeviceContainerId = PnpSetObjectProperty(
                                                      v3,
                                                      (_DWORD)v5,
                                                      6,
                                                      0LL,
                                                      (__int64)DEVPKEY_DevicePanel_Height,
                                                      7,
                                                      (__int64)&v51,
                                                      4,
                                                      0);
                          if ( ParentDeviceContainerId < 0 )
                            goto LABEL_27;
                          if ( (*v62 & 0x80u) != 0 )
                          {
                            if ( !v53 )
                              PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)DEVPKEY_DevicePanel_Color,
                                0,
                                0LL,
                                0,
                                0);
                          }
                          else
                          {
                            v51 = (unsigned __int8)BYTE1(*v62) | (((*((unsigned __int8 *)v62 + 3) << 8) | (unsigned __int8)BYTE2(*v62)) << 8) | 0xFF000000;
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (_DWORD)v5,
                                                        6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_Color,
                                                        7,
                                                        (__int64)&v51,
                                                        4,
                                                        0);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                          }
                          v36 = v63;
                          if ( !v15 )
                            v36 = 16;
                          while ( 1 )
                          {
                            v63 = v36;
                            if ( !v15 )
                            {
                              v70 = (PVOID)ExAllocatePool2(256LL, v36, 1380994640LL);
                              v15 = v70;
                              if ( !v70 )
                                goto LABEL_226;
                            }
                            v37 = PnpGetObjectProperty(
                                    v3,
                                    (_DWORD)a2,
                                    1,
                                    a3,
                                    0LL,
                                    (__int64)&v76,
                                    (__int64)&v59,
                                    (__int64)v15,
                                    v36,
                                    (__int64)&v56,
                                    0);
                            ParentDeviceContainerId = v37;
                            if ( v37 != -1073741789 )
                              break;
                            if ( v56 <= v63 )
                            {
                              ParentDeviceContainerId = -1073741823;
                              goto LABEL_27;
                            }
                            ExFreePoolWithTag(v15, 0);
                            v36 = v56;
                            v15 = 0LL;
                            v70 = 0LL;
                          }
                          if ( v37 == -1073741275 )
                          {
                            *v15 &= 0xFFFFFFE0;
                          }
                          else
                          {
                            if ( v37 < 0 )
                              goto LABEL_27;
                            if ( v59 != 4099 || v56 < 0x10 )
                              *v15 &= 0xFFFFFFE0;
                          }
                          if ( (*v15 & 0x1F) == 0 )
                          {
                            if ( v53 )
                              goto LABEL_225;
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointType,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointTargetRotationX,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointTargetRotationY,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
                              0,
                              0LL,
                              0,
                              0);
                            goto LABEL_224;
                          }
                          v38 = 0;
                          v39 = (*v15 >> 5) & 0xF;
                          if ( v39 < 5 )
                            v38 = dword_140047950[v39];
                          v51 = v38;
                          ParentDeviceContainerId = PnpSetObjectProperty(
                                                      v3,
                                                      (_DWORD)v5,
                                                      6,
                                                      0LL,
                                                      (__int64)DEVPKEY_DevicePanel_JointType,
                                                      7,
                                                      (__int64)&v51,
                                                      4,
                                                      0);
                          if ( ParentDeviceContainerId < 0 )
                            goto LABEL_27;
                          v40 = 0;
                          v41 = (*v15 >> 9) & 7;
                          if ( (unsigned int)v41 < 5 )
                            v40 = dword_140047998[v41];
                          v51 = v40;
                          ParentDeviceContainerId = PnpSetObjectProperty(
                                                      v3,
                                                      (_DWORD)v5,
                                                      6,
                                                      0LL,
                                                      (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
                                                      7,
                                                      (__int64)&v51,
                                                      4,
                                                      0);
                          if ( ParentDeviceContainerId < 0 )
                            goto LABEL_27;
                          v42 = v69;
                          if ( v69 || (v69 = (PVOID)ExAllocatePool2(256LL, 114LL, 1380994640LL), (v42 = v69) != 0LL) )
                          {
                            v43 = 0LL;
                            if ( ((*v15 >> 20) & 7) != 7 )
                              v43 = (unsigned int)dword_140047930[(*v15 >> 20) & 7];
                            v51 = v43;
                            ParentDeviceContainerId = CmBuildDevicePanelId(
                                                        &v73,
                                                        (unsigned __int8)(*v15 >> 12),
                                                        v43,
                                                        v42);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            v44 = -1LL;
                            do
                              ++v44;
                            while ( *((_WORD *)v69 + v44) );
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (_DWORD)v5,
                                                        6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
                                                        18,
                                                        (__int64)v69,
                                                        2 * (int)v44 + 2,
                                                        0);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            v45 = 0;
                            v46 = (*v15 >> 23) & 7;
                            if ( (unsigned int)v46 < 5 )
                              v45 = dword_140047998[v46];
                            v51 = v45;
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (_DWORD)v5,
                                                        6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
                                                        7,
                                                        (__int64)&v51,
                                                        4,
                                                        0);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            if ( *((_WORD *)v62 + 9) == 0xFFFF || (unsigned __int16)v62[4] == 0xFFFF )
                            {
                              if ( !v53 )
                              {
                                PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v5,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                                  0,
                                  0LL,
                                  0,
                                  0);
                                PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v5,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                                  0,
                                  0LL,
                                  0,
                                  0);
                                PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v5,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
                                  0,
                                  0LL,
                                  0,
                                  0);
                              }
                            }
                            else
                            {
                              v51 = *((unsigned __int16 *)v62 + 9);
                              ParentDeviceContainerId = PnpSetObjectProperty(
                                                          v3,
                                                          (_DWORD)v5,
                                                          6,
                                                          0LL,
                                                          (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
                                                          7,
                                                          (__int64)&v51,
                                                          4,
                                                          0);
                              if ( ParentDeviceContainerId < 0 )
                                goto LABEL_27;
                              v51 = (unsigned __int16)v62[4];
                              ParentDeviceContainerId = PnpSetObjectProperty(
                                                          v3,
                                                          (_DWORD)v5,
                                                          6,
                                                          0LL,
                                                          (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
                                                          7,
                                                          (__int64)&v51,
                                                          4,
                                                          0);
                              if ( ParentDeviceContainerId < 0 )
                                goto LABEL_27;
                              if ( !v53 )
                                PnpSetObjectProperty(
                                  v3,
                                  (_DWORD)v5,
                                  6,
                                  0LL,
                                  (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
                                  0,
                                  0LL,
                                  0,
                                  0);
                            }
                            v51 = (unsigned __int16)v15[2];
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (_DWORD)v5,
                                                        6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
                                                        7,
                                                        (__int64)&v51,
                                                        4,
                                                        0);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            v51 = *((unsigned __int16 *)v15 + 5);
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (_DWORD)v5,
                                                        6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
                                                        7,
                                                        (__int64)&v51,
                                                        4,
                                                        0);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            v51 = (unsigned __int16)v15[3];
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (_DWORD)v5,
                                                        6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
                                                        7,
                                                        (__int64)&v51,
                                                        4,
                                                        0);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            v47 = (1813430637 * (unsigned __int64)(*((_WORD *)v15 + 7) & 0x1FF)) >> 32;
                            v51 = (*((_WORD *)v15 + 7) & 0x1FF)
                                - 360 * ((v47 + (((*((_WORD *)v15 + 7) & 0x1FFu) - v47) >> 1)) >> 8);
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (_DWORD)v5,
                                                        6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
                                                        7,
                                                        (__int64)&v51,
                                                        4,
                                                        0);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            v51 = dword_140047968[(unsigned __int64)(unsigned int)*v15 >> 31];
                            ParentDeviceContainerId = PnpSetObjectProperty(
                                                        v3,
                                                        (_DWORD)v5,
                                                        6,
                                                        0LL,
                                                        (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
                                                        7,
                                                        (__int64)&v51,
                                                        4,
                                                        0);
                            if ( ParentDeviceContainerId < 0 )
                              goto LABEL_27;
                            if ( (*v15 & 0x1E0) != 0 && (*v15 & 0x1E0u) <= 0x80 )
                            {
                              v51 = 0;
                              if ( (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
                                          7,
                                          (__int64)&v51,
                                          4,
                                          0) >= 0 )
                              {
                                v48 = *((unsigned __int16 *)v15 + 3);
                                v49 = (unsigned __int16)v15[1];
                                if ( (*v15 & 0x1E0) != 0x20 )
                                {
                                  v48 %= 0x168u;
                                  v49 %= 0x168u;
                                }
                                v64 = v49 + v48;
                                if ( (int)PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)v5,
                                            6,
                                            0LL,
                                            (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
                                            7,
                                            (__int64)&v64,
                                            4,
                                            0) >= 0 )
                                {
                                  v50 = *((unsigned __int16 *)v15 + 3);
                                  if ( (*v15 & 0x1E0) != 0x20 )
                                    v50 %= 0x168u;
                                  v65 = v50;
                                  if ( (int)PnpSetObjectProperty(
                                              v3,
                                              (_DWORD)v5,
                                              6,
                                              0LL,
                                              (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
                                              7,
                                              (__int64)&v65,
                                              4,
                                              0) >= 0
                                    && ((int)PnpGetObjectProperty(
                                               v3,
                                               (_DWORD)v5,
                                               6,
                                               (_DWORD)v6,
                                               0LL,
                                               (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                                               (__int64)&v59,
                                               (__int64)&v51,
                                               4,
                                               (__int64)&v56,
                                               0) < 0
                                     || v59 != 7
                                     || v56 != 4
                                     || v51 > v64) )
                                  {
                                    PnpSetObjectProperty(
                                      v3,
                                      (_DWORD)v5,
                                      6,
                                      0LL,
                                      (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                                      7,
                                      (__int64)&v65,
                                      4,
                                      0);
                                  }
                                }
                              }
                              goto LABEL_225;
                            }
                            if ( v53 )
                            {
LABEL_225:
                              ++v75;
                              ++v77;
                              continue;
                            }
LABEL_224:
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                              0,
                              0LL,
                              0,
                              0);
                            goto LABEL_225;
                          }
                          goto LABEL_226;
                        }
                      }
LABEL_58:
                      ExFreePoolWithTag(v5, 0);
LABEL_30:
                      if ( P )
                        ExFreePoolWithTag(P, 0);
                      if ( v69 )
                        ExFreePoolWithTag(v69, 0);
                      v4 = v55;
                      goto LABEL_35;
                    }
LABEL_18:
                    if ( v13 )
                      PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelShape, 0, 0LL, 0, 0);
                    if ( !v5 )
                      goto LABEL_21;
                    goto LABEL_135;
                  }
LABEL_15:
                  if ( v13 )
                    PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelColor, 0, 0LL, 0, 0);
                  if ( !v5 )
                    goto LABEL_18;
                  goto LABEL_130;
                }
                PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionX, 0, 0LL, 0, 0);
                PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionY, 0, 0LL, 0, 0);
                PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
LABEL_119:
                v14 = (unsigned __int16 *)v55;
                goto LABEL_11;
              }
LABEL_108:
              if ( v14 )
              {
                v51 = v14[5];
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelPositionX,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_29;
                v51 = (unsigned __int16)*((_DWORD *)v55 + 3);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelPositionY,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_29;
                v51 = *((unsigned __int16 *)v55 + 7);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelPositionZ,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_29;
                v13 = (const wchar_t *)P;
              }
              else
              {
                v51 = *((unsigned __int16 *)v4 + 9);
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelPositionX,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_29;
                v51 = (unsigned __int16)v4[4];
                ParentDeviceContainerId = PnpSetObjectProperty(
                                            v3,
                                            (_DWORD)a2,
                                            1,
                                            0LL,
                                            (__int64)DEVPKEY_Device_PanelPositionY,
                                            7,
                                            (__int64)&v51,
                                            4,
                                            0);
                if ( ParentDeviceContainerId < 0 )
                  goto LABEL_29;
                v13 = (const wchar_t *)P;
                if ( P )
                  PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
              }
              goto LABEL_119;
            }
LABEL_103:
            PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelWidth, 0, 0LL, 0, 0);
            PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelHeight, 0, 0LL, 0, 0);
            PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
            if ( !v5 )
              goto LABEL_9;
            goto LABEL_104;
          }
        }
        ExFreePoolWithTag(v25, 0);
        v55 = 0LL;
        goto LABEL_4;
      }
      ParentDeviceContainerId = -1073741801;
    }
    v4 = 0LL;
  }
LABEL_35:
  if ( v72 )
    ExFreePoolWithTag(v72, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v70 )
    ExFreePoolWithTag(v70, 0);
  return (unsigned int)ParentDeviceContainerId;
}
