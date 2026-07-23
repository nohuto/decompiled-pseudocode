/*
 * XREFs of sub_14072427C @ 0x14072427C
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_1407240A0 @ 0x1407240A0 (sub_1407240A0.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     sub_1405F4E30 @ 0x1405F4E30 (sub_1405F4E30.c)
 *     sub_1406BC1E4 @ 0x1406BC1E4 (sub_1406BC1E4.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 */

char __fastcall sub_14072427C(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5)
{
  char v6; // bp
  char v8; // di
  char v9; // si
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rdx
  char v13; // r15
  char v14; // al
  char v15; // bl
  char v17; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v18[39]; // [rsp+21h] [rbp-27h] BYREF

  v6 = 0;
  v17 = 0;
  v18[0] = 0;
  v8 = a3;
  v9 = a2;
  v10 = sub_140724320(130LL, a2, a3, a4);
  LOBYTE(v11) = v8;
  LOBYTE(v12) = v9;
  v13 = v10;
  v14 = sub_140724320(131LL, v12, v11, a4);
  v15 = v14;
  if ( (v13 || v14) && sub_1406BC1E4(0, a1) )
  {
    if ( v13 && v15 && a1 && *a1 || (sub_1405F4E30(a1, &v17, v18), v13) && v17 )
    {
      *a5 = 130;
      return 1;
    }
    if ( v15 && v18[0] )
    {
      *a5 = 131;
      return 1;
    }
  }
  return v6;
}
