/*
 * XREFs of sub_1405A3818 @ 0x1405A3818
 * Callers:
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402D0500 @ 0x1402D0500 (sub_1402D0500.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 *     sub_1406FEC50 @ 0x1406FEC50 (sub_1406FEC50.c)
 *     sub_1407BE280 @ 0x1407BE280 (sub_1407BE280.c)
 *     sub_1409755D4 @ 0x1409755D4 (sub_1409755D4.c)
 */

__int64 __fastcall sub_1405A3818(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rax
  __int16 v16; // bx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  struct _MDL *v20; // rax
  struct _MDL *v21; // rbx
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rdi
  struct _MDL *v26; // r14
  unsigned __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r9
  __int64 v32; // rdi
  char v33; // al
  unsigned int v34; // ecx
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v37; // r8
  int v38; // eax
  bool v39; // zf
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  __int64 v43; // r12
  int v44; // [rsp+30h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-A0h]
  int v46; // [rsp+40h] [rbp-98h]
  int v47; // [rsp+48h] [rbp-90h] BYREF
  __int64 v48; // [rsp+50h] [rbp-88h]
  PMDL Mdl; // [rsp+58h] [rbp-80h]
  unsigned __int64 v50; // [rsp+60h] [rbp-78h]
  __int64 v51; // [rsp+68h] [rbp-70h]
  __int64 v52; // [rsp+70h] [rbp-68h]
  __int64 v53; // [rsp+78h] [rbp-60h]
  __int64 v54; // [rsp+80h] [rbp-58h]
  __int64 v55; // [rsp+88h] [rbp-50h] BYREF
  __int64 v56[9]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v60; // [rsp+F8h] [rbp+20h]

  v56[0] = 0LL;
  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  v51 = v4;
  v52 = v4;
  v5 = v4 + 1664;
  v6 = *a1;
  v54 = v6;
  Mdl = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v48 = 0LL;
  v9 = sub_1402D0500(v6, v7, v50);
  v10 = v9;
  v53 = v9;
  if ( v9 )
  {
    result = sub_1407BE280(v4, v9);
    if ( (int)result < 0 )
      return result;
  }
  BugCheckParameter2 = a2;
  v12 = 0LL;
  v13 = 1;
  v44 = 1;
  v60 = sub_1402CF4F0(v5);
  while ( v7 <= v50 )
  {
    if ( v13 || (v7 & 0xFFF) == 0 )
    {
      if ( v12 )
        sub_14020D8D0(v5, v12);
      v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LOBYTE(v14) = v60;
      sub_14032CE60(v7, 0LL, (*(_DWORD *)(v6 + 48) >> 12) & 0x7F, v14, 0);
      v44 = 0;
    }
    v15 = sub_140317A10(v7);
    v16 = v15;
    v55 = v15;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v17 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v55) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v18 = *(_QWORD *)(v17 + 40);
      if ( v18 < 0 )
      {
        v19 = *(_QWORD *)(v17 + 8);
        if ( (v19 < 0 || (v18 & 0x10000000000LL) != 0 || !v19)
          && (*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) == sub_140319600(v6, BugCheckParameter2 >> 12, 0, v56) )
        {
          v46 = sub_140316400(BugCheckParameter2, v7, 0xFFFFFFFFFFFFFFFFuLL, 0);
          if ( v46 < 0 )
          {
            sub_14020D8D0(v5, v12);
            sub_1402B0CE0(v5, v60);
            v12 = 0LL;
            sub_1405BCAF8(v5, (unsigned int)v46);
            goto LABEL_21;
          }
          if ( (v16 & 0x200) == 0 )
            v48 = ++v8;
        }
      }
      v7 += 8LL;
      BugCheckParameter2 += 4096LL;
      v13 = v44;
    }
    else
    {
      sub_14020D8D0(v5, v12);
      sub_1402B0CE0(v5, v60);
      v12 = 0LL;
LABEL_21:
      v13 = 1;
      v44 = 1;
      sub_1402CF4F0(v5);
    }
  }
  sub_14020D8D0(v5, v12);
  sub_1402B0CE0(v5, v60);
  v20 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
  v21 = v20;
  Mdl = v20;
  if ( v20 )
  {
    sub_14029C5B0(v20, 0, 0);
    v21->MdlFlags |= 0x80u;
    v25 = 0LL;
    v26 = v21 + 1;
    v27 = (unsigned __int64)&v21[1] + 8 * a3;
    CurrentIrql = KeGetCurrentIrql();
    v29 = 2LL;
    __writecr8(2uLL);
    if ( !dword_140D06B08 || (dword_140D06B08 & 1) == 0 || CurrentIrql > 0xFu )
      goto LABEL_30;
    v30 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v29 = (-1LL << (CurrentIrql + 1)) & 4;
    v24 = (unsigned int)v29 | *(_DWORD *)(v30 + 20);
    *(_DWORD *)(v30 + 20) = v24;
    while ( 1 )
    {
      v27 = (unsigned __int64)&v21[1] + 8 * a3;
LABEL_30:
      v31 = v25;
      v50 = v25;
      if ( (unsigned __int64)v26 >= v27 )
        break;
      v32 = 48 * (__int64)v26->Next - 0x220000000000LL;
      v47 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v47, v29, v24, v31);
          while ( *(__int64 *)(v32 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
        v31 = v50;
      }
      v24 = (unsigned int)((*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
      v33 = *(_BYTE *)(v32 + 34);
      v29 = *(unsigned __int16 *)(v32 + 32);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v26 = (struct _MDL *)((char *)v26 + 8);
      v34 = v24 + 1;
      if ( (v33 & 8) == 0 )
        v34 = v24;
      v25 = v31 + 1;
      if ( (unsigned int)v29 <= v34 )
        v25 = v31;
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = *((_QWORD *)CurrentPrcb + 4375);
          v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v39 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
          *(_DWORD *)(v37 + 20) &= v38;
          if ( v39 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v25 )
    {
      v40 = *(_QWORD *)(***(_QWORD ***)(v6 + 72) + 56LL);
      sub_1409755D4(a2, ((_DWORD)a3 << 12) + a2 - 1, *(_DWORD *)(v40 + 60), *(_DWORD *)(v40 + 72), v25);
    }
    v41 = a1[7];
    if ( v41 )
      v21->Next = (struct _MDL *)v41;
    a1[7] = (__int64)v21;
    v22 = 0;
  }
  else
  {
    v22 = -1073741670;
  }
  v23 = v51;
  if ( v8 )
  {
    v42 = v8 + (*(_DWORD *)(v6 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 31));
    *(_DWORD *)(v6 + 52) ^= (*(_DWORD *)(v6 + 52) ^ (v8
                                                   + (*(_DWORD *)(v6 + 52) & 0x7FFFFFFF | (*(unsigned __int8 *)(v6 + 34) << 31)))) & 0x7FFFFFFF;
    *(_BYTE *)(v6 + 34) = v42 >> 31;
  }
  v43 = v10 - v8;
  if ( v43 )
    sub_1406FEC50(v23, v43);
  return v22;
}
