/*
 * XREFs of sub_1406BAF60 @ 0x1406BAF60
 * Callers:
 *     sub_1406BAEF0 @ 0x1406BAEF0 (sub_1406BAEF0.c)
 *     sub_14080AA70 @ 0x14080AA70 (sub_14080AA70.c)
 *     sub_140A22790 @ 0x140A22790 (sub_140A22790.c)
 * Callees:
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     sub_1406BB294 @ 0x1406BB294 (sub_1406BB294.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_1406BAF60(int a1, __int64 a2, __int64 a3, int a4)
{
  bool v4; // bl
  int v6; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  Str = 0LL;
  v6 = 0;
  if ( (int)sub_1406BB294(
              a1,
              (unsigned int)L"SystemStartOptions",
              (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              a4,
              (__int64)&Str,
              (__int64)&v6) >= 0 )
  {
    v4 = wcsstr(Str, L"MININT") != 0LL;
    ExFreePoolWithTag(Str, 0);
  }
  return v4;
}
