/*
 * XREFs of sub_1402655A0 @ 0x1402655A0
 * Callers:
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 *     sub_140589FC0 @ 0x140589FC0 (sub_140589FC0.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140265D40 @ 0x140265D40 (sub_140265D40.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_1403C9B18 @ 0x1403C9B18 (sub_1403C9B18.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402655A0(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // r14
  unsigned __int64 v6; // r15
  _QWORD *v7; // rsi
  _QWORD *v8; // rbp
  int v9; // eax
  int v10; // r10d
  ULONG_PTR v11; // r8
  char *v12; // r9
  int v13; // ebx
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // esi
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 result; // rax
  int v29; // r11d
  int v30; // ecx
  __int64 v31; // r8
  unsigned __int8 v32; // cl
  __int64 v33; // r9
  char v34; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v36; // r9
  int v37; // edx
  bool v38; // zf
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v46; // [rsp+A0h] [rbp+18h]
  __int64 v47; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v43 = *(_QWORD *)(a1 + 64);
  v3 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(v43 + 48);
  v6 = (unsigned __int64)*(unsigned int *)(v43 + 40) >> 12;
  v7 = (_QWORD *)(v43 + 48);
  v8 = (_QWORD *)(v43 + 48);
  v9 = 0;
  if ( !v6 )
  {
    v14 = a1;
    goto LABEL_13;
  }
  do
  {
    v10 = dword_140C506C8;
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((48LL * *v7) >> 4);
    if ( dword_140C506C4 > (unsigned int)dword_140C506C8
      || (v12 = (char *)qword_140C50708 + 16 * dword_140C506C4, v11 < *(_QWORD *)v12)
      || dword_140C506C4 != dword_140C506C8 && v11 >= *((_QWORD *)v12 + 2) )
    {
      v29 = 0;
      if ( dword_140C506C8 < 0 )
LABEL_58:
        KeBugCheckEx(0x1Au, 0x6201uLL, v11, 0LL, 0LL);
      while ( 1 )
      {
        v30 = (v29 + v10) >> 1;
        v12 = (char *)qword_140C50708 + 16 * v30;
        if ( v11 < *(_QWORD *)v12 )
        {
          if ( !v30 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v11, (ULONG_PTR)v12, 0LL);
          v10 = v30 - 1;
        }
        else
        {
          if ( v30 == dword_140C506C8 || v11 < *((_QWORD *)v12 + 2) )
          {
            dword_140C506C4 = (v29 + v10) >> 1;
            break;
          }
          v29 = v30 + 1;
        }
        if ( v10 < v29 )
          goto LABEL_58;
      }
    }
    v13 = *((_DWORD *)v12 + 2);
    if ( v3 )
    {
      if ( v13 == v9 )
      {
        ++v3;
        goto LABEL_9;
      }
      sub_140265D40(a1, v8, v3);
    }
    v3 = 1LL;
    v9 = v13;
    v8 = v7;
LABEL_9:
    ++v4;
    ++v7;
  }
  while ( v4 < v6 );
  v14 = a1;
  if ( v3 )
    sub_140265D40(a1, v8, v3);
  v1 = 0LL;
LABEL_13:
  v15 = *(_QWORD *)(v14 + 72);
  if ( (*(_DWORD *)(v14 + 8) & 0x80000200) != 0 )
    v16 = 0LL;
  else
    v16 = sub_1402CCC50(128LL, v3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v31 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v31 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    v1 = 0LL;
  }
  v18 = v1;
  if ( v6 )
  {
    v19 = (v15 >> 3) & 0xFFFFFFFFFFELL;
    v47 = __ROL8__(1LL, CurrentIrql + 1);
    v46 = 0xFFFFF00000000001uLL;
    do
    {
      v20 = 48LL * *v5 - 0x220000000000LL;
      v45 = v1;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v45);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
        v1 = 0LL;
      }
      v21 = *(_QWORD *)(v20 + 8);
      *(_QWORD *)(v20 + 8) = 0xFFFFF68000000000uLL;
      v22 = v46 & *(_QWORD *)v20;
      *(_QWORD *)(v20 + 8) = v21;
      v23 = *(_QWORD *)(v20 + 40);
      *(_QWORD *)v20 = v19 | v22;
      v24 = *(_DWORD *)(v14 + 8);
      if ( (v23 & 0x10000000000LL) != 0 )
      {
        sub_1403C9B18(v20, v20, v1, 1LL);
        v23 = *(_QWORD *)(v20 + 40);
        v1 = 0LL;
      }
      *(_QWORD *)(v20 + 8) = 0xFFFFF68000000000uLL;
      *(_QWORD *)(v20 + 16) = v16;
      *(_QWORD *)v20 = v1;
      *(_QWORD *)(v20 + 40) = v23 & 0x7FFFFF0000000000LL | 0x3FFFFFFFFELL;
      *(_QWORD *)v20 = v19;
      if ( (v24 & 0x100) != 0 )
      {
        v34 = *(_BYTE *)(v20 + 34);
        if ( (v34 & 7) != 5 )
          *(_BYTE *)(v20 + 34) = v34 & 0xF8 | 5;
        *(_QWORD *)(v20 + 24) &= 0xC000000000000000uLL;
      }
      else
      {
        v25 = *(_QWORD *)(v20 + 24) & 0xC000000000000001uLL;
        *(_WORD *)(v20 + 32) = 2;
        v26 = v25 | 1;
        *(_QWORD *)(v20 + 24) = v26;
        if ( (v24 & 0x80000200) != 0 )
          v27 = v1;
        else
          v27 = 0xFFFFF68000000000uLL;
        *(_QWORD *)(v20 + 8) = v27;
        if ( v24 < 0 )
          *(_QWORD *)(v20 + 24) = v26 & 0xBFFFFFFFFFFFFFFFuLL;
        if ( (v24 & 0x200) != 0 )
        {
          sub_140268998(v20, 0xFFFFF68000000000uLL);
          sub_14033C300(v20, 3LL);
          if ( (v24 & 0x20000) == 0 )
            _InterlockedIncrement64(&qword_140C50848);
          v1 = 0LL;
        }
        *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0xF8 | 6;
        if ( v24 < 0 )
        {
          sub_14033C300(v20, 1LL);
          v1 = 0LL;
        }
      }
      *(_BYTE *)(v20 + 35) &= 0xF8u;
      *(_DWORD *)(v20 + 36) = v1;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql >= 2u || (v18 & 0xF) != 0 )
        goto LABEL_31;
      if ( KeShouldYieldProcessor() )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v36 = *((_QWORD *)CurrentPrcb + 4375);
            v37 = ~(unsigned __int16)-(__int16)v47;
            v38 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
            *(_DWORD *)(v36 + 20) &= v37;
            if ( v38 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( !dword_140D06B08 || (dword_140D06B08 & 1) == 0 )
        {
          v1 = 0LL;
          goto LABEL_31;
        }
        if ( v32 <= 0xFu )
        {
          v33 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v33 + 20) |= (-1 << (v32 + 1)) & 4;
        }
      }
      v1 = 0LL;
LABEL_31:
      v14 = a1;
      ++v18;
      ++v5;
    }
    while ( v18 < v6 );
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v39 = KeGetCurrentIrql();
      if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v41 = *((_QWORD *)v40 + 4375);
        v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v38 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
        *(_DWORD *)(v41 + 20) &= v42;
        if ( v38 )
          sub_140418E4C(v40);
        v1 = 0LL;
      }
    }
  }
  __writecr8(CurrentIrql);
  result = v43;
  *(_WORD *)(v43 + 10) |= 2u;
  *(_QWORD *)(v43 + 16) = v1;
  return result;
}
