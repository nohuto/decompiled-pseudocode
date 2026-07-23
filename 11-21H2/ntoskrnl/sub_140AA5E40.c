/*
 * XREFs of sub_140AA5E40 @ 0x140AA5E40
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 */

unsigned __int8 __fastcall sub_140AA5E40(__int64 a1)
{
  __int64 v2; // rax
  const char *v3; // rbx
  const char *v4; // rdx
  const char *v5; // rcx
  unsigned __int8 result; // al
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const char *v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  DbgPrintEx(0x5Du, 0, "IRP_MJ_PNP.");
  v2 = *(unsigned __int8 *)(a1 + 1);
  v3 = "(Bogus)";
  if ( (unsigned __int8)v2 > 0x18u )
  {
    v5 = "IRP_MN_BOGUS";
    if ( (_BYTE)v2 != 0xFF )
      v5 = "(Bogus)";
    sub_1405FDF9C(v5);
  }
  else
  {
    sub_1405FDF9C(off_140A75530[v2]);
  }
  result = *(_BYTE *)(a1 + 1);
  if ( result != 7 )
  {
    if ( result == 12 )
    {
      v14 = *(_DWORD *)(a1 + 8);
      if ( v14 )
      {
        if ( v14 == 1 )
          v3 = "(DeviceTextLocationInformation)";
      }
      else
      {
        v3 = "(DeviceTextDescription)";
      }
    }
    else
    {
      if ( result <= 0xEu )
        return result;
      if ( result <= 0x10u )
        return DbgPrintEx(
                 0x5Du,
                 0,
                 "(WhichSpace=%x, Buffer=%p, Offset=%x, Length=%x)",
                 *(_DWORD *)(a1 + 8),
                 *(const void **)(a1 + 16),
                 *(_DWORD *)(a1 + 24),
                 *(_DWORD *)(a1 + 32));
      if ( result == 18 )
      {
        v4 = "(False)";
        v10 = "(True)";
LABEL_23:
        if ( !*(_BYTE *)(a1 + 8) )
          v10 = v4;
        return sub_1405FDF9C(v10, v4);
      }
      if ( result != 19 )
      {
        if ( result != 22 )
          return result;
        v7 = *(_DWORD *)(a1 + 16);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            sub_1405FDF9C("(DeviceUsageTypePaging");
            goto LABEL_22;
          }
          v9 = v8 - 1;
          if ( !v9 )
          {
            sub_1405FDF9C("(DeviceUsageTypeHibernation");
            goto LABEL_22;
          }
          if ( v9 == 1 )
          {
            sub_1405FDF9C("(DeviceUsageTypeDumpFile");
LABEL_22:
            v4 = ", InPath=FALSE)";
            v10 = ", InPath=TRUE)";
            goto LABEL_23;
          }
        }
        else
        {
          v3 = "(DeviceUsageTypeUndefined";
        }
        sub_1405FDF9C(v3);
        goto LABEL_22;
      }
      v11 = *(_DWORD *)(a1 + 8);
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
              v3 = "(BusQueryInstanceID)";
          }
          else
          {
            v3 = "(BusQueryCompatibleIDs)";
          }
        }
        else
        {
          v3 = "(BusQueryHardwareIDs)";
        }
      }
      else
      {
        v3 = "(BusQueryDeviceID)";
      }
    }
    return sub_1405FDF9C(v3, v4);
  }
  v15 = *(_DWORD *)(a1 + 8);
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
      return sub_1405FDF9C("(EjectionRelations)", v4);
    v17 = v16 - 1;
    if ( !v17 )
      return sub_1405FDF9C("(PowerRelations)", v4);
    v18 = v17 - 1;
    if ( !v18 )
      return sub_1405FDF9C("(RemovalRelations)", v4);
    if ( v18 == 1 )
      return sub_1405FDF9C("(TargetDeviceRelation)", v4);
    return sub_1405FDF9C(v3, v4);
  }
  v10 = "(BusRelations)";
  return sub_1405FDF9C(v10, v4);
}
