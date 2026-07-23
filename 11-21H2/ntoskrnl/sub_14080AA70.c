/*
 * XREFs of sub_14080AA70 @ 0x14080AA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406BAF60 @ 0x1406BAF60 (sub_1406BAF60.c)
 *     sub_1406BAFD4 @ 0x1406BAFD4 (sub_1406BAFD4.c)
 *     sub_1406BB4A0 @ 0x1406BB4A0 (sub_1406BB4A0.c)
 *     sub_140A21C40 @ 0x140A21C40 (sub_140A21C40.c)
 *     sub_140A22520 @ 0x140A22520 (sub_140A22520.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14080AA70(int a1, PCWSTR *a2, __int64 a3, int a4)
{
  bool v6; // bp
  __int64 v7; // rdx
  int v8; // ebx
  int v10; // eax
  int v11; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 1;
  v6 = sub_1406BAF60(a1, (__int64)a2, a3, a4);
  v8 = sub_1406BAFD4(0, (__int64)L"WindowsSysPartDevice", 0, 0LL, 0, a2);
  if ( v8 < 0 )
  {
    if ( v6 || (v8 = sub_1406BAFD4(0, (__int64)L"FirmwareBootDevice", 1, 0LL, 0, a2), v8 < 0) )
    {
      if ( a1 == 1 )
      {
        v10 = sub_140A22520(a2);
      }
      else
      {
        if ( a1 != 2 )
          return (unsigned int)-1073741637;
        v10 = sub_140A21C40(0LL, v7, a2);
      }
      if ( v10 >= 0 )
      {
        v8 = sub_1406BB4A0(*a2, &v12);
        if ( v8 >= 0 )
        {
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v12;
          return (unsigned int)v8;
        }
      }
      else
      {
        v8 = v10;
        if ( v10 != -1073740719
          || !v6
          || a1 != 2
          || (int)sub_1406BAFD4(0, (__int64)L"FirmwareBootDevice", 1, &v11, 1, a2) < 0 )
        {
          return (unsigned int)v8;
        }
      }
      return 0;
    }
  }
  return (unsigned int)v8;
}
