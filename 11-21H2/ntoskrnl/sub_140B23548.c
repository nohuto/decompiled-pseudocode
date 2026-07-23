/*
 * XREFs of sub_140B23548 @ 0x140B23548
 * Callers:
 *     sub_140B233CC @ 0x140B233CC (sub_140B233CC.c)
 * Callees:
 *     sub_14084ED2C @ 0x14084ED2C (sub_14084ED2C.c)
 *     sub_14084F044 @ 0x14084F044 (sub_14084F044.c)
 */

__int64 sub_140B23548()
{
  char *v0; // rax
  __int64 result; // rax

  v0 = sub_14084F044(0LL);
  result = sub_14084ED2C((__int64)v0);
  if ( (int)result >= 0 && !byte_140C54CE8 )
  {
    dword_140C48CA0 = 0;
    dword_140C48C9C = 2;
    dword_140C48C98 = 600;
    byte_140C54CE8 = 1;
  }
  return result;
}
