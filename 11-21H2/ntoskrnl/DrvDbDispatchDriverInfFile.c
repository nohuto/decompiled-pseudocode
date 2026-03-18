/*
 * XREFs of DrvDbDispatchDriverInfFile @ 0x140789110
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetObjectContext @ 0x1407882D4 (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x140789970 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x140789AA4 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140A2DA0C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A2E90C (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x140A2EF0C (DrvDbGetObjectList.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140A2FC40 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x140A30458 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverInfFile(__int64 a1, __int64 a2, int a3, __int64 a4, int *a5)
{
  int ObjectContext; // eax
  int v7; // r9d
  int v8; // r10d
  __int64 v9; // r8
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int DriverInfFileMappedProperty; // eax
  int v21; // r8d
  __int64 v22; // [rsp+20h] [rbp-38h]
  int v23[6]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v23 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v23);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = v23[0];
  v11 = *(unsigned int *)(*(_QWORD *)v23 + 12LL);
  if ( (v11 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v11 )
    {
      LODWORD(v9) = -1073740697;
      return (unsigned int)v9;
    }
    if ( v8 == 2 )
    {
      if ( !*((_BYTE *)a5 + 4) )
        goto LABEL_25;
    }
    else
    {
      if ( v8 <= 2 )
        goto LABEL_3;
      if ( v8 > 4 )
      {
        if ( v8 > 6 && v8 != 8 )
        {
          if ( v8 != 9 )
            goto LABEL_3;
          goto LABEL_24;
        }
LABEL_25:
        v11 = (unsigned int)v11 >> 31;
LABEL_26:
        v9 = (_BYTE)v11 == 0 ? 0xC0000022 : 0;
        if ( !(_BYTE)v11 )
          return (unsigned int)v9;
        goto LABEL_3;
      }
    }
LABEL_24:
    v11 = (unsigned int)v11 >> 30;
    LOBYTE(v11) = v11 & 1;
    goto LABEL_26;
  }
LABEL_3:
  v12 = v8 - 1;
  if ( !v12 )
  {
    DriverInfFileMappedProperty = DrvDbValidateDriverInfFileName(v11, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    LOBYTE(v7) = *((_BYTE *)a5 + 4);
    DriverInfFileMappedProperty = DrvDbOpenDriverInfFileRegKey(
                                    v23[0],
                                    a2,
                                    *a5,
                                    v7,
                                    *((_QWORD *)a5 + 1),
                                    (__int64)(a5 + 4));
LABEL_11:
    LODWORD(v9) = DriverInfFileMappedProperty;
    return (unsigned int)v9;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            DriverInfFileMappedProperty = DrvDbSetDriverInfFileMappedProperty(
                                            v23[0],
                                            a2,
                                            *(_QWORD *)a5,
                                            *((_QWORD *)a5 + 2),
                                            a5[6],
                                            *((_QWORD *)a5 + 4),
                                            a5[10]);
          }
          else
          {
            DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedProperty(
                                            v23[0],
                                            a2,
                                            *(_QWORD *)a5,
                                            *((_QWORD *)a5 + 2),
                                            *((_QWORD *)a5 + 3),
                                            *((_QWORD *)a5 + 4),
                                            a5[10],
                                            *((_QWORD *)a5 + 6));
          }
        }
        else
        {
          LODWORD(v22) = a5[8];
          DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedPropertyKeys(
                                          v23[0],
                                          a2,
                                          *(_QWORD *)a5,
                                          *((_QWORD *)a5 + 3),
                                          v22,
                                          *((HANDLE *)a5 + 5));
        }
      }
      else
      {
        DriverInfFileMappedProperty = DrvDbGetObjectList(
                                        v23[0],
                                        3,
                                        *(_QWORD *)a5,
                                        *((_QWORD *)a5 + 1),
                                        *((_QWORD *)a5 + 2),
                                        a5[6],
                                        *((_QWORD *)a5 + 4),
                                        0);
      }
    }
    else
    {
      DriverInfFileMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v23, 3LL, a2);
    }
    goto LABEL_11;
  }
  v21 = *a5;
  v23[0] = 0;
  LOBYTE(v7) = 1;
  LODWORD(v9) = DrvDbOpenDriverInfFileRegKey(v10, a2, v21, v7, (__int64)(a5 + 2), (__int64)v23);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = v23[0] == 1;
  return (unsigned int)v9;
}
