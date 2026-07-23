/*
 * XREFs of sub_14050AABC @ 0x14050AABC
 * Callers:
 *     sub_140417010 @ 0x140417010 (sub_140417010.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_14050A880 @ 0x14050A880 (sub_14050A880.c)
 * Callees:
 *     sub_1403B2B00 @ 0x1403B2B00 (sub_1403B2B00.c)
 *     sub_1403B41A0 @ 0x1403B41A0 (sub_1403B41A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050EE0C @ 0x14050EE0C (sub_14050EE0C.c)
 *     sub_140510080 @ 0x140510080 (sub_140510080.c)
 */

__int64 __fastcall sub_14050AABC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int16 v4; // [rsp+60h] [rbp+30h] BYREF
  __int16 v5; // [rsp+68h] [rbp+38h] BYREF
  __int16 v6; // [rsp+70h] [rbp+40h] BYREF

  v6 = 0;
  v4 = 0;
  v5 = 0;
  if ( _InterlockedCompareExchange(&dword_140C4D0E0, 1, 0) )
  {
    while ( 1 )
      ;
  }
  result = sub_14042A5E0(0LL, a2);
  if ( byte_140C4A4A0[0] )
  {
    sub_1403B41A0(0, 0, (__int64)&v6, 2u, 0LL);
    v5 = v6;
    if ( byte_140C4A530 )
    {
      sub_1403B41A0(3, 0, (__int64)&v6, 2u, 0LL);
      v5 |= v6;
    }
    result = sub_1403B2B00(0, 0, (__int64)&v5, 2u, 0LL);
    if ( byte_140C4A530 )
      result = sub_1403B2B00(3, 0, (__int64)&v5, 2u, 0LL);
  }
  if ( dword_140C4D0E4 && byte_140C4A4D0 )
  {
    if ( byte_140C4C449 )
      sub_14050EE0C(5LL);
    sub_1403B41A0(1, 0, (__int64)&v4, 2u, 0LL);
    v4 = v4 & 0x203 | ((dword_140C4D0E4 & 7 | 8) << 10);
    result = sub_1403B2B00(1, 0, (__int64)&v4, 2u, 0LL);
    if ( byte_140C4A560 )
    {
      sub_1403B41A0(4, 0, (__int64)&v4, 2u, 0LL);
      v4 = v4 & 0x203 | ((((unsigned int)dword_140C4D0E4 >> 4) & 7 | 8) << 10);
      result = sub_1403B2B00(4, 0, (__int64)&v4, 2u, 0LL);
    }
  }
  if ( byte_140C4BFC8 )
    return sub_140510080(2LL, v3);
  return result;
}
