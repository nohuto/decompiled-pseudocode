/*
 * XREFs of sub_140589DDC @ 0x140589DDC
 * Callers:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_140265428 @ 0x140265428 (sub_140265428.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14058CAA0 @ 0x14058CAA0 (sub_14058CAA0.c)
 */

void __fastcall sub_140589DDC(_QWORD *a1, unsigned __int16 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]

  v3 = a1;
  v4 = a3;
  v6 = 48LL * *a1 - 0x220000000000LL;
  if ( ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 1 )
  {
    v7 = (unsigned int)sub_14058CAA0(v6, 1LL, a3);
    v9 = (unsigned int)(v8 + 8);
  }
  else
  {
    v7 = 0LL;
    v9 = 10LL;
  }
  if ( a3 )
  {
    v10 = v9 | (16 * v7);
    do
    {
      v11 = v3;
      v12[1] = *v3;
      v12[0] = v10;
      do
      {
        ++v3;
        --v4;
      }
      while ( v4 && *v3 == *(v3 - 1) + 1LL );
      v15 = 0;
      v14 = 24;
      v12[2] = v3 - v11;
      v13 = v12;
      sub_14035EDE4((__int64)&v13, 1u, 0x20000001u, a2, 0x11401B04u);
    }
    while ( v4 );
  }
}
