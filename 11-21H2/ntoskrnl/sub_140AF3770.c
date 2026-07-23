/*
 * XREFs of sub_140AF3770 @ 0x140AF3770
 * Callers:
 *     sub_140AF35B8 @ 0x140AF35B8 (sub_140AF35B8.c)
 *     sub_140AF3770 @ 0x140AF3770 (sub_140AF3770.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140AF3770 @ 0x140AF3770 (sub_140AF3770.c)
 *     sub_140AF3DB0 @ 0x140AF3DB0 (sub_140AF3DB0.c)
 *     sub_140AF3FFC @ 0x140AF3FFC (sub_140AF3FFC.c)
 */

unsigned __int64 __fastcall sub_140AF3770(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v17 = sub_140317A10(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  result = sub_140317A10((unsigned __int64)&v17);
  v10 = (result >> 12) & 0xFFFFFFFFFFLL;
  if ( v5 <= a2 )
  {
    v11 = a5;
    do
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        v17 = sub_140317A10(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
      }
      result = sub_140317A10(v5);
      v17 = result;
      if ( (result & 1) == 0 || v5 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_11;
      if ( a3 && (result & 0x80u) != 0LL )
      {
        v17 = sub_140317A10(v5);
        v15 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v16 = 512;
        do
        {
          result = sub_14033C3E0(v15, v10);
          v15 = v14 + 48;
          --v16;
        }
        while ( v16 );
        goto LABEL_11;
      }
      v12 = sub_140317A10((unsigned __int64)&v17);
      v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
      if ( a3 )
      {
        sub_140AF3FFC(v11, v5);
        sub_140AF3770((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, a3 - 1, a4, v11);
        v17 = sub_140317A10(v5);
        v13 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        result = sub_140AF3DB0(a4, (v12 >> 12) & 0xFFFFFFFFFFLL);
        if ( !result )
          goto LABEL_11;
      }
      result = sub_14033C3E0(48 * v13 - 0x220000000000LL, v10);
LABEL_11:
      v5 += 8LL;
    }
    while ( v5 <= a2 );
  }
  return result;
}
