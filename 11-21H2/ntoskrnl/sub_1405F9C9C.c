/*
 * XREFs of sub_1405F9C9C @ 0x1405F9C9C
 * Callers:
 *     sub_1405FA010 @ 0x1405FA010 (sub_1405FA010.c)
 * Callees:
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     sub_1405F9E38 @ 0x1405F9E38 (sub_1405F9E38.c)
 *     sub_1405FB2F0 @ 0x1405FB2F0 (sub_1405FB2F0.c)
 */

__int64 __fastcall sub_1405F9C9C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  ULONGLONG *v7; // rax
  int v8; // edx
  int v9; // r9d
  __int64 v10; // rcx
  char v11; // dl
  void *v12; // rsp
  int v13; // esi
  __int64 v14; // rbx
  int v15; // eax
  int *v16; // rbx
  int v17; // edx
  int *v18; // rdi
  int v19; // ecx
  _DWORD Base[240]; // [rsp+20h] [rbp-400h] BYREF
  size_t NumOfElements; // [rsp+420h] [rbp+0h] BYREF
  __int64 v23; // [rsp+428h] [rbp+8h]
  __int128 v24; // [rsp+430h] [rbp+10h] BYREF
  __int128 v25; // [rsp+440h] [rbp+20h]

  v5 = a3;
  v24 = 0LL;
  v23 = a2;
  LODWORD(v24) = 1;
  v25 = 0LL;
  LODWORD(v25) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
  v7 = sub_140261818(0);
  if ( v7 )
  {
    v10 = *(_QWORD *)(a1 + 1048);
    if ( v10 )
      v11 = *(_BYTE *)(v10 + v5);
    else
      v11 = 0;
    sub_1405FB2F0((_DWORD)v7, 3, a1, v5, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5), v11);
    v8 = v23;
  }
  v12 = alloca(1024LL);
LABEL_7:
  LODWORD(NumOfElements) = 256;
  v13 = sub_1405F9E38(a1, v8, v5, v9, a5, (__int64)Base, (__int64)&NumOfElements);
  if ( v13 < 0 || !(_DWORD)NumOfElements )
    return (unsigned int)v13;
  v14 = (unsigned int)NumOfElements;
  qsort(Base, (unsigned int)NumOfElements, 4uLL, sub_1405FAA10);
  v15 = Base[0];
  v16 = &Base[v14];
  DWORD2(v24) = Base[0];
  v17 = Base[0];
  v18 = Base;
  v19 = 0;
LABEL_10:
  if ( v15 == v17 )
    goto LABEL_13;
  while ( 1 )
  {
    HIDWORD(v24) = v19;
    v13 = sub_14037EEA8(a1, (__int64)&v24);
    if ( v13 < 0 )
      return (unsigned int)v13;
    v15 = *v18;
    v19 = 0;
    DWORD2(v24) = *v18;
LABEL_13:
    ++v19;
    if ( ++v18 < v16 )
    {
      v17 = *v18;
      ++v15;
      goto LABEL_10;
    }
    if ( v18 != v16 )
    {
      v8 = v23;
      if ( (unsigned int)NumOfElements < 0x100 )
        return (unsigned int)v13;
      goto LABEL_7;
    }
  }
}
