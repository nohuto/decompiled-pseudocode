/*
 * XREFs of sub_140766100 @ 0x140766100
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 */

__int64 __fastcall sub_140766100(const void **a1, unsigned int a2)
{
  unsigned int v3; // edi
  _DWORD *v4; // rcx
  unsigned int v5; // r14d
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ebp
  _DWORD *v10; // rax
  _DWORD *v11; // rsi
  const void *v12; // rbx

  v3 = 0;
  v4 = *a1;
  v5 = v4[37] + 112;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)v4 + v6 + 80) );
  v7 = 2 * v6 + 2;
  v8 = 0;
  if ( v7 != 2 )
    v8 = v7;
  v9 = v5 - v8 + 400;
  if ( v9 > v5 )
  {
    v10 = (_DWORD *)sub_140767730(a2, 256LL, v9, 1265659472LL);
    v11 = v10;
    if ( v10 )
    {
      v12 = *a1;
      memmove(v10, *a1, v5);
      v11[16] = 1;
      v11[37] = v9 - 112;
      *((_QWORD *)v11 + 10) = v12;
      *a1 = v11;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
