/*
 * XREFs of sub_140940290 @ 0x140940290
 * Callers:
 *     sub_140946FEC @ 0x140946FEC (sub_140946FEC.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14082EC0C @ 0x14082EC0C (sub_14082EC0C.c)
 */

__int64 __fastcall sub_140940290(__int64 a1, void *a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0;
  Handle = 0LL;
  if ( a2 )
  {
    v3 = sub_14082EC0C(a1, 0x20019u, &Handle);
    if ( v3 >= 0 )
    {
      LODWORD(v5) = 8;
      v3 = sub_14077FC64(Handle, L"LastUse", &v6, a2, (unsigned int *)&v5);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
