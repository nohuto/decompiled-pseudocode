/*
 * XREFs of sub_1403137B0 @ 0x1403137B0
 * Callers:
 *     sub_140227DF0 @ 0x140227DF0 (sub_140227DF0.c)
 *     sub_14026AEB0 @ 0x14026AEB0 (sub_14026AEB0.c)
 *     sub_1403128B0 @ 0x1403128B0 (sub_1403128B0.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 *     sub_1405B5BA0 @ 0x1405B5BA0 (sub_1405B5BA0.c)
 *     sub_1407F8FE0 @ 0x1407F8FE0 (sub_1407F8FE0.c)
 * Callees:
 *     sub_140239F04 @ 0x140239F04 (sub_140239F04.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_14033B640 @ 0x14033B640 (sub_14033B640.c)
 */

__int64 __fastcall sub_1403137B0(_QWORD *a1, char a2, __int128 *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 BugCheckParameter2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h]
  unsigned __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3[1];
  BugCheckParameter2 = *a3;
  v4 = a3[2];
  v16 = v3;
  v17 = v4;
  if ( (BYTE2(v4) & 7u) <= 1 )
    return 0LL;
  v5 = *((_QWORD *)&BugCheckParameter2 + 1);
  if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*((_QWORD *)&v17 + 1) >> 43) & 0x3FFLL)) != *a1 && (a2 & 1) == 0 )
    return 0LL;
  if ( v17 < 0
    || (*((_QWORD *)&v17 + 1) & 0x10000000000LL) != 0
    || (BYTE3(v17) & 8) != 0
    || *((_QWORD *)&BugCheckParameter2 + 1) < 0xFFFFF68000000000uLL
    || *((_QWORD *)&BugCheckParameter2 + 1) > 0xFFFFF6FFFFFFFFFFuLL
    || (*((_QWORD *)&v16 + 1) & 0x4000000000000000LL) != 0
    || ((*((_QWORD *)&v17 + 1) >> 60) & 7) == 4
    || (*((_QWORD *)&BugCheckParameter2 + 1) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (*((_QWORD *)&BugCheckParameter2 + 1) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (BYTE3(v17) & 0x20) != 0
    || byte_140C58C66
    && _bittest64(
         (const signed __int64 *)qword_140C58DE0,
         (0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3 + 0x22000000000LL) >> 4)) >> 9) )
  {
    return 0LL;
  }
  v6 = v16;
  if ( (unsigned __int64)&v16 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v16 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v16 & 1) != 0
    && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
  {
    v6 = v16;
    v13 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v13 )
    {
      v6 = v16 | 0x20;
      v14 = *(_QWORD *)(v13 + 8 * (((unsigned __int64)&v16 >> 3) & 0x1FF));
      if ( (v14 & 0x20) == 0 )
        v6 = v16;
      if ( (v14 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
  }
  v18 = v6;
  if ( (v6 & 1) != 0 || v6 && qword_140C50780 && (qword_140C50780 & v6) == 0 )
    return 0LL;
  v7 = (v6 >> 5) & 0x1F;
  if ( (_DWORD)v7 == 31
    || (_DWORD)v7 == 24
    || ((v6 >> 5) & 0x18) == 0x10
    || (unsigned int)v7 >= 0x1E
    || (unsigned int)sub_140313B20((ULONG_PTR)&BugCheckParameter2) )
  {
    return 0LL;
  }
  v8 = (__int64)(v5 << 25) >> 16;
  if ( v8 >= 0xFFFF800000000000uLL )
    v9 = (unsigned __int8)byte_140C53F50[((v8 >> 39) & 0x1FF) - 256];
  else
    v9 = 0;
  if ( v5 > 0xFFFFF6BFFFFFFF78uLL )
  {
    if ( v9 == 6 )
    {
      v10 = 2;
    }
    else
    {
      if ( v9 != 1 )
        return 0LL;
      v10 = 3;
    }
  }
  else
  {
    v10 = 1;
  }
  if ( (unsigned __int8)((BYTE2(v17) & 7) - 2) <= 1u )
  {
    if ( !(_WORD)v17 && (v10 != 1 || !(unsigned int)sub_14033B640(v6) && !(unsigned int)sub_140239F04(&v18)) )
      return v10;
  }
  else if ( (BYTE2(v17) & 7) == 6
         && (BugCheckParameter2 & 1) != 0
         && (_WORD)v17 == 1
         && (*((_QWORD *)&v17 + 1) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
         && (*((_QWORD *)&v16 + 1) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
    if ( v10 != 1 || (v6 & 0x400) != 0 )
      return v10;
    if ( (v6 & 0x800) != 0 || (v6 & 4) != 0 || (v6 & 2) != 0 )
      goto LABEL_45;
    v11 = v6;
    if ( qword_140C50780 )
    {
      if ( (v6 & 0x10) == 0 )
        v11 = v6 & ~qword_140C50780;
    }
    if ( HIDWORD(v11) != 1 )
    {
LABEL_45:
      if ( (v6 & 0x4000000) == 0 )
        return v10;
    }
  }
  return 0LL;
}
