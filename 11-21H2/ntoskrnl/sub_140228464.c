/*
 * XREFs of sub_140228464 @ 0x140228464
 * Callers:
 *     sub_140228170 @ 0x140228170 (sub_140228170.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14036CB28 @ 0x14036CB28 (sub_14036CB28.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405852C0 @ 0x1405852C0 (sub_1405852C0.c)
 */

__int64 __fastcall sub_140228464(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v16[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v16, 0, 0xB8uLL);
  v6 = 0;
  LODWORD(v16[1]) = 20;
  v16[3] = 0LL;
  v15 = sub_140317A10(a2);
  v7 = ((unsigned __int64)sub_140317A10(&v15) >> 12) & 0xFFFFFFFFFFLL;
  *(_QWORD *)(48 * v7 - 0x220000000000LL) = 0LL;
  v8 = sub_14033AC10(a2);
  sub_140228660(48 * v8 - 0x220000000000LL, 0LL);
  if ( (BYTE4(xmmword_140D06900) & 1) != 0 )
    sub_1405852C0(a1, 0LL, 10LL, a3);
  v9 = 0;
  if ( (unsigned int)sub_140317A80(a2) && (unsigned int)sub_140229550(v11, v10) )
    v9 = 1;
  *(_QWORD *)a2 = 0LL;
  if ( v9 )
    sub_1402294F0(a2, 0LL);
  sub_1402285E8(v16, 1LL, a2);
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v14 = 3LL;
    do
    {
      a2 = (__int64)(a2 << 25) >> 16;
      --v14;
    }
    while ( v14 );
    sub_14036CB28(a2, a2);
  }
  sub_14032F1B0(v16);
  v12 = qword_14001C780;
  do
  {
    if ( *v12 == a3 )
      break;
    ++v6;
    ++v12;
  }
  while ( v6 < 3 );
  result = sub_14028CA70(v7, v6, 4LL);
  _InterlockedExchangeAdd64(&qword_140C53518, -a3);
  return result;
}
