/*
 * XREFs of sub_1405FAA30 @ 0x1405FAA30
 * Callers:
 *     sub_140581158 @ 0x140581158 (sub_140581158.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F5F6 @ 0x14045F5F6 (sub_14045F5F6.c)
 */

__int64 __fastcall sub_1405FAA30(void *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  _DWORD v9[384]; // [rsp+20h] [rbp-618h] BYREF

  memset(v9, 0, sizeof(v9));
  result = sub_14045F5F6(a1);
  if ( (int)result >= 0 )
  {
    v5 = 0LL;
    v6 = &v9[11];
    v7 = 8LL;
    do
    {
      v8 = *v6;
      v6 += 2;
      v5 += v8;
      --v7;
    }
    while ( v7 );
    *a2 = v5 * v9[3];
    return 0LL;
  }
  return result;
}
