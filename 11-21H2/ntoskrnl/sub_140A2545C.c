/*
 * XREFs of sub_140A2545C @ 0x140A2545C
 * Callers:
 *     sub_140956298 @ 0x140956298 (sub_140956298.c)
 *     sub_140A2C7A8 @ 0x140A2C7A8 (sub_140A2C7A8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A255C0 @ 0x140A255C0 (sub_140A255C0.c)
 */

__int64 __fastcall sub_140A2545C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  _QWORD SecurityDescriptorLength[11]; // [rsp+40h] [rbp-69h] BYREF

  memset(SecurityDescriptorLength, 0, sizeof(SecurityDescriptorLength));
  v11 = *(_QWORD *)(a1 + 504);
  SecurityDescriptorLength[2] = a3;
  SecurityDescriptorLength[3] = __PAIR64__(a5, a4);
  SecurityDescriptorLength[5] = a7;
  SecurityDescriptorLength[4] = a6;
  if ( v11 )
  {
    v12 = sub_14042A5E0(a1, a2);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = sub_140A255C0(
          a1,
          a2,
          SecurityDescriptorLength[2],
          SecurityDescriptorLength[3],
          SHIDWORD(SecurityDescriptorLength[3]),
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SWORD2(SecurityDescriptorLength[5]));
  v14 = v13;
  if ( !v11 )
    return v14;
  LODWORD(SecurityDescriptorLength[0]) = v13;
  v15 = sub_14042A5E0(a1, a2);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v14;
  if ( v15 == -1073741536 )
    return LODWORD(SecurityDescriptorLength[0]);
  v17 = v14;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
