/*
 * XREFs of sub_140338080 @ 0x140338080
 * Callers:
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1406F3408 @ 0x1406F3408 (sub_1406F3408.c)
 *     sub_1406F363C @ 0x1406F363C (sub_1406F363C.c)
 *     sub_1407BF070 @ 0x1407BF070 (sub_1407BF070.c)
 *     sub_14097F0F0 @ 0x14097F0F0 (sub_14097F0F0.c)
 */

__int64 __fastcall sub_140338080(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int v3; // r8d
  PVOID v4; // r12
  ULONG_PTR v6; // r11
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 *v9; // r14
  int v10; // edx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // ebx
  int v19; // ebp
  int v20; // ebp
  int v21; // edi
  __int64 i; // r15
  ULONG_PTR v23; // rcx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r12
  __int64 v26; // rdi
  __int64 result; // rax
  int v28; // eax
  __int16 v29; // ax
  int v30; // edi
  bool v31; // cf
  __int64 v32; // rdi
  PVOID v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  char BugCheckOnFailure; // [rsp+20h] [rbp-88h]
  int Priority; // [rsp+28h] [rbp-80h]
  ULONG_PTR v39; // [rsp+40h] [rbp-68h]
  __int64 v40; // [rsp+48h] [rbp-60h]
  __int64 v41; // [rsp+50h] [rbp-58h]
  int v42; // [rsp+58h] [rbp-50h]
  char v43; // [rsp+B0h] [rbp+8h]
  unsigned int v44; // [rsp+B8h] [rbp+10h]
  PVOID v45; // [rsp+C0h] [rbp+18h]
  __int64 v46; // [rsp+C8h] [rbp+20h]

  v2 = a2 + 272;
  v3 = *(_DWORD *)(a2 + 184);
  v4 = 0LL;
  v44 = 0;
  v43 = 0;
  v6 = **(_QWORD **)(a2 + 208);
  v39 = v6;
  v7 = *(_QWORD *)(v6 + 96);
  if ( *(_QWORD *)(a2 + 256) )
    v2 = *(_QWORD *)(a2 + 256);
  v40 = *(_QWORD *)(v6 + 96);
  v41 = v2;
  v8 = *(unsigned int *)(v2 + 40);
  v9 = (__int64 *)(v2 + 48);
  v10 = *(_DWORD *)(v2 + 44);
  v11 = ((unsigned __int64)(((_WORD)v10 + (unsigned __int16)*(_DWORD *)(v2 + 32)) & 0xFFF) + v8 + 4095) >> 12;
  v46 = *((_QWORD *)KeGetCurrentThread() + 23);
  v12 = v2 + 8 * ((unsigned int)v11 + 6LL);
  *(_QWORD *)(a2 + 96) += (unsigned int)(v3 - v8 - v10);
  v13 = 2LL;
  v14 = v3 - *(_DWORD *)(v2 + 40) - *(_DWORD *)(v2 + 44);
  *(_DWORD *)(a2 + 188) += ((v14 & 0xFFF) != 0) + (v14 >> 12);
  v15 = *(_QWORD *)(v7 + 40);
  v16 = *(_QWORD *)(v2 + 48);
  if ( (v15 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
    v13 = 0LL;
  v17 = (*(_DWORD *)(48 * v16 - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
  v42 = (*(_DWORD *)(48 * v16 - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
  if ( (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 && (v13 & 2) != 0 )
  {
    v13 = (unsigned int)v13 | 1;
    v18 = v13;
  }
  else
  {
    v18 = v13;
    if ( (dword_140D06880 & 0x20000) != 0 && ((*(_DWORD *)(48 * v16 - 0x21FFFFFFFFF0LL) >> 5) & 2) != 0 )
      v43 = 3;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x10000) != 0 )
  {
    v18 |= 4u;
    if ( (dword_140D06880 & 0x2000) != 0 && (v18 & 1) != 0 )
      v18 &= ~4u;
  }
  v19 = (*(_DWORD *)(48 * v16 - 0x21FFFFFFFFF0LL) >> 5) & 2;
  if ( ((*(_DWORD *)(48 * v16 - 0x21FFFFFFFFF0LL) >> 5) & 2) != 0 && (dword_140D06880 & 0x20000) != 0 )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
    sub_14026A230();
    v7 = v40;
    v2 = v41;
  }
  v45 = 0LL;
  if ( (v18 & 2) != 0
    && (unsigned int)v11 > 1
    && (v29 = *(_WORD *)(v2 + 10), (v29 & 0x4000) != 0)
    && ((v29 & 5) == 0
      ? (v33 = MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0xC0000010), v7 = v40, v4 = v33, v45 = v33)
      : (v4 = *(PVOID *)(v2 + 24), v45 = v4),
        v4) )
  {
    v30 = v15 & 0xFFFFFFF8;
    if ( (v18 & 1) != 0 && !*(_QWORD *)(v7 + 56) )
    {
      result = sub_14097F0F0(v7, v13, v17, v7);
      if ( (int)result < 0 )
        return result;
    }
    v31 = v19 != 0;
    v20 = v46;
    if ( (int)sub_1406F363C(v30, (_DWORD)v4, (_DWORD)v11 << 12, *(_QWORD *)(a2 + 96), v31 ? 2 : 0, v46) < 0 )
    {
      v4 = 0LL;
      v45 = 0LL;
    }
  }
  else
  {
    v20 = v46;
  }
  if ( (unsigned __int64)v9 >= v12 )
    return v44;
  v21 = v39;
  for ( i = 0LL; ; i += 8LL )
  {
    v23 = 48 * *v9 - 0x220000000000LL;
    v18 ^= ((unsigned __int8)v18 ^ (unsigned __int8)(2 * v18)) & 8;
    if ( v23 == qword_140C53280 || (*(_BYTE *)(v23 + 34) & 7) == 7 && *(_QWORD *)(v23 + 8) == -3LL )
      goto LABEL_26;
    if ( v4 )
    {
      sub_14026C644(v23, v43);
      goto LABEL_19;
    }
    if ( (v18 & 2) != 0 )
    {
      v28 = sub_1406F3408(v21, *(_QWORD *)(a2 + 96), v20, -1, BugCheckOnFailure, v42, *v9, 0);
      if ( v28 < 0 )
        break;
    }
LABEL_19:
    if ( (v18 & 8) == 0 )
      goto LABEL_26;
    if ( (*(_BYTE *)(v41 + 10) & 1) == 0 )
      goto LABEL_24;
    v24 = *(_QWORD *)(v41 + 24) + (i >> 3 << 12);
    v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v26 = *(_QWORD *)v25;
    if ( v25 >= 0xFFFFF6FB7DBED000uLL
      && v25 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v26 & 1) != 0 )
    {
      if ( (v26 & 0x20) != 0 && (v26 & 0x42) != 0 )
        goto LABEL_23;
      v34 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 8 * ((v25 >> 3) & 0x1FF));
        v36 = v26 | 0x20;
        if ( (v35 & 0x20) == 0 )
          v36 = *(_QWORD *)v25;
        v26 = v36;
        if ( (v35 & 0x42) != 0 )
          v26 = v36 | 0x42;
      }
    }
    if ( (v26 & 0x42) == 0 )
    {
      v32 = v26 | 0x842;
      if ( !sub_140317A80(v25) )
        goto LABEL_48;
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v32 & 1) != 0 )
          v32 |= 0x8000000000000000uLL;
        *(_QWORD *)v25 = v32;
        sub_1402294F0(v25, v32);
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v32 & 1) != 0 )
          v32 |= 0x8000000000000000uLL;
LABEL_48:
        *(_QWORD *)v25 = v32;
      }
      if ( (dword_140D06880 & 0x100) == 0 && (dword_140D06880 & 0x200) == 0 )
        std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v24, 0, 1u);
    }
LABEL_23:
    v4 = v45;
LABEL_24:
    if ( (int)sub_1407BF070(v39, 0LL, Priority, 33) < 0 )
      goto LABEL_87;
    v21 = v39;
LABEL_26:
    *(_QWORD *)(a2 + 96) += 4096LL;
    ++v9;
    ++*(_DWORD *)(a2 + 188);
    if ( (unsigned __int64)v9 >= v12 )
      return v44;
    v20 = v46;
  }
  if ( v28 != -1073741670 )
  {
    v44 = -1073740748;
    if ( (v18 & 1) != 0 && (dword_140D06880 & 0x2000) != 0 && (*(_DWORD *)(a2 + 192) & 0x10000) != 0 )
      v18 |= 8u;
    goto LABEL_19;
  }
LABEL_87:
  *(_DWORD *)(a2 + 80) = -1073741670;
  return v44;
}
