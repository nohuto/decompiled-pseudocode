/*
 * XREFs of sub_1409D4BC0 @ 0x1409D4BC0
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409D4AF4 @ 0x1409D4AF4 (sub_1409D4AF4.c)
 *     sub_1409D77F8 @ 0x1409D77F8 (sub_1409D77F8.c)
 *     sub_1409D790C @ 0x1409D790C (sub_1409D790C.c)
 *     sub_1409D7990 @ 0x1409D7990 (sub_1409D7990.c)
 *     sub_1409D79E8 @ 0x1409D79E8 (sub_1409D79E8.c)
 *     sub_1409D7A10 @ 0x1409D7A10 (sub_1409D7A10.c)
 *     sub_1409D7D54 @ 0x1409D7D54 (sub_1409D7D54.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409D4BC0(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _PRIVILEGE_SET *v8; // rsi
  int v9; // ebx
  __int64 v10; // rcx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  _PRIVILEGE_SET *v14; // rax
  _DWORD v16[4]; // [rsp+20h] [rbp-478h] BYREF
  __int64 v17; // [rsp+30h] [rbp-468h]
  _QWORD v18[132]; // [rsp+40h] [rbp-458h] BYREF

  v17 = a1;
  v8 = 0LL;
  v16[0] = -1;
  memset(v18, 0, sizeof(v18));
  if ( a3 == 1056 )
  {
    if ( a4 )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v10 = a2;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 1055) = *(_BYTE *)(v10 + 1055);
    }
    v11 = (_OWORD *)a2;
    v12 = v18;
    v13 = 8LL;
    do
    {
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12 += 8;
      *(v12 - 1) = v11[7];
      v11 += 8;
      --v13;
    }
    while ( v13 );
    *v12 = *v11;
    v12[1] = v11[1];
    if ( LOBYTE(v18[0]) != 3 || (v18[0] & 0xFFFFFF00) != 0 || HIDWORD(v18[2]) )
    {
      v9 = -1073741811;
    }
    else
    {
      v9 = sub_1409D4AF4(a1);
      if ( v9 >= 0 )
      {
        v14 = (_PRIVILEGE_SET *)sub_140260C2C(0x428uLL, 0x61436D73u);
        v8 = v14;
        if ( v14 )
        {
          sub_1409D7A10(v14);
          HIWORD(v18[131]) = 0;
          v9 = sub_1409D7D54(v8, &v18[1], &v18[4]);
          if ( v9 >= 0 )
          {
            v9 = sub_1409D77F8(a1, v8, v16);
            if ( v9 >= 0 )
            {
              v8 = 0LL;
              v16[1] = 1;
              v9 = 0;
              *(_DWORD *)(a2 + 4) = v16[0];
            }
          }
        }
        else
        {
          v9 = -1073741670;
        }
      }
    }
  }
  else
  {
    v9 = -1073741306;
  }
  if ( v16[0] != -1 )
    sub_1409D79E8(a1);
  if ( v8 )
  {
    sub_1409D790C(v8);
    SeFreePrivileges(v8);
  }
  return (unsigned int)v9;
}
