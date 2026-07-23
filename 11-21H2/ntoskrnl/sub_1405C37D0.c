/*
 * XREFs of sub_1405C37D0 @ 0x1405C37D0
 * Callers:
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_14033C5F0 @ 0x14033C5F0 (sub_14033C5F0.c)
 * Callees:
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     sub_140284D20 @ 0x140284D20 (sub_140284D20.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402E766C @ 0x1402E766C (sub_1402E766C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_14033FD38 @ 0x14033FD38 (sub_14033FD38.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405C37D0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  char *v10; // r10
  unsigned __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r10
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r10
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  bool v25; // zf
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // r12
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 result; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // r15
  unsigned int v35; // eax
  unsigned __int64 v36; // r8
  bool v37; // zf
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-B8h]
  char *v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v43[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v44; // [rsp+78h] [rbp-88h]
  __int128 v45; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v46[28]; // [rsp+90h] [rbp-70h] BYREF

  v42 = a2;
  v41 = a3;
  v39 = a4;
  v44 = a6;
  v45 = 0LL;
  memset(v46, 0, 0x60uLL);
  v8 = 0LL;
  *a6 = 0;
  v9 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v38 = 0LL;
  v10 = (char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL);
  v11 = *(unsigned int *)(a1 + 24) | v9;
  v40 = v10;
  v43[0] = a2 & 0xFFFFFFFFFFFF0000uLL;
  v43[1] = 0x10000LL;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) >> 12 < v11
    || ((a2 & 0xFFFFFFFFFFFF0000uLL) + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v12 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
  sub_140339C20(v10, v12, (__int64)&v45);
  v14 = HIDWORD(v45) >> byte_140C506CC;
  v25 = (*(_DWORD *)(a1 + 48) & 0x200000) == 0;
  LOWORD(v46[0]) = 2;
  v46[1] = v43;
  v46[2] = 1LL;
  v46[3] = 0LL;
  v46[4] = 0LL;
  if ( v25 )
  {
    v18 = sub_140319600(a1, a2 >> 12, 0, &v38);
    v19 = *(_QWORD *)(v38 + 8);
    v20 = ((a2 & 0xFFFFFFFFFFFFF000uLL) - v43[0]) >> 12;
    v21 = v19 + 8 * (*(unsigned int *)(v38 + 44) - (unsigned __int64)(*(_DWORD *)(v38 + 52) & 0x3FFFFFFF));
    if ( (v18 & 0xFFFFFFFFFFFFF000uLL) > v19 )
      v19 = v18 & 0xFFFFFFFFFFFFF000uLL;
    v22 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v16 = v18 - 8 * v20;
    if ( v16 < v19 )
      return 0LL;
    if ( v21 <= v22 )
      v22 = v21;
    if ( v18 + 8 * (16 - v20) > v22 )
      return 0LL;
    v17 = ((v43[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = *(_WORD *)(*(_QWORD *)v38 + 60LL) & 0x3FF;
  }
  else
  {
    v15 = *(unsigned __int16 *)(v13 + 174);
    v16 = ((v43[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = 0LL;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * v15) + 16LL);
  v38 = *(_QWORD *)(qword_140C51F48 + 8 * v15);
  *(_BYTE *)(24512LL * v14 + v23 + 3251) = 1;
  do
  {
    v46[v8 + 12] = sub_140317A10(v16 + 8 * v8);
    ++v8;
  }
  while ( v8 < 0x10 );
  v24 = 0LL;
  do
  {
    if ( a5 )
    {
      if ( sub_14033FD38(v46[v24 + 12]) )
        break;
      v25 = ((v26 >> 5) & 0x1F) == a5;
    }
    else
    {
      v25 = v46[v24 + 12] == 0LL;
    }
    if ( !v25 || v17 && sub_1402E766C(v17, a5) )
      break;
    if ( ++v24 == v41 )
      break;
  }
  while ( v24 < 0x10 );
  v27 = -1LL;
  if ( v24 == 16 )
  {
    v28 = (__int64)v40;
    if ( sub_140284D20((__int64)v46, (__int64)v40, a1) != 16 )
      return 0LL;
    v29 = sub_14033D7D0(v39);
    v30 = sub_140267060(v38, v43[0], 2u, v14, v29, 4, 0LL);
    if ( v30 )
    {
      sub_1402C6AA0(v30, 2, 2, 1, 0LL, 0LL, 0LL);
      return v30;
    }
  }
  else
  {
    v24 = 0LL;
    while ( 1 )
    {
      v41 = v46[v24 + 12];
      if ( (v41 & 1) != 0 )
        break;
      if ( ++v24 >= 0x10 )
        goto LABEL_33;
    }
    v32 = sub_140317A10((unsigned __int64)&v41);
    v27 = (v32 >> 12) & 0xFFFFFFFFFFLL;
    if ( (unsigned __int16)v32 >> 12 != v24 )
      return 0LL;
LABEL_33:
    v28 = (__int64)v40;
  }
  v33 = (v42 >> 9) & 0x7FFFFFFFF8LL;
  v42 = 1LL;
  v34 = ((__int64)(v33 - ((v43[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  v35 = sub_14033D7D0(v39);
  result = sub_140323D70(v38, v28, v36, v12, v35, 258, v34, &v42);
  if ( !result )
    return 0LL;
  if ( v24 == 16 )
    v37 = (((result + 0x220000000000LL) / 48) & 0xF) == v34;
  else
    v37 = v27 + ((__int64)(v33 - ((v43[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v24 == (result + 0x220000000000LL) / 48;
  if ( !v37 )
    *v44 = 1;
  return result;
}
