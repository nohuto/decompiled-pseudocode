/*
 * XREFs of sub_1407FABA0 @ 0x1407FABA0
 * Callers:
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 * Callees:
 *     sub_140281620 @ 0x140281620 (sub_140281620.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_140386DC4 @ 0x140386DC4 (sub_140386DC4.c)
 *     sub_140386F14 @ 0x140386F14 (sub_140386F14.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 */

unsigned __int64 __fastcall sub_1407FABA0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD v10[16]; // [rsp+40h] [rbp-79h] BYREF
  _OWORD v11[3]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v12; // [rsp+F0h] [rbp+37h]
  int v13; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+128h] [rbp+6Fh] BYREF
  HANDLE SecureHandle; // [rsp+130h] [rbp+77h] BYREF

  v1 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  SecureHandle = 0LL;
  memset(v10, 0, sizeof(v10));
  v10[12] = *((_QWORD *)KeGetCurrentThread() + 23);
  v10[11] = v10[12];
  v10[2] = 0x10000LL;
  v10[1] = 0x7FFFFFFEFFFFLL;
  v10[9] = &SecureHandle;
  v10[3] = a1;
  v10[5] = 0x200003000LL;
  v10[8] = 0x8000000100000001uLL;
  BYTE1(v10[7]) = 0;
  v13 = sub_1407BE3C0((__int64)v10, 0LL, (__int64 *)&v14);
  if ( v13 < 0 )
    return v1;
  v3 = sub_140281620((unsigned __int64)SecureHandle ^ v10[12] ^ qword_140C50680, &v13);
  v4 = v3;
  if ( !v3 )
    return v1;
  if ( (unsigned int)sub_140386F14(v3) )
  {
    v5 = ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF;
    v6 = sub_140313C70(v5);
    sub_1402CE240(v14, v6, v10[12], v4, 1, v11);
    if ( (int)sub_140386DC4(v14, v5) < 0 )
    {
      v8 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
      v9 = *(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32);
      LOBYTE(v13) = 0;
      sub_1402ECEB0(v4, (int)&v13, v8, v9, v10[12], 0);
    }
    else
    {
      sub_14032E700((char *)v4);
      return v14;
    }
    return v1;
  }
  sub_14032E700((char *)v4);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
