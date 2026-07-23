/*
 * XREFs of sub_14082E998 @ 0x14082E998
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14082EC0C @ 0x14082EC0C (sub_14082EC0C.c)
 */

__int64 __fastcall sub_14082E998(__int64 a1, void *a2)
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
    v3 = sub_14082EC0C(a1, 131097LL, &Handle);
    if ( v3 >= 0 )
    {
      LODWORD(v5) = 4;
      v3 = sub_14077FC64(Handle, L"Id", &v6, a2, (unsigned int *)&v5);
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
