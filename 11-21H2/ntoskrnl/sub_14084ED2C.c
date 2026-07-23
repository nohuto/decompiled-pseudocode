/*
 * XREFs of sub_14084ED2C @ 0x14084ED2C
 * Callers:
 *     sub_140927240 @ 0x140927240 (sub_140927240.c)
 *     sub_140B23548 @ 0x140B23548 (sub_140B23548.c)
 * Callees:
 *     sub_14084ED68 @ 0x14084ED68 (sub_14084ED68.c)
 */

__int64 __fastcall sub_14084ED2C(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 4718662LL;
  v4[1] = L"\\KernelObjects\\SystemErrorPortReady";
  v1 = sub_14084ED68(v4, a1 + 24);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
