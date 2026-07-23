/*
 * XREFs of sub_1405915B4 @ 0x1405915B4
 * Callers:
 *     sub_1405910C0 @ 0x1405910C0 (sub_1405910C0.c)
 * Callees:
 *     sub_140398948 @ 0x140398948 (sub_140398948.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405915B4(__int64 a1)
{
  unsigned int v2; // ebx
  _WORD *v3; // rsi
  _BYTE *v4; // rdx
  char *v5; // rdi
  unsigned int v6; // r8d
  __int64 v7; // rbp
  unsigned int v8; // edi
  _BYTE v10[176]; // [rsp+30h] [rbp-E8h] BYREF

  memset(v10, 0, sizeof(v10));
  v2 = 0;
  v3 = (_WORD *)(a1 + 80);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( a1 + 80 < (unsigned __int64)(a1 + 1104) )
  {
    v7 = 0LL;
    do
    {
      if ( (*v3 & 0xC000) == 0x4000 )
      {
        if ( !v4 )
        {
          v4 = v10;
          v5 = &v10[48];
        }
        *(_QWORD *)v5 = *(_QWORD *)(a1 + 24) + (v7 >> 1);
        v5 += 8;
        if ( v5 == v4 + 176 )
        {
          *(_QWORD *)v4 = 0LL;
          *((_DWORD *)v4 + 2) = 131248;
          *((_QWORD *)v4 + 4) = 0LL;
          *((_QWORD *)v4 + 5) = 0x10000LL;
          if ( (unsigned int)sub_140398948() )
            return 1;
          v4 = 0LL;
        }
      }
      ++v3;
      v7 += 2LL;
    }
    while ( (unsigned __int64)v3 < a1 + 1104 );
    v6 = 0;
    if ( v4 )
    {
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 4) = 0LL;
      v8 = (unsigned int)((v5 - v4 - 48) >> 3) << 12;
      *((_QWORD *)v4 + 5) = v8;
      *((_WORD *)v4 + 4) = 8 * ((v8 >> 12) + 6);
      *((_WORD *)v4 + 5) = 2;
      if ( (unsigned int)sub_140398948() )
        return 1;
      return v2;
    }
  }
  return v6;
}
