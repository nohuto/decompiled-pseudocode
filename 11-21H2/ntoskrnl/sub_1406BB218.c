/*
 * XREFs of sub_1406BB218 @ 0x1406BB218
 * Callers:
 *     sub_1406BAFD4 @ 0x1406BAFD4 (sub_1406BAFD4.c)
 *     sub_140A22790 @ 0x140A22790 (sub_140A22790.c)
 * Callees:
 *     _wcslwr @ 0x1403E14F0 (_wcslwr.c)
 *     sub_1406BB294 @ 0x1406BB294 (sub_1406BB294.c)
 */

__int64 __fastcall sub_1406BB218(int a1, wchar_t **a2, __int64 a3, int a4)
{
  int v5; // edi
  wchar_t *v6; // rbx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *String; // [rsp+58h] [rbp+20h] BYREF

  String = 0LL;
  v8 = 0;
  v5 = sub_1406BB294(
         a1,
         a1,
         (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
         a4,
         (__int64)&String,
         (__int64)&v8);
  if ( v5 >= 0 )
  {
    if ( v8 < 4 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v6 = String;
      wcslwr(String);
      *a2 = v6;
    }
  }
  return (unsigned int)v5;
}
