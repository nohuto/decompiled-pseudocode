/*
 * XREFs of sub_140B4CF2C @ 0x140B4CF2C
 * Callers:
 *     sub_140B4CCF8 @ 0x140B4CCF8 (sub_140B4CCF8.c)
 *     sub_140B4D124 @ 0x140B4D124 (sub_140B4D124.c)
 * Callees:
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

__int64 __fastcall sub_140B4CF2C(char a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v1 = 0;
  if ( a1 )
    v1 = -1;
  LODWORD(v7) = v1;
  v2 = sub_140AF9E94(qword_140C54AC0, (unsigned __int64)&v7 & -(__int64)(a1 != 0), 1u);
  v4 = v2;
  if ( v2 )
  {
    LOBYTE(v3) = 1;
    v5 = (void *)sub_1403BF3B8(v2, 1LL, 1u, v3, 4u);
    if ( v5 )
      memset(v5, 0, 0x1000uLL);
    else
      return 0LL;
  }
  return v4;
}
