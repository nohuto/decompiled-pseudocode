/*
 * XREFs of sub_140650AA8 @ 0x140650AA8
 * Callers:
 *     sub_140652340 @ 0x140652340 (sub_140652340.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406509F8 @ 0x1406509F8 (sub_1406509F8.c)
 */

__int64 __fastcall sub_140650AA8(CHAR *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  UNICODE_STRING **v5; // rsi
  unsigned int *v6; // rbx
  int v8; // r14d
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v16[4]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (UNICODE_STRING **)v16;
  v6 = v15;
  v15[0] = *((_DWORD *)a1 + 3);
  v15[1] = *((_DWORD *)a1 + 4);
  v8 = *((_DWORD *)a1 + 1);
  v15[2] = *((_DWORD *)a1 + 5);
  v9 = v8 - 1;
  v10 = *((_DWORD *)a1 + 6);
  v11 = 0;
  v12 = 0;
  v15[3] = v10;
  v16[0] = a2;
  v16[1] = a3;
  v16[2] = a4;
  v16[3] = a5;
  do
  {
    v13 = *v6;
    if ( (unsigned int)v13 >= 0x24 && (unsigned int)v13 <= v9 )
    {
      v11 = sub_1406509F8(&a1[v13], *v5);
      if ( v11 < 0 )
        break;
    }
    ++v12;
    ++v6;
    ++v5;
  }
  while ( v12 < 4 );
  return (unsigned int)v11;
}
