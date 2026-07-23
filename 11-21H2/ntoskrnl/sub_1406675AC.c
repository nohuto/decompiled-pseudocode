/*
 * XREFs of sub_1406675AC @ 0x1406675AC
 * Callers:
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406677EC @ 0x1406677EC (sub_1406677EC.c)
 */

__int64 __fastcall sub_1406675AC(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5, char a6, char a7)
{
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 result; // rax
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rcx
  _QWORD v17[10]; // [rsp+30h] [rbp-31h] BYREF

  memset(v17, 0, 0x48uLL);
  if ( a2 )
  {
    if ( (unsigned __int64)(a2[2] - 40LL) > 0xFFD7
      || (*(_DWORD *)a2 & 0x100000) != 0 && *((_BYTE *)KeGetCurrentThread() + 562) )
    {
      return 3221225485LL;
    }
    v11 = *(_DWORD *)a2 & 0x3FF0000;
    *((_DWORD *)a2 + 16) &= 0xFFDu;
    *(_DWORD *)a2 = v11;
  }
  else
  {
    v17[4] = 0x4000LL;
    a2 = v17;
    v17[5] = 0x4000LL;
    HIDWORD(v17[1]) = 257;
    v14 = v17[0];
    if ( a7 )
      v14 = 4096;
    LODWORD(v17[0]) = v14;
    v17[2] = 512LL;
    v17[7] = 0x20000LL;
    v17[6] = 0LL;
    v17[3] = 0LL;
    *(_QWORD *)((char *)v17 + 4) = 12LL;
    LODWORD(v17[8]) = 0;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v15 = *(_DWORD *)a2 | 0x20000;
    *(_DWORD *)a2 = v15;
    if ( !a7 )
      goto LABEL_13;
    v16 = a5;
    if ( a5 <= dword_140D05270 )
    {
      if ( a6 )
        *(_DWORD *)a2 = v15 | 0x40000;
LABEL_28:
      a2[2] = v16;
      goto LABEL_13;
    }
    return 3221225485LL;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 2 )
  {
    *(_DWORD *)a2 &= ~0x20000u;
    if ( !a7 )
      goto LABEL_13;
    v16 = *(_QWORD *)(a3 + 272);
    if ( v16 <= (unsigned int)dword_140D05270 )
      goto LABEL_28;
    return 3221225485LL;
  }
  if ( a2 == v17 )
    *(_DWORD *)a2 |= 0x10000u;
  if ( a7 )
  {
    *(_DWORD *)a2 |= 0x20000u;
    if ( a4 )
    {
      *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)a4;
      *((_DWORD *)a2 + 3) = *(_DWORD *)(a4 + 8);
    }
    v12 = *(_QWORD *)(a3 + 272);
    goto LABEL_22;
  }
  v12 = *(_QWORD *)(a3 + 272);
  if ( a2[2] > v12 )
LABEL_22:
    a2[2] = v12;
LABEL_13:
  result = sub_1406677EC((char *)a2 + 4, v11, 0LL, 0x20000LL);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)(a1 + 256) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 272) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(a1 + 288) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(a1 + 304) = *((_OWORD *)a2 + 3);
    *(_QWORD *)(a1 + 320) = a2[8];
  }
  return result;
}
