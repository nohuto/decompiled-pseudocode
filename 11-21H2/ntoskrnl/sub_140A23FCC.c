/*
 * XREFs of sub_140A23FCC @ 0x140A23FCC
 * Callers:
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 *     sub_140B4FCB0 @ 0x140B4FCB0 (sub_140B4FCB0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 */

__int64 __fastcall sub_140A23FCC(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  _DWORD v16[22]; // [rsp+40h] [rbp-51h] BYREF

  memset(v16, 0, sizeof(v16));
  v8 = *(_QWORD *)(a1 + 504);
  v16[7] = 0;
  v16[5] = a4;
  v16[4] = a3;
  LOBYTE(v16[6]) = 1;
  if ( v8 )
  {
    v9 = sub_14042A5E0(a1, a2);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v16[0];
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = sub_140A24104(a1, a2, v16[4], v16[5], v16[6]);
  v11 = v10;
  if ( !v8 )
    return v11;
  v16[0] = v10;
  v12 = sub_14042A5E0(a1, a2);
  v13 = v12;
  if ( v12 == -1073741822 )
    return v11;
  if ( v12 == -1073741536 )
    return v16[0];
  v14 = v11;
  if ( v13 )
    return (unsigned int)-1073741595;
  return v14;
}
