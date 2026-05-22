/*
 * XREFs of ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x18005D100
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@XZ @ 0x18005C58C (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18005BF90 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18005C08C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@@Z @ 0x18005C198 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x18005C1D8 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x18005C33C (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x18005C3D0 (--0-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_K.c)
 *     ?EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z @ 0x18005C70C (-EvaluateDisplayConfig@Postures@InputTraceLogging@@SAX_N00@Z.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x18005D75C (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXXZ @ 0x18005D798 (-_Tidy@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEA.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall DevicePostureHelpers::IsValidTabletDisplayConfig(DevicePostureHelpers *this)
{
  char v1; // bl
  __int64 v3; // r8
  __int64 v4; // r8
  char *v5; // rcx
  DISPLAYCONFIG_PATH_INFO *v6; // r8
  unsigned __int64 v7; // r9
  DISPLAYCONFIG_MODE_INFO *v8; // r10
  unsigned __int64 v9; // r9
  char v10; // r14
  char v11; // si
  char v12; // di
  unsigned __int16 *v13; // r8
  DISPLAYCONFIG_PATH_INFO *pathArray; // [rsp+40h] [rbp-30h] BYREF
  char *v15; // [rsp+48h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-20h]
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // [rsp+58h] [rbp-18h] BYREF
  char *v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+68h] [rbp-8h]
  UINT32 numPathArrayElements; // [rsp+A0h] [rbp+30h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+A8h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+B0h] [rbp+40h] BYREF
  int pvData; // [rsp+B8h] [rbp+48h] BYREF

  pcbData = 4;
  v1 = 0;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"System\\CurrentControlSet\\Control\\PriorityControl",
         L"CSMIgnoreDisplayConfig",
         0x10u,
         0LL,
         &pvData,
         &pcbData)
    || !pvData )
  {
    if ( GetDisplayConfigBufferSizes(0x12u, &numPathArrayElements, &numModeInfoArrayElements) )
    {
      return 0;
    }
    else
    {
      std::vector<DISPLAYCONFIG_PATH_INFO>::vector<DISPLAYCONFIG_PATH_INFO>(
        (char **)&pathArray,
        numPathArrayElements,
        v3);
      std::vector<DISPLAYCONFIG_MODE_INFO>::vector<DISPLAYCONFIG_MODE_INFO>(
        (char **)&modeInfoArray,
        numModeInfoArrayElements,
        v4);
      if ( !QueryDisplayConfig(0x12u, &numPathArrayElements, pathArray, &numModeInfoArrayElements, modeInfoArray, 0LL) )
      {
        v5 = v15;
        v6 = pathArray;
        v7 = 0x8E38E38E38E38E39uLL * ((v15 - (char *)pathArray) >> 3);
        if ( numPathArrayElements >= v7 )
        {
          if ( numPathArrayElements > v7 )
          {
            if ( numPathArrayElements <= 0x8E38E38E38E38E39uLL * ((v16 - (__int64)pathArray) >> 3) )
            {
              v5 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(
                     v15,
                     numPathArrayElements - v7);
              v15 = v5;
            }
            else
            {
              std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(
                (__int64)&pathArray,
                numPathArrayElements);
              v5 = v15;
            }
            v6 = pathArray;
          }
        }
        else
        {
          v5 = (char *)&pathArray[numPathArrayElements];
          v15 = v5;
        }
        v8 = modeInfoArray;
        v9 = (v18 - (char *)modeInfoArray) >> 6;
        if ( numModeInfoArrayElements >= v9 )
        {
          if ( numModeInfoArrayElements > v9 )
          {
            if ( numModeInfoArrayElements <= (unsigned __int64)((v19 - (__int64)modeInfoArray) >> 6) )
              v18 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(
                      v18,
                      numModeInfoArrayElements - v9);
            else
              std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
                (__int64)&modeInfoArray,
                numModeInfoArrayElements);
            v8 = modeInfoArray;
            v6 = pathArray;
            v5 = v15;
          }
        }
        else
        {
          v18 = (char *)&modeInfoArray[(unsigned __int64)numModeInfoArrayElements];
        }
        v10 = 0;
        v11 = 0;
        v12 = 1;
        if ( v6 != (DISPLAYCONFIG_PATH_INFO *)v5 )
        {
          v13 = (unsigned __int16 *)&v6->sourceInfo.1 + 1;
          while ( 1 )
          {
            if ( *(_DWORD *)(v13 + 11) == 0x80000000 || *(_DWORD *)(v13 + 11) == 11 || *(_DWORD *)(v13 + 11) == 13 )
              v10 = 1;
            if ( *(_QWORD *)&v8[(unsigned __int64)*v13].desktopImageInfo.DesktopImageRegion.top )
              break;
            v13 += 36;
            if ( v13 - 7 == (unsigned __int16 *)v5 )
              goto LABEL_31;
          }
          v11 = 1;
        }
LABEL_31:
        InputTraceLogging::Postures::EvaluateDisplayConfig(0, v11, v10);
        if ( !v10 || v11 )
          v12 = 0;
        v1 = v12;
      }
      std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy(&modeInfoArray);
      std::vector<DISPLAYCONFIG_PATH_INFO>::_Tidy(&pathArray);
      return v1;
    }
  }
  else
  {
    InputTraceLogging::Postures::EvaluateDisplayConfig(1, 0, 0);
    return 1;
  }
}
