/*
 * XREFs of sub_140A280B8 @ 0x140A280B8
 * Callers:
 *     sub_140A28530 @ 0x140A28530 (sub_140A28530.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A281F8 @ 0x140A281F8 (sub_140A281F8.c)
 */

__int64 __fastcall sub_140A280B8(__int64 a1, __int64 a2, int a3)
{
  int v6; // r9d
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD v15[22]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  v7 = *(_QWORD *)(a1 + 504);
  v15[5] = 0;
  v15[4] = a3;
  LOBYTE(v15[6]) = 1;
  if ( v7 )
  {
    v8 = sub_14042A5E0(a1, a2);
    if ( v8 == -1073741822 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v8 == -1073741536 )
        return v15[0];
      if ( v8 )
        return (unsigned int)-1073741595;
    }
  }
  v9 = sub_140A281F8(a1, a2, v15[4], v6, v15[6]);
  v10 = v9;
  if ( !v7 )
    return v10;
  v15[0] = v9;
  v11 = sub_14042A5E0(a1, a2);
  v12 = v11;
  if ( v11 == -1073741822 )
    return v10;
  if ( v11 == -1073741536 )
    return v15[0];
  v13 = v10;
  if ( v12 )
    return (unsigned int)-1073741595;
  return v13;
}
