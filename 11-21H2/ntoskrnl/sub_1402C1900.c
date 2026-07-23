/*
 * XREFs of sub_1402C1900 @ 0x1402C1900
 * Callers:
 *     sub_140246B70 @ 0x140246B70 (sub_140246B70.c)
 *     sub_1402F4850 @ 0x1402F4850 (sub_1402F4850.c)
 *     sub_1403A0B28 @ 0x1403A0B28 (sub_1403A0B28.c)
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_14056FB90 @ 0x14056FB90 (sub_14056FB90.c)
 *     sub_14056FE5C @ 0x14056FE5C (sub_14056FE5C.c)
 *     sub_1406E90B4 @ 0x1406E90B4 (sub_1406E90B4.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 *     sub_1409AD99C @ 0x1409AD99C (sub_1409AD99C.c)
 *     sub_140A48020 @ 0x140A48020 (sub_140A48020.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140231FC0 @ 0x140231FC0 (sub_140231FC0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033BC30 @ 0x14033BC30 (sub_14033BC30.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_1405A5768 @ 0x1405A5768 (sub_1405A5768.c)
 */

signed __int64 __fastcall sub_1402C1900(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebp
  int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  ULONG_PTR *v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  unsigned __int8 CurrentIrql; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  struct _KPRCB *v18; // rdx
  __int64 v19; // rcx
  signed __int64 result; // rax
  __int64 v21; // r9
  __int64 i; // rcx
  int *v23; // rdi
  __int64 v24; // rbx
  unsigned __int8 v25; // r15
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int64 v34; // rax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  __int64 v37; // r9
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  __int64 v41; // r8
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  __int64 v45; // r8
  int v46; // eax
  int v47; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v48; // [rsp+88h] [rbp+10h]
  unsigned int v49; // [rsp+90h] [rbp+18h]
  __int64 v50; // [rsp+98h] [rbp+20h] BYREF

  v48 = a2;
  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v7 = 18LL;
  }
  else if ( (a2 & 8) != 0 )
  {
    v7 = 3LL;
  }
  else
  {
    v7 = (unsigned __int8)byte_140C5304C;
  }
  if ( (BYTE4(xmmword_140D06900) & 1) != 0 && (v4 & 2) != 0 )
    sub_1405A5768(a1 - (unsigned int)((_DWORD)v7 << 12), v7, 0LL);
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  if ( a3 )
    v9 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1838LL));
  else
    v9 = &StartContext;
  if ( v6 )
    return sub_14033BC30(v8, v4);
  v10 = *(_QWORD *)v8;
  if ( v8 >= 0xFFFFF6FB7DBED000uLL
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v27 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 8 * ((v8 >> 3) & 0x1FF));
      if ( (v28 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v28 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
  }
  v50 = v10;
  v11 = sub_140317A10(&v50);
  v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v13 = 0;
  v14 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL)) >> 4)) + 2);
  if ( (v4 & 8) != 0 )
    v13 = 2;
  v49 = v13;
  if ( (v4 & 4) == 0 )
    goto LABEL_29;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v21 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v47);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    v16 = sub_140317A10(v8);
    if ( v50 == v16 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = *((_QWORD *)CurrentPrcb + 4375);
          v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v33 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
          *(_DWORD *)(v31 + 20) &= v32;
          if ( v33 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v50 = sub_140317A10(v8);
    v34 = sub_140317A10(&v50);
    v12 = 48 * ((v34 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v14 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * ((v34 >> 12) & 0xFFFFFFFFFFLL)) >> 4)) + 2);
  }
  if ( (*(_QWORD *)v12 & 0xFFFFFFFFFFELL) != 0 )
    v17 = 8 * (*(_QWORD *)v12 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    v17 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = v48;
  v13 = v49;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = *((_QWORD *)v36 + 4375);
        v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v33 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
        *(_DWORD *)(v37 + 20) &= v38;
        if ( v33 )
          sub_140418E4C(v36);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v17 != -32LL
    || (v18 = KeGetCurrentPrcb(), v13 = 1, *(unsigned __int16 *)(*((_QWORD *)v18 + 24) + 138LL) != v14)
    || *((_QWORD *)v18 + 4169)
    || v9 != &StartContext
    || (v19 = (__int64)(v8 << 25) >> 16,
        *(_QWORD *)(v19 + 4064) = v19 ^ qword_140C53430,
        *(_DWORD *)(v19 + 4088) = 1,
        (result = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 4169, v19 + 4080, 0LL)) != 0) )
  {
LABEL_29:
    for ( i = v13; ; i = 0LL )
    {
      v23 = (int *)(v9[2] + 32 * (766LL * v14 + i + 718));
      if ( *(unsigned __int16 *)v23 < v23[4] )
        break;
      if ( v13 != 1 )
        return sub_14033BC30(v8, v4);
      v13 = 0;
    }
    v24 = (__int64)(v8 << 25) >> 16;
    *(_QWORD *)(v24 + 4064) = v24 ^ qword_140C53430;
    *(_DWORD *)(v24 + 4088) = v13;
    if ( v13 == 1 )
      return (signed __int64)ExpInterlockedPushEntrySList((PSLIST_HEADER)v23, (PSLIST_ENTRY)(v24 + 4080));
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v25 <= 0xFu )
    {
      v26 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v26 + 20) |= (-1 << (v25 + 1)) & 4;
    }
    if ( (unsigned int)sub_140231FC0(v8, v4) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v23, (PSLIST_ENTRY)(v24 + 4080));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v43 = KeGetCurrentIrql();
          if ( v43 <= 0xFu && v25 <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = *((_QWORD *)v44 + 4375);
            v46 = ~(unsigned __int16)(-1LL << (v25 + 1));
            v33 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
            *(_DWORD *)(v45 + 20) &= v46;
            if ( v33 )
              sub_140418E4C(v44);
          }
        }
      }
      result = v25;
      __writecr8(v25);
      return result;
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && v25 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = *((_QWORD *)v40 + 4375);
          v42 = ~(unsigned __int16)(-1LL << (v25 + 1));
          v33 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
          *(_DWORD *)(v41 + 20) &= v42;
          if ( v33 )
            sub_140418E4C(v40);
        }
      }
    }
    __writecr8(v25);
    return sub_14033BC30(v8, v4);
  }
  return result;
}
