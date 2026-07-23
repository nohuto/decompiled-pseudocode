/*
 * XREFs of _PnpDispatchDeviceInterface @ 0x1406CCEC0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14022B2F4 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406CC228 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceMappedProperty @ 0x1406CC6A4 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406CE9F0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetMatchingDeviceInterfaceList @ 0x1408605EC (_CmGetMatchingDeviceInterfaceList.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x14086D7C8 (_CmSetDeviceInterfaceMappedProperty.c)
 *     _CmCreateDeviceInterface @ 0x14088035C (_CmCreateDeviceInterface.c)
 *     _CmDeleteDeviceInterface @ 0x140A6187C (_CmDeleteDeviceInterface.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140A68698 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmGetDeviceInterfaceMappedPropertyLocales @ 0x140A688C4 (_CmGetDeviceInterfaceMappedPropertyLocales.c)
 */

__int64 __fastcall PnpDispatchDeviceInterface(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int128 *v6; // r8
  int v7; // r9d
  __int64 v8; // r9
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int DeviceInterfaceMappedProperty; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  v5 = (__int64)a2;
  LODWORD(a2) = 0;
  LODWORD(v6) = 0;
  v17 = 0LL;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    DeviceInterfaceMappedProperty = CmSetDeviceInterfaceMappedProperty(
                                                      a1,
                                                      v5,
                                                      *((_QWORD *)a5 + 2),
                                                      a5[6],
                                                      *((_QWORD *)a5 + 4),
                                                      a5[10]);
                  else
                    DeviceInterfaceMappedProperty = -1073741811;
                }
                else
                {
                  DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedProperty(
                                                    a1,
                                                    v5,
                                                    *(_QWORD *)a5,
                                                    *((_QWORD *)a5 + 1),
                                                    *((_QWORD *)a5 + 2),
                                                    *((_DWORD **)a5 + 3),
                                                    *((_QWORD *)a5 + 4),
                                                    a5[10],
                                                    *((_DWORD **)a5 + 6));
                }
              }
              else
              {
                DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedPropertyLocales(
                                                  a1,
                                                  0,
                                                  0,
                                                  *((_QWORD *)a5 + 1),
                                                  *((_QWORD *)a5 + 2),
                                                  a5[6],
                                                  *((_QWORD *)a5 + 4));
              }
            }
            else
            {
              DeviceInterfaceMappedProperty = CmGetDeviceInterfaceMappedPropertyKeys(
                                                a1,
                                                v5,
                                                *(_QWORD *)a5,
                                                0,
                                                *((_QWORD *)a5 + 3),
                                                a5[8],
                                                *((_QWORD *)a5 + 5));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)a5;
              a2 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *((_QWORD *)a5 + 1);
            }
            DeviceInterfaceMappedProperty = CmGetMatchingDeviceInterfaceList(
                                              a1,
                                              (_DWORD)a2,
                                              (_DWORD)v6,
                                              *((_QWORD *)a5 + 2),
                                              a5[6],
                                              *((_QWORD *)a5 + 4),
                                              a5[10] & 0xFFFF0000);
          }
        }
        else
        {
          DeviceInterfaceMappedProperty = CmDeleteDeviceInterface(a1, v5, *a5 & 0xFFFF0000);
        }
      }
      else
      {
        DeviceInterfaceMappedProperty = CmCreateDeviceInterface(
                                          a1,
                                          v5,
                                          *a5,
                                          (int)a5 + 8,
                                          (__int64)(a5 + 4),
                                          a5[5] & 0xFFFF0000);
      }
    }
    else
    {
      DeviceInterfaceMappedProperty = CmOpenDeviceInterfaceRegKey(
                                        a1,
                                        v5,
                                        0x30u,
                                        v8,
                                        *a5,
                                        *((_BYTE *)a5 + 4),
                                        *((_QWORD *)a5 + 1),
                                        a5 + 4);
    }
  }
  else
  {
    DeviceInterfaceMappedProperty = CmValidateDeviceInterfaceName(a1, v5, 0LL);
  }
  return PnpMapCmStatusToDispatchStatus(DeviceInterfaceMappedProperty);
}
