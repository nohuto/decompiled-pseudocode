/*
 * XREFs of sub_140693EA8 @ 0x140693EA8
 * Callers:
 *     sub_1405994CC @ 0x1405994CC (sub_1405994CC.c)
 *     sub_1405994E4 @ 0x1405994E4 (sub_1405994E4.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 *     sub_14096DD40 @ 0x14096DD40 (sub_14096DD40.c)
 * Callees:
 *     sub_1402182F8 @ 0x1402182F8 (sub_1402182F8.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140599658 @ 0x140599658 (sub_140599658.c)
 *     sub_14096DC98 @ 0x14096DC98 (sub_14096DC98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140693EA8(_QWORD *P)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  _QWORD **v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 3, 0xFFFFFFFF) == 1 )
  {
    sub_140599658(P);
    v2 = *((_DWORD *)P + 2);
    v3 = sub_1402182F8(*((_WORD *)P + 183));
    if ( (DWORD1(xmmword_140D06900) & 0x400000) != 0 )
    {
      v8 = 0;
      v11 = 0;
      v9 = &v6;
      v7 = v2;
      v6 = P;
      v10 = 12;
      sub_14035EDE4((__int64)&v9, 1u, 0x20400000u, 0x24Eu, 0x401802u);
    }
    sub_1403606C4(*(_QWORD *)(v3 + 176));
    v4 = (void *)P[96];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    sub_14096DC98(v2);
    v5 = (void *)P[112];
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag(P, 0);
  }
}
