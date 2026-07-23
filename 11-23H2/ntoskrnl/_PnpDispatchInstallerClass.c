/*
 * XREFs of _PnpDispatchInstallerClass @ 0x14069AE50
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x14022B2F4 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmGetInstallerClassMappedProperty @ 0x14069AF98 (_CmGetInstallerClassMappedProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x140787A24 (_CmOpenInstallerClassRegKey.c)
 *     _CmValidateInstallerClassName @ 0x140787A6C (_CmValidateInstallerClassName.c)
 *     _CmGetMatchingCommonClassList @ 0x14082AA1C (_CmGetMatchingCommonClassList.c)
 *     _CmCreateInstallerClass @ 0x140A61084 (_CmCreateInstallerClass.c)
 *     _CmDeleteInstallerClass @ 0x140A62CA4 (_CmDeleteInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A68F5C (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedPropertyLocales @ 0x140A69260 (_CmGetInstallerClassMappedPropertyLocales.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140A69BD4 (_CmSetInstallerClassMappedProperty.c)
 */

__int64 __fastcall PnpDispatchInstallerClass(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
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
  unsigned int InstallerClassMappedProperty; // eax
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
                    InstallerClassMappedProperty = CmSetInstallerClassMappedProperty(
                                                     a1,
                                                     a2,
                                                     *((_QWORD *)a5 + 2),
                                                     a5[6],
                                                     *((_QWORD *)a5 + 4),
                                                     a5[10]);
                  else
                    InstallerClassMappedProperty = -1073741811;
                }
                else
                {
                  InstallerClassMappedProperty = CmGetInstallerClassMappedProperty(
                                                   a1,
                                                   a2,
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
                InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyLocales(
                                                 a1,
                                                 a2,
                                                 0,
                                                 *((_QWORD *)a5 + 1),
                                                 *((_QWORD *)a5 + 2),
                                                 a5[6],
                                                 *((_QWORD *)a5 + 4));
              }
            }
            else
            {
              InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyKeys(
                                               a1,
                                               a2,
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
            InstallerClassMappedProperty = CmGetMatchingCommonClassList(
                                             a1,
                                             2,
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
          InstallerClassMappedProperty = CmDeleteInstallerClass(a1, a2, *a5 & 0xFFFF0000);
        }
      }
      else
      {
        InstallerClassMappedProperty = CmCreateInstallerClass(
                                         a1,
                                         a2,
                                         *a5,
                                         (int)a5 + 8,
                                         (__int64)(a5 + 4),
                                         a5[5] & 0xFFFF0000);
      }
    }
    else
    {
      InstallerClassMappedProperty = CmOpenInstallerClassRegKey(
                                       a1,
                                       a2,
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
    InstallerClassMappedProperty = CmValidateInstallerClassName();
  }
  return PnpMapCmStatusToDispatchStatus(InstallerClassMappedProperty);
}
