/*
 * XREFs of sub_140812540 @ 0x140812540
 * Callers:
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 * Callees:
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool sub_140812540()
{
  bool v0; // bl
  int v2; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  Str = 0LL;
  v2 = 0;
  if ( (int)sub_140812F84(
              0LL,
              L"SystemStartOptions",
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              1LL,
              &Str,
              &v2) >= 0 )
  {
    v0 = wcsstr(Str, L"MININT") != 0LL;
    ExFreePoolWithTag(Str, 0x4B444342u);
  }
  return v0;
}
