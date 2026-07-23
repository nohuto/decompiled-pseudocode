/*
 * XREFs of sub_140230F28 @ 0x140230F28
 * Callers:
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 * Callees:
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_1402313B4 @ 0x1402313B4 (sub_1402313B4.c)
 *     sub_14024F014 @ 0x14024F014 (sub_14024F014.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_14027B604 @ 0x14027B604 (sub_14027B604.c)
 *     sub_1402EA5E4 @ 0x1402EA5E4 (sub_1402EA5E4.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140230F28(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  int v9; // r15d
  unsigned int v10; // ebx
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  int v19; // r11d
  ULONG_PTR v20; // rcx
  __int64 v21; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r8
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r8
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  __int64 v33; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  __int64 v37; // r8
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  __int64 v41; // r8
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  __int64 v45; // r8
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // [rsp+70h] [rbp+8h]
  __int64 v52; // [rsp+80h] [rbp+18h] BYREF

  v52 = a3;
  v6 = (unsigned __int8)a2;
  v7 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v51 = v7;
  v8 = a3 << 25 >> 16;
  v9 = sub_14027B080(v8, a2, a3, a4);
  v10 = 0;
  if ( v8 < 0xFFFFF68000000000uLL || (v11 = 1, v8 > 0xFFFFF6FFFFFFFFFFuLL) )
    v11 = 0;
  switch ( v9 )
  {
    case 5:
      v14 = *(_BYTE *)(a1 + 35);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v14 & 0x10) != 0 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v24 = *((_QWORD *)CurrentPrcb + 4375);
              v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v26 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
              *(_DWORD *)(v24 + 20) &= v25;
              if ( v26 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        return 0LL;
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = *((_QWORD *)v28 + 4375);
            v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v26 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v30;
            if ( v26 )
              sub_140418E4C(v28);
          }
        }
      }
      __writecr8(v6);
      v15 = sub_14026DFC0(5LL);
      *(_DWORD *)(a4 + 8) |= 0x20u;
      v13 = v15;
      break;
    case 1:
      *(_QWORD *)(a4 + 56) = sub_1402313B4(a1);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = *((_QWORD *)v32 + 4375);
            v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v26 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
            *(_DWORD *)(v33 + 20) &= v34;
            if ( v26 )
              sub_140418E4C(v32);
          }
        }
      }
      __writecr8(v6);
      v20 = *(_QWORD *)(a4 + 56);
      if ( v20 )
      {
        if ( (int)sub_1402312E0(v20) >= 0 )
        {
          v21 = sub_14027B520();
          *(_DWORD *)(a4 + 8) |= 0x80u;
          v13 = v21;
          break;
        }
        *(_QWORD *)(a4 + 56) = 0LL;
      }
      ++dword_140C29D00;
      return 0LL;
    case 6:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = *((_QWORD *)v36 + 4375);
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v26 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
            *(_DWORD *)(v37 + 20) &= v38;
            if ( v26 )
              sub_140418E4C(v36);
          }
        }
      }
      __writecr8(v6);
      v12 = sub_14026DFC0(2LL);
      *(_DWORD *)(a4 + 8) |= 0x10u;
      v13 = v12;
      break;
    case 12:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = *((_QWORD *)v40 + 4375);
            v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v26 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
            *(_DWORD *)(v41 + 20) &= v42;
            if ( v26 )
              sub_140418E4C(v40);
          }
        }
      }
      __writecr8(v6);
      v13 = sub_14026DFC0(1LL);
      *(_DWORD *)(a4 + 48) = v19;
      break;
    default:
      if ( v9 != 9 || !sub_14027B604(v7, v8) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v47 = KeGetCurrentIrql();
            if ( v47 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v47 >= 2u )
            {
              v48 = KeGetCurrentPrcb();
              v49 = *((_QWORD *)v48 + 4375);
              v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v26 = (v50 & *(_DWORD *)(v49 + 20)) == 0;
              *(_DWORD *)(v49 + 20) &= v50;
              if ( v26 )
                sub_140418E4C(v48);
            }
          }
        }
        __writecr8(v6);
        ++dword_140C29D04;
        return 0LL;
      }
      v13 = sub_14026DFC0(3LL);
      *(_DWORD *)(a4 + 48) = 2;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v43 = KeGetCurrentIrql();
          if ( v43 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = *((_QWORD *)v44 + 4375);
            v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v26 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
            *(_DWORD *)(v45 + 20) &= v46;
            if ( v26 )
              sub_140418E4C(v44);
          }
        }
      }
      __writecr8(v6);
      break;
  }
  if ( !(unsigned int)sub_140279DB0(v13, v8, v9, v11, a4) )
    goto LABEL_28;
  v16 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( v11 )
  {
    if ( (unsigned int)sub_14024F014(v8, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) )
      goto LABEL_16;
LABEL_27:
    v10 = 2;
    goto LABEL_28;
  }
  v52 = sub_140317A10(v52);
  if ( (v52 & 1) == 0 || (((unsigned __int64)sub_140317A10(&v52) >> 12) & 0xFFFFFFFFFFLL) != v16 )
    goto LABEL_27;
LABEL_16:
  if ( (unsigned int)(*(_DWORD *)(a4 + 48) - 2) <= 1
    || (*(_DWORD *)(a4 + 8) & 0x20) != 0
    || (*(_BYTE *)a1 & 1) != 0 && (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    if ( v16 <= qword_140C50840
      && (*(_QWORD *)(16 * ((a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v17 >> 43) & 0x3FF)) == v51
        && v17 >= 0
        && (v17 & 0x20000000000000LL) == 0
        && !(unsigned int)sub_140277C50(a1) )
      {
        return 1LL;
      }
    }
  }
  else
  {
    ++dword_140C29D10;
  }
LABEL_28:
  sub_1402EA5E4(a4);
  if ( (*(_BYTE *)(v13 + 184) & 7) == 3 )
  {
    ++dword_140C29D90;
    return 0LL;
  }
  ++dword_140C29D04;
  return v10;
}
