/*
 * XREFs of sub_1406D8994 @ 0x1406D8994
 * Callers:
 *     sub_1406D8814 @ 0x1406D8814 (sub_1406D8814.c)
 *     sub_1406D88A4 @ 0x1406D88A4 (sub_1406D88A4.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406D8994(char a1, __int64 a2, char a3)
{
  int v6; // eax
  bool v7; // r8
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // esi
  _BYTE *PoolWithTag; // rdi
  __int64 *i; // rbx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // eax
  ULONG_PTR v17; // rcx
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // r14
  _BYTE *v21; // rsi
  __int64 v22; // rbx
  bool v24; // [rsp+30h] [rbp-D0h]
  _BYTE v26[16]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v27[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-80h] BYREF

  memset(P, 0, sizeof(P));
  v6 = *(_DWORD *)(a2 + 16);
  memset(v27, 0, sizeof(v27));
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = ((a1 - 4) & 0xFD) == 0;
  v8 = *(unsigned int *)(a2 + 36);
  v24 = v7;
  v9 = 0LL;
  v10 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v8 > 0x40 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v8, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v7 = ((a1 - 4) & 0xFD) == 0;
  }
  else
  {
    PoolWithTag = P;
  }
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56) && (unsigned int)v9 < *(_DWORD *)(a2 + 36); i = (__int64 *)*i )
  {
    v14 = *((_DWORD *)i + 4);
    if ( (v14 & 0x1000) == 0 && (a3 || (v14 & 4) != 0) )
    {
      v15 = i[8];
      if ( (*(_DWORD *)(v15 + 16) & 0x20000000) == 0 )
      {
        v16 = v14 & v10;
        if ( v7 )
        {
          if ( !v16 )
            goto LABEL_16;
LABEL_17:
          if ( !v7 )
            goto LABEL_18;
          v13 = v14 | v10;
        }
        else
        {
          if ( v16 )
          {
LABEL_16:
            v17 = i[8];
            *(_QWORD *)&PoolWithTag[8 * v9] = v15;
            sub_140784160(v17);
            v14 = *((_DWORD *)i + 4);
            v9 = (unsigned int)(v9 + 1);
            v7 = v24;
            goto LABEL_17;
          }
LABEL_18:
          v13 = v14 & ~v10;
        }
        *((_DWORD *)i + 4) = v13;
        continue;
      }
    }
  }
  KeReleaseMutex(&Object, 0);
  if ( (_DWORD)v9 )
  {
    memset((char *)v27 + 4, 0, 20);
    *((_QWORD *)&v27[2] + 1) = 0LL;
    v19 = *(_OWORD *)(a2 + 72);
    v20 = (unsigned int)v9;
    v21 = PoolWithTag;
    *(_OWORD *)((char *)&v27[1] + 8) = v19;
    LODWORD(v27[0]) = 48;
    do
    {
      v22 = *(_QWORD *)v21;
      LOBYTE(v18) = a1;
      sub_1407839B4(v18, *(unsigned int *)(*(_QWORD *)v21 + 56LL), (char *)&v27[1] + 8, 48LL, v27, v26);
      sub_1407838E0(&off_140C037E0, v22);
      v21 += 8;
      --v20;
    }
    while ( v20 );
  }
  if ( PoolWithTag != P )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  return 0LL;
}
