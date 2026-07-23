/*
 * XREFs of sub_14034D4E0 @ 0x14034D4E0
 * Callers:
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_1403513D8 @ 0x1403513D8 (sub_1403513D8.c)
 *     sub_14036E388 @ 0x14036E388 (sub_14036E388.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14034D4E0(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 *a4)
{
  __int64 v7; // r10
  unsigned int v8; // edx
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // eax
  unsigned __int64 v12; // r8
  __int64 result; // rax

  v7 = 16 * (WORD1(qword_140C5A5C0) ^ WORD1(a1) ^ *(unsigned __int16 *)(a1 + 2));
  v8 = (a1 + v7 - a2) & 0xFFFFF000;
  v9 = (((unsigned int)v7 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v7 + 4095) >> 12);
  v10 = (a1 - a2 + 4127) & 0xFFFFF000;
  if ( v10 < v8 )
  {
    v11 = v8 - v10;
    v12 = *(_QWORD *)(a2 + 16) & (-1LL << (v10 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v8 - 1) >> 12)));
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
  }
  *a3 = v11 >> 12;
  result = v9;
  *a4 = v12;
  return result;
}
