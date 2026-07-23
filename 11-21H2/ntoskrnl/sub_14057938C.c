/*
 * XREFs of sub_14057938C @ 0x14057938C
 * Callers:
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_14057958C @ 0x14057958C (sub_14057958C.c)
 *     sub_1405795C4 @ 0x1405795C4 (sub_1405795C4.c)
 */

__int64 __fastcall sub_14057938C(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int LockArray_high; // edx
  bool v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx

  result = (unsigned int)dword_140C2A954;
  if ( dword_140C2A954 > 0 )
  {
    while ( 1 )
    {
      result = (unsigned int)dword_140C2A948;
      if ( dword_140C2A948 )
        break;
      _mm_pause();
    }
    if ( byte_140C2A958 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      v5 = a1 >> 4 == LockArray_high;
      LOBYTE(a3) = dword_140C2A94C == LockArray_high;
      v6 = a1 >> 2;
      LOBYTE(v6) = v6 & 3;
      v7 = (unsigned int)(v6 + 1);
      LOBYTE(v6) = v5;
      if ( (int)sub_1405795C4(v6, v7, a3) < 0 )
        sub_14057958C(5LL);
      sub_14042A5E0(0LL, v8);
      HalReturnToFirmware(3);
    }
  }
  return result;
}
