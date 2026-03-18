/*
 * XREFs of _PnpDispatchInterfaceClass @ 0x140787620
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x1402E02F0 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmCreateInterfaceClass @ 0x14076A9A0 (_CmCreateInterfaceClass.c)
 *     _CmValidateInstallerClassName @ 0x1407871A0 (_CmValidateInstallerClassName.c)
 *     _CmGetInterfaceClassMappedProperty @ 0x140787730 (_CmGetInterfaceClassMappedProperty.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140787DE8 (_CmOpenInterfaceClassRegKey.c)
 *     _CmGetMatchingCommonClassList @ 0x14083E1A0 (_CmGetMatchingCommonClassList.c)
 *     _CmDeleteInterfaceClass @ 0x140A24FF8 (_CmDeleteInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x140A2BE80 (_CmGetInterfaceClassMappedPropertyKeys.c)
 *     _CmGetInterfaceClassMappedPropertyLocales @ 0x140A2C000 (_CmGetInterfaceClassMappedPropertyLocales.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x140A2CC38 (_CmSetInterfaceClassMappedProperty.c)
 */

__int64 __fastcall PnpDispatchInterfaceClass(__int64 a1, const WCHAR *a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(); // r8
  __int128 *v6; // rbx
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int InterfaceClassMappedProperty; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v5) = 0;
  LODWORD(v6) = 0;
  v17 = 0LL;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
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
                    InterfaceClassMappedProperty = CmSetInterfaceClassMappedProperty(
                                                     a1,
                                                     *((_QWORD *)a5 + 2),
                                                     a5[6],
                                                     *((_QWORD *)a5 + 4),
                                                     a5[10]);
                  else
                    InterfaceClassMappedProperty = -1073741811;
                }
                else
                {
                  InterfaceClassMappedProperty = CmGetInterfaceClassMappedProperty(
                                                   a1,
                                                   (_DWORD)a2,
                                                   *(_QWORD *)a5,
                                                   *((_QWORD *)a5 + 1),
                                                   *((_QWORD *)a5 + 2),
                                                   *((_QWORD *)a5 + 3),
                                                   *((_QWORD *)a5 + 4),
                                                   a5[10],
                                                   *((_QWORD *)a5 + 6));
                }
              }
              else
              {
                InterfaceClassMappedProperty = CmGetInterfaceClassMappedPropertyLocales(
                                                 a1,
                                                 (_DWORD)a2,
                                                 0,
                                                 *((_QWORD *)a5 + 1),
                                                 *((_QWORD *)a5 + 2),
                                                 a5[6],
                                                 *((_QWORD *)a5 + 4));
              }
            }
            else
            {
              InterfaceClassMappedProperty = CmGetInterfaceClassMappedPropertyKeys(
                                               a1,
                                               (_DWORD)a2,
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
              v5 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *((_QWORD *)a5 + 1);
            }
            InterfaceClassMappedProperty = CmGetMatchingCommonClassList(
                                             a1,
                                             4,
                                             (_DWORD)v5,
                                             (_DWORD)v6,
                                             *((_QWORD *)a5 + 2),
                                             a5[6],
                                             *((_QWORD *)a5 + 4),
                                             a5[10] & 0xFFFF0000);
          }
        }
        else
        {
          InterfaceClassMappedProperty = CmDeleteInterfaceClass(a1, a2, *a5 & 0xFFFF0000);
        }
      }
      else
      {
        InterfaceClassMappedProperty = CmCreateInterfaceClass(
                                         a1,
                                         (__int64)a2,
                                         *a5,
                                         (HANDLE *)a5 + 1,
                                         (_BYTE *)a5 + 16,
                                         a5[5] & 0xFFFF0000);
      }
    }
    else
    {
      InterfaceClassMappedProperty = CmOpenInterfaceClassRegKey(
                                       a1,
                                       (_DWORD)a2,
                                       0,
                                       0,
                                       *a5,
                                       *((_BYTE *)a5 + 4),
                                       *((_QWORD *)a5 + 1),
                                       (__int64)(a5 + 4));
    }
  }
  else
  {
    InterfaceClassMappedProperty = CmValidateInstallerClassName(a1, a2);
  }
  return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedProperty);
}
