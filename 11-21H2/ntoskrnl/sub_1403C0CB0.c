/*
 * XREFs of sub_1403C0CB0 @ 0x1403C0CB0
 * Callers:
 *     sub_14082910C @ 0x14082910C (sub_14082910C.c)
 *     sub_140B01A8C @ 0x140B01A8C (sub_140B01A8C.c)
 * Callees:
 *     sub_1403C0D08 @ 0x1403C0D08 (sub_1403C0D08.c)
 */

__int64 __fastcall sub_1403C0CB0(
        PCWSTR a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 result; // rax
  unsigned int v10; // ecx

  result = sub_1403C0D08(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER", a1, 4uLL, a2);
  if ( (int)result < 0 )
  {
    *a2 = a3;
    return result;
  }
  v10 = *a2;
  if ( *a2 != a6 )
  {
    if ( v10 < a4 )
    {
      *a2 = a4;
      return 3221226034LL;
    }
    if ( v10 > a5 )
    {
      *a2 = a5;
      return 3221226034LL;
    }
  }
  return result;
}
