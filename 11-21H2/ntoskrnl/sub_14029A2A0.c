/*
 * XREFs of sub_14029A2A0 @ 0x14029A2A0
 * Callers:
 *     sub_14029A6E0 @ 0x14029A6E0 (sub_14029A6E0.c)
 * Callees:
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_14029A6AC @ 0x14029A6AC (sub_14029A6AC.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F50C0 @ 0x1402F50C0 (sub_1402F50C0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_1403936D8 @ 0x1403936D8 (sub_1403936D8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_140590C24 @ 0x140590C24 (sub_140590C24.c)
 *     sub_1405A5768 @ 0x1405A5768 (sub_1405A5768.c)
 */

void *__fastcall sub_14029A2A0(ULONG_PTR a1, _QWORD *a2)
{
  int v4; // esi
  __int64 v5; // r8
  unsigned __int64 v6; // r12
  ULONG_PTR v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  ULONG_PTR v16; // rbx
  __int64 v17; // rsi
  __int64 *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // ebx
  ULONG_PTR v22; // r14
  __int64 v23; // rbx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // r12
  __int64 v26; // rbx
  _QWORD *v27; // rbx
  void *result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  __int64 v36; // r9
  int v37; // eax
  int v38; // [rsp+30h] [rbp-D0h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v42; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  ULONG_PTR *v45; // [rsp+68h] [rbp-98h]
  unsigned __int64 v46; // [rsp+70h] [rbp-90h]
  _QWORD *v47; // [rsp+78h] [rbp-88h]
  _QWORD v48[12]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v49; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-18h] BYREF

  v47 = a2;
  memset(v48, 0, sizeof(v48));
  v4 = *(unsigned __int16 *)(*(_QWORD *)(qword_140D088C0[*(unsigned int *)(a1 + 588)] + 192) + 138LL) + 1;
  v38 = v4;
  v5 = *a2;
  v6 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = v6;
  v7 = (((unsigned __int64)(v5 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v45 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 544) + 1838LL));
  if ( v45 == &StartContext )
  {
    P = 0LL;
  }
  else
  {
    result = (void *)sub_1403936D8(v5 - 1);
    P = result;
    if ( !result )
      return result;
  }
  v10 = sub_140317A10(v8);
  BugCheckParameter1 = 0LL;
  v12 = sub_1402CCC50(128LL, v10);
  if ( v11 != v12 )
    BugCheckParameter1 = (v11 & 0x800) == 0;
  v41 = sub_1402CCC50(768LL, 1LL);
  v14 = sub_1402CCC50(992LL, v13);
  v16 = v6;
  if ( v6 <= v7 )
  {
    v17 = v41;
    v18 = &v50;
    v19 = v14;
    do
    {
      v20 = sub_140317A10(v16);
      if ( v20 != v19 && v20 != v12 && v20 != v17 && (v20 & 0x800) == 0 )
      {
        *v18 = 4096LL;
        *(v18 - 1) = (__int64)(v16 << 25) >> 16;
        ++v9;
        v18 += 2;
        if ( v9 == 18 )
          break;
      }
      v16 += 8LL;
    }
    while ( v16 <= v7 );
    v4 = v38;
    if ( v9 > 1 )
      sub_140284EB0(v9, (__int64)&v49, 1LL, 45);
    v15 = 1LL;
  }
  v21 = 0;
  v40 = 0LL;
  v50 = 4096LL;
  v22 = (__int64)(v7 << 25) >> 16;
  v46 = v15 | (unsigned __int64)v48;
  while ( v7 >= v42 )
  {
    if ( (sub_140317A10(v7) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v7, a1, 0LL);
    v49 = v22;
    v48[3] = 0LL;
    v48[1] = &v49;
    v48[4] = 0LL;
    LOWORD(v48[0]) = 4;
    v48[2] = 1LL;
    v48[6] = a1;
    LODWORD(v48[5]) = v4;
    sub_14031C860(2uLL, v22);
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      while ( 1 )
      {
        v41 = sub_140317A10(v7);
        v23 = v41;
        v24 = 48 * (((unsigned __int64)sub_140317A10(&v41) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v25 = (unsigned __int8)sub_1402F2700(v24);
        if ( v23 == sub_140317A10(v7) )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v31 = *((_QWORD *)CurrentPrcb + 4375);
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
              v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
              *(_DWORD *)(v31 + 20) &= v32;
              if ( v33 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v25);
      }
      sub_1402F50C0(v24, a1);
      sub_14033C300(v24, 2LL);
      *(_BYTE *)(v24 + 35) = *(_BYTE *)(v24 + 35) & 0xF8 | 5;
      v26 = sub_14029A6AC(v24);
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = v38;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v34 = KeGetCurrentIrql();
          if ( v34 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            v36 = *((_QWORD *)v35 + 4375);
            v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
            v33 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
            *(_DWORD *)(v36 + 20) &= v37;
            if ( v33 )
              sub_140418E4C(v35);
          }
        }
      }
      __writecr8(v25);
      if ( v26 )
        sub_1402E20D0(v45, v26, 0LL);
      v7 -= 8LL;
      v22 -= 4096LL;
      v21 = ++v40;
    }
  }
  if ( P )
    sub_140590C24(P);
  if ( (BYTE4(xmmword_140D06900) & 1) != 0 )
    sub_1405A5768(v22 + 4096, v21, 1LL);
  v27 = v47;
  result = (void *)v47[2];
  if ( *((_QWORD *)result - 1) != a1 )
  {
    sub_14058DCA8(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v27[2] - 8LL), 0LL, v27[2]);
  }
  return result;
}
