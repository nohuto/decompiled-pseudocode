/*
 * XREFs of sub_1406E636C @ 0x1406E636C
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406E636C(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // ebp
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _WORD v12[36]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  P = 0LL;
  memset(v12, 0, sizeof(v12));
  v12[0] = 6171;
  v7 = sub_14074CA9C(a1, (unsigned int)v12, -1073741637, 0, (__int64)&P);
  if ( v7 >= 0 )
  {
    v9 = P;
    if ( P )
    {
      if ( a3 )
        *a3 = *((_DWORD *)P + 4);
      if ( a4 )
        *a4 = v9[5];
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 16);
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 64) )
          {
            DbgPrint("*** IopQueryLegacyBusInformation - Driver %wZ returned STATUS_SUCCESS\n", v11 + 56);
            DbgPrint("    for IRP_MN_QUERY_LEGACY_BUS_INFORMATION, and a NULL POINTER.\n");
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
