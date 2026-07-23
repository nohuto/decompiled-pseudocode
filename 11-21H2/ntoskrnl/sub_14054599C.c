/*
 * XREFs of sub_14054599C @ 0x14054599C
 * Callers:
 *     sub_140653AA4 @ 0x140653AA4 (sub_140653AA4.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char sub_14054599C()
{
  _QWORD *v0; // rbx
  unsigned __int64 *v1; // r12
  unsigned __int64 v2; // rsi
  int v3; // r15d
  int v4; // eax
  unsigned __int64 *v5; // r14
  __int16 v6; // di
  __int64 v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v12; // [rsp+38h] [rbp-D0h]
  __m256i v13; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+88h] [rbp-80h]
  _BYTE MemoryDescriptorList[560]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v15) = 0;
  memset(&v14.m256i_u64[1], 0, 24);
  v14.m256i_i32[0] = 0;
  memset(&v13.m256i_u64[1], 0, 24);
  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  v0 = sub_14039DF90((PHYSICAL_ADDRESS *)&v14.m256i_i64[1], 1, 0LL, 0LL);
  v12 = sub_14039DF90((PHYSICAL_ADDRESS *)&v13.m256i_i64[1], 2, 0LL, 0LL);
  v0[1] = 0LL;
  v1 = v12;
  *v0 = -1LL;
  if ( !(unsigned __int16)HvlInvokeHypercall(74) )
  {
    v2 = *v12;
    v0[1] = 0LL;
    *v0 = -1LL;
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = 512;
        if ( v2 < 0x200 )
          v4 = v2;
        v3 ^= (v3 ^ v4) & 0xFFF;
        v11 = HvlInvokeHypercall(73);
        v5 = v1;
        v2 -= WORD2(v11) & 0xFFF;
        if ( (v11 & 0xFFF00000000LL) != 0 )
        {
          v6 = WORD2(v11);
          do
          {
            *(_QWORD *)MemoryDescriptorList = 0LL;
            v7 = v6 & 0xFFF;
            *(_WORD *)&MemoryDescriptorList[10] = 0;
            *(_QWORD *)&MemoryDescriptorList[32] = 0LL;
            *(_DWORD *)&MemoryDescriptorList[44] = 0;
            if ( (unsigned int)v7 > 0x40 )
              v7 = 64LL;
            *(_DWORD *)&MemoryDescriptorList[40] = (_DWORD)v7 << 12;
            *(_WORD *)&MemoryDescriptorList[8] = 8 * (v7 + 6);
            if ( (_DWORD)v7 )
            {
              v8 = (unsigned int)v7;
              v9 = &MemoryDescriptorList[48];
              do
              {
                *v9 = *(_QWORD *)((char *)v9 + (char *)v5 - &MemoryDescriptorList[48]);
                ++v9;
                --v8;
              }
              while ( v8 );
            }
            MmFreePagesFromMdl((PMDL)MemoryDescriptorList);
            v5 += v7;
            v6 ^= (v6 ^ (v6 - v7)) & 0xFFF;
          }
          while ( (v6 & 0xFFF) != 0 );
          v1 = v12;
        }
      }
      while ( !(_WORD)v11 && v2 );
    }
  }
  sub_14039D8F0((__int64)&v13.m256i_i64[1]);
  return sub_14039D8F0((__int64)&v14.m256i_i64[1]);
}
