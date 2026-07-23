/*
 * XREFs of sub_1406EA034 @ 0x1406EA034
 * Callers:
 *     sub_14072ACC0 @ 0x14072ACC0 (sub_14072ACC0.c)
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14062E480 @ 0x14062E480 (sub_14062E480.c)
 */

void __fastcall sub_1406EA034(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  int v5; // eax
  _OWORD *v6; // r10
  int v7; // ecx
  int v8; // eax
  bool v9; // cc
  unsigned int v10; // r9d
  _OWORD *v11; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+38h] [rbp-48h]
  int v13; // [rsp+3Ch] [rbp-44h]
  _OWORD *v14; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+48h] [rbp-38h]
  int v16; // [rsp+4Ch] [rbp-34h]
  _OWORD v17[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( a3 )
    v5 = *a3;
  else
    v5 = 0;
  v6 = v17;
  if ( a3 )
    v6 = a3;
  *(_DWORD *)v6 = v5 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v6 + 1) = dword_140C59048;
  *((_QWORD *)v6 + 1) = qword_140C59030 + qword_140C59038;
  *((_QWORD *)v6 + 2) = qword_140C59040;
  v7 = dword_140C5904C;
  *((_DWORD *)v6 + 6) = dword_140C5904C;
  v8 = dword_140C59050;
  v9 = v7 <= dword_140C59050;
  *((_DWORD *)v6 + 7) = dword_140C59050;
  if ( !v9 )
    v7 = v8;
  *((_DWORD *)v6 + 6) = v7;
  if ( v6 == v17 )
  {
    if ( a1 && a2 )
    {
      v13 = 0;
      v10 = *a2;
      v11 = v6;
      v12 = 32;
      sub_14062E480((__int64)&v11, 1u, a1, v10, 0x27Cu, 0x401802u);
    }
    else
    {
      v16 = 0;
      v14 = v6;
      v15 = 32;
      sub_14035EDE4((__int64)&v14, 1u, 0x20080000u, 0x27Cu, 0x401802u);
    }
  }
}
