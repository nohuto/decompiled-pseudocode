/*
 * XREFs of sub_140844658 @ 0x140844658
 * Callers:
 *     sub_14081A830 @ 0x14081A830 (sub_14081A830.c)
 *     sub_140844508 @ 0x140844508 (sub_140844508.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 *     sub_14084476C @ 0x14084476C (sub_14084476C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140844658(_QWORD *a1)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  unsigned int v8; // esi
  unsigned int v9; // edi
  _DWORD *Pool2; // rax
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]

  v13 = 0LL;
  v14 = 0;
  v2 = sub_14036FA84();
  if ( v2 > 0 && (v2 <= 4 || v2 == 4096) )
  {
    result = sub_14084476C(&v13);
    if ( (int)result < 0 )
      return result;
    v4 = 205;
    v5 = 205 - HIDWORD(v13) / (unsigned int)HalQueryMaximumProcessorCount();
  }
  else
  {
    v5 = 0;
    v4 = 0;
  }
  if ( byte_140C54BB0 )
  {
    v6 = v4;
    v7 = 256;
  }
  else
  {
    v6 = -1;
    v7 = 0;
  }
  v8 = v4 + v7 - v5;
  v9 = 32 * (v8 - 1) + 72;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v9, 1097621832LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[2] = -1;
  *Pool2 = v9;
  Pool2[7] = 1;
  Pool2[1] = 15;
  Pool2[8] = 65537;
  Pool2[9] = v8;
  if ( v8 )
  {
    v11 = (char *)Pool2 + 42;
    v12 = v8;
    do
    {
      if ( v5 >= v6 && v5 < v7 )
        v5 = v7;
      *(_DWORD *)(v11 + 6) = v5;
      *(_DWORD *)(v11 + 10) = v5++;
      *(_WORD *)(v11 - 1) = 258;
      v11 += 32;
      --v12;
    }
    while ( v12 );
  }
  *a1 = Pool2;
  return 0LL;
}
