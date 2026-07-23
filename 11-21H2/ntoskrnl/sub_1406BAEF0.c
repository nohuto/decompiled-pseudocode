/*
 * XREFs of sub_1406BAEF0 @ 0x1406BAEF0
 * Callers:
 *     sub_1406BAEA0 @ 0x1406BAEA0 (sub_1406BAEA0.c)
 * Callees:
 *     sub_1406BAF60 @ 0x1406BAF60 (sub_1406BAF60.c)
 *     sub_1406BAFD4 @ 0x1406BAFD4 (sub_1406BAFD4.c)
 *     sub_1406BB4A0 @ 0x1406BB4A0 (sub_1406BB4A0.c)
 *     sub_140A21C40 @ 0x140A21C40 (sub_140A21C40.c)
 *     sub_140A22650 @ 0x140A22650 (sub_140A22650.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406BAEF0(int a1, PCWSTR *a2)
{
  __int64 v4; // rdx
  char v5; // bp
  int v6; // r8d
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // r8d
  int v11; // [rsp+60h] [rbp+18h] BYREF
  const WCHAR *v12; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v11 = 1;
  v5 = sub_1406BAF60();
  if ( v5
    || (LOBYTE(v6) = 1,
        v7 = sub_1406BAFD4(1, (unsigned int)L"FirmwareBootDevice", v6, 0, 0, (__int64)a2),
        (v7 & 0x80000000) != 0) )
  {
    if ( a1 == 1 )
    {
      v9 = sub_140A22650(a2);
    }
    else
    {
      if ( a1 != 2 )
        return (unsigned int)-1073741637;
      v9 = sub_140A21C40(1LL, v4, a2);
    }
    if ( v9 >= 0 )
    {
      v7 = sub_1406BB4A0(*a2);
      if ( (v7 & 0x80000000) == 0 )
      {
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v12;
        return v7;
      }
    }
    else
    {
      v7 = v9;
      if ( v9 != -1073740719 )
        return v7;
      if ( !v5 )
        return v7;
      if ( a1 != 2 )
        return v7;
      LOBYTE(v10) = 1;
      if ( (int)sub_1406BAFD4(1, (unsigned int)L"FirmwareBootDevice", v10, (unsigned int)&v11, 1, (__int64)a2) < 0 )
        return v7;
    }
    return 0;
  }
  return v7;
}
