/*
 * XREFs of sub_140882DDC @ 0x140882DDC
 * Callers:
 *     sub_140711614 @ 0x140711614 (sub_140711614.c)
 *     sub_1409E2E90 @ 0x1409E2E90 (sub_1409E2E90.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F5F6 @ 0x14045F5F6 (sub_14045F5F6.c)
 */

__int64 __fastcall sub_140882DDC(void *a1, _QWORD *a2, _QWORD *a3)
{
  int v6; // r9d
  unsigned int *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD v12[384]; // [rsp+20h] [rbp-628h] BYREF

  memset(v12, 0, sizeof(v12));
  v6 = sub_14045F5F6(a1);
  if ( v6 >= 0 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v7 = &v12[11];
      v8 = v12[3];
      v9 = 8LL;
      do
      {
        v10 = *v7;
        v7 += 2;
        *a2 += v8 * v10;
        --v9;
      }
      while ( v9 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v12[8] << 12;
  }
  return (unsigned int)v6;
}
