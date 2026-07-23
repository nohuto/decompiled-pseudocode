/*
 * XREFs of sub_1405330B8 @ 0x1405330B8
 * Callers:
 *     sub_140530474 @ 0x140530474 (sub_140530474.c)
 *     sub_1405311A8 @ 0x1405311A8 (sub_1405311A8.c)
 *     sub_140532C98 @ 0x140532C98 (sub_140532C98.c)
 *     sub_140532FD0 @ 0x140532FD0 (sub_140532FD0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405313B4 @ 0x1405313B4 (sub_1405313B4.c)
 *     sub_1405323B0 @ 0x1405323B0 (sub_1405323B0.c)
 *     sub_14053292C @ 0x14053292C (sub_14053292C.c)
 */

__int64 __fastcall sub_1405330B8(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v11; // r14
  __int128 v12; // xmm0
  char v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // edi
  __int16 v18; // ax
  __int128 v19; // rax
  __int128 v20; // rt0
  unsigned __int8 v21; // tt
  char v23; // [rsp+50h] [rbp-59h]
  unsigned int v24; // [rsp+58h] [rbp-51h] BYREF
  __int64 v25; // [rsp+60h] [rbp-49h] BYREF
  __int64 v26; // [rsp+68h] [rbp-41h]
  __int128 v27; // [rsp+70h] [rbp-39h]
  __int128 v28; // [rsp+80h] [rbp-29h] BYREF
  __int128 v29; // [rsp+90h] [rbp-19h] BYREF

  v11 = *(_QWORD *)(a1 + 24) + 32LL * a2;
  v24 = a2;
  v23 = 0;
  v26 = 0x10000LL;
  v12 = *(_OWORD *)(v11 + 16);
  v28 = *(_OWORD *)v11;
  v29 = v12;
  if ( (v28 & 1) != 0 && !a7 )
  {
    v26 = WORD4(v28);
    v23 = 1;
  }
  v13 = 0;
  v14 = 0LL;
  if ( a4 )
  {
    if ( (v28 & 0x80000000000000LL) != 0 )
    {
      v13 = 1;
      v14 = (DWORD2(v28) & 0xFFFF0000 | ((*((_QWORD *)&v28 + 1) & 0xFFFFF80000FFFFFFuLL | ((unsigned __int64)v28 >> 34) & 0x7000000) >> 11)) >> 13;
    }
  }
  else if ( a3 )
  {
    v13 = 1;
    v14 = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a3 + 40)).QuadPart >> 12;
  }
  v15 = 0LL;
  v25 = 0LL;
  if ( a5 )
  {
    v17 = *(_DWORD *)(a5 + 4);
    if ( v17 == 1 )
    {
      v18 = sub_1405323B0(a1, (int *)&v24, (unsigned __int64 *)&v25);
      v15 = v25;
      LOWORD(v16) = v18;
    }
    else
    {
      v16 = *(_DWORD *)(a5 + 48);
      if ( v17 == 2 )
      {
        v15 = *(_QWORD *)(a5 + 40) >> 12;
        goto LABEL_17;
      }
    }
  }
  else
  {
    LOWORD(v16) = WORD4(v28);
    if ( (v28 & 0xE00) == 0x800 )
    {
      v17 = 2;
      v15 = (__int64)((_QWORD)v28 << 12) >> 24;
LABEL_17:
      v25 = v15;
      goto LABEL_18;
    }
    v17 = 0;
  }
LABEL_18:
  sub_1405313B4(a1, v14, v13, v16, v17, v15, &v29, 0LL, (__int64)&v28);
  *((_QWORD *)&v19 + 1) = *(_QWORD *)(v11 + 8);
  *(_QWORD *)&v27 = *(_QWORD *)v11;
  *(_QWORD *)&v19 = v27;
  *((_QWORD *)&v27 + 1) = *((_QWORD *)&v19 + 1);
  do
  {
    v20 = v19;
    v21 = _InterlockedCompareExchange128(
            (volatile signed __int64 *)v11,
            *((signed __int64 *)&v28 + 1),
            v28,
            (signed __int64 *)&v20);
    v19 = v20;
    v27 = v20;
  }
  while ( !v21 );
  if ( v23 )
    *(_QWORD *)&v19 = sub_14053292C(a1, v24, a6);
  if ( a10 )
  {
    *(_QWORD *)&v19 = v26;
    *a10 = v26;
  }
  return v19;
}
