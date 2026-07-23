/*
 * XREFs of sub_1409F7090 @ 0x1409F7090
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_14026A09C @ 0x14026A09C (sub_14026A09C.c)
 *     sub_14026A0BC @ 0x14026A0BC (sub_14026A0BC.c)
 *     sub_14082BB8C @ 0x14082BB8C (sub_14082BB8C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F7090(__int64 a1)
{
  unsigned int v2; // edx
  _DWORD *v3; // r8
  unsigned __int16 v4; // r15
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // esi
  __int64 i; // rbx
  __int64 v9; // rdi
  __int64 j; // r8
  size_t v11; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h]
  size_t v14; // [rsp+50h] [rbp-38h]

  P = 0LL;
  v11 = 0LL;
  v4 = sub_14026A0BC(*((_QWORD *)KeGetCurrentThread() + 23));
  if ( v2 >= 4 )
  {
    v6 = (unsigned __int16)word_140D05000;
    v7 = (unsigned __int16)word_140D05000;
    *(_DWORD *)a1 = (unsigned __int16)word_140D05000 - 1;
    if ( (v2 - 8) >> 3 <= v6 )
      v7 = (v2 - 8) >> 3;
    if ( v2 >= 8 && v7 )
    {
      *v3 = 8 * v7 + 8;
      if ( (unsigned __int16)v6 <= 1u )
      {
        *(_QWORD *)(a1 + 8) = sub_14026A09C(v4) << 12;
      }
      else
      {
        for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
        {
          result = sub_14082BB8C(v4, i, &P, &v11);
          if ( (int)result < 0 )
            return result;
          v9 = 0LL;
          v13 = 0LL;
          v14 = v11 / 0x28;
          for ( j = 0LL; (unsigned int)j < v11 / 0x28; j = (unsigned int)(j + 1) )
          {
            v9 += *((_QWORD *)P + 5 * j + 2) + *((_QWORD *)P + 5 * j + 3);
            v13 = v9;
          }
          ExFreePoolWithTag(P, 0);
          *(_QWORD *)(a1 + 8 * i + 8) = v9 << 12;
        }
      }
      return 0LL;
    }
    else
    {
      *v3 = 4;
      return 0LL;
    }
  }
  else
  {
    if ( v3 )
      *v3 = 4;
    return 3221225476LL;
  }
}
