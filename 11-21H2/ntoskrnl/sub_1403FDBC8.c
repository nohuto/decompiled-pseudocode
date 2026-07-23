/*
 * XREFs of sub_1403FDBC8 @ 0x1403FDBC8
 * Callers:
 *     sub_1403FB1CC @ 0x1403FB1CC (sub_1403FB1CC.c)
 * Callees:
 *     sub_1403DF544 @ 0x1403DF544 (sub_1403DF544.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1403FDBC8(char a1)
{
  int v2; // r14d
  int v3; // ebx
  int v4; // r12d
  __int64 *v5; // rdi
  unsigned int i; // esi
  int v7; // eax
  int v8; // ecx
  char v9; // al
  __int64 result; // rax
  _DWORD v11[2]; // [rsp+20h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-18h]
  int v13; // [rsp+2Ch] [rbp-14h]

  v2 = 0;
  v3 = -4064;
  sub_1403DF544();
  v4 = v11[0];
  v5 = qword_140014110;
  for ( i = 0; i < 0x13; ++i )
  {
    v7 = *(unsigned __int8 *)v5;
    if ( v7 != v2 )
    {
      v2 = *(unsigned __int8 *)v5;
      sub_1403DF544();
      LOBYTE(v7) = *(_BYTE *)v5;
    }
    if ( (unsigned __int8)v7 > v4
      || (v8 = v11[*((unsigned __int8 *)v5 + 1)], !_bittest(&v8, *((unsigned __int8 *)v5 + 2))) )
    {
      v3 |= *((_DWORD *)v5 + 1);
    }
    ++v5;
  }
  if ( (a1 & 1) != 0 )
  {
    v9 = sub_1403DF544();
    if ( (v12 & 0x8000000) == 0 )
      goto LABEL_11;
    __asm { xgetbv }
    if ( (v9 & 6) != 6 )
LABEL_11:
      v3 |= 0x1810u;
  }
  if ( (v3 & 4) == 0 )
  {
    sub_1403DF544();
    if ( v11[1] == 1752462657 && v12 == 1145913699 && v13 == 1769238117 )
    {
      sub_1403DF544();
      if ( ((v11[0] >> 8) & 0xF) != 0xF || (unsigned int)(unsigned __int8)(v11[0] >> 20) + 15 < 0x15 )
        v3 |= 4u;
    }
  }
  result = sub_1403DF544();
  dword_140C094E0 = v3;
  return result;
}
