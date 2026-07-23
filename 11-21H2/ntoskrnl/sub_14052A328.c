/*
 * XREFs of sub_14052A328 @ 0x14052A328
 * Callers:
 *     sub_14051AA64 @ 0x14051AA64 (sub_14051AA64.c)
 *     sub_14051AC78 @ 0x14051AC78 (sub_14051AC78.c)
 *     sub_14051AD44 @ 0x14051AD44 (sub_14051AD44.c)
 *     sub_140529AF8 @ 0x140529AF8 (sub_140529AF8.c)
 *     sub_140529F08 @ 0x140529F08 (sub_140529F08.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140268B50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14052A328(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r8
  size_t v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // r10
  unsigned int v12; // edx
  int v13; // edx
  unsigned int v14; // r9d
  __int64 v15; // rdx
  size_t v16; // rsi
  void *v17; // r15
  unsigned __int64 v18; // rdx
  unsigned int v19; // r8d
  size_t v20; // rsi
  __int64 v21; // rdx
  _OWORD v23[3]; // [rsp+20h] [rbp-78h] BYREF

  v3 = *(_DWORD *)(a1 + 28);
  v4 = ((a3 & 0xFFF) + 4095 + *a2) & 0xFFFFFFFFFFFFF000uLL;
  *a2 = v4;
  v6 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (unsigned int)(1 << v3) * (v4 >> 12);
  memset(&v23[1], 0, 32);
  LODWORD(v9) = 0;
  v23[0] = v7;
  while ( 1 )
  {
    if ( !v8 )
      return 0LL;
    v10 = *(_DWORD *)(a1 + 24) - 1;
    if ( (unsigned int)v9 < v10 )
      break;
LABEL_9:
    v14 = *(_DWORD *)(a1 + 4LL * (unsigned int)v9 + 36);
    if ( v14 < 0x40 )
      v15 = (1LL << v14) - 1;
    else
      LODWORD(v15) = -1;
    v16 = v8;
    v17 = (void *)(v7 + (((unsigned int)v15 & (unsigned int)(v6 >> *(_DWORD *)(a1 + 4LL * (unsigned int)v9 + 60))) << v3));
    v18 = (1 << v14 << v3)
        - (unsigned __int64)(((unsigned int)v15 & (unsigned int)(v6 >> *(_DWORD *)(a1 + 4LL * (unsigned int)v9 + 60))) << v3);
    if ( v18 <= v8 )
      v16 = v18;
    memset(v17, 0, v16);
    if ( !byte_140C4BE80 )
      KeInvalidateRangeAllCachesNoIpi((__int64)v17, v16);
    v8 -= v16;
    v19 = 0;
    v20 = v16 >> v3 << 12;
    if ( *(_DWORD *)(a1 + 24) != 1 )
    {
      do
      {
        v21 = 1LL << *(_DWORD *)(a1 + 4LL * (unsigned int)(v9 - 1) + 60);
        if ( (v21 & (v6 + v20)) == (v21 & v6) && v8 )
          break;
        ++v19;
        LODWORD(v9) = v9 - 1;
      }
      while ( v19 < *(_DWORD *)(a1 + 24) - 1 );
    }
    v6 += v20;
    v7 = *((_QWORD *)v23 + (unsigned int)v9);
  }
  v11 = (unsigned int)v9;
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 4 * v11 + 36);
    v13 = v12 < 0x40 ? (1LL << v12) - 1 : -1;
    v7 = *(_QWORD *)(v7
                   + (1 << *(_DWORD *)(a1 + 4 * v11 + 36) << v3)
                   + 8LL * (v13 & (unsigned int)(v6 >> *(_DWORD *)(a1 + 4 * v11 + 60))));
    if ( !v7 )
      return 3221225485LL;
    v9 = (unsigned int)(v9 + 1);
    v11 = (unsigned int)v9;
    *((_QWORD *)v23 + v9) = v7;
    if ( (unsigned int)v9 >= v10 )
      goto LABEL_9;
  }
}
