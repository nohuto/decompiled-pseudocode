/*
 * XREFs of sub_1403B2E2C @ 0x1403B2E2C
 * Callers:
 *     RtlVerifyVersionInfo @ 0x1403B2B70 (RtlVerifyVersionInfo.c)
 * Callees:
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool __fastcall sub_1403B2E2C(int a1, int a2, int a3, bool *a4, char a5)
{
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  char *v12; // rax
  signed __int64 v13; // r8
  char v14; // cl
  int v15; // ebx
  _BYTE v16[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-40h] BYREF

  if ( (a5 & 1) != 0 )
  {
    sub_1403BF7F4(v17, 20LL, qword_1404397C0, (unsigned int)a2);
    sub_1403BF7F4(v16, 20LL, qword_1404397C0, (unsigned int)a3);
    a2 = 0;
    v12 = v16;
    v13 = v17 - v16;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 != v12[v13] )
        break;
      ++v12;
      if ( !v14 )
      {
        a3 = 0;
        goto LABEL_2;
      }
    }
    a3 = (unsigned __int8)*v12 < (unsigned __int8)v12[v13] ? -1 : 1;
  }
LABEL_2:
  *a4 = a2 == a3;
  v8 = a1 - 1;
  if ( !v8 )
    return a3 == a2;
  v9 = v8 - 1;
  if ( !v9 )
    return a3 > a2;
  v10 = v9 - 1;
  if ( !v10 )
    return a3 >= a2;
  v15 = v10 - 1;
  if ( !v15 )
    return a3 < a2;
  if ( v15 == 1 )
    return a3 <= a2;
  return 0;
}
