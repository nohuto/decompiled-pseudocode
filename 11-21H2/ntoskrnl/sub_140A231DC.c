/*
 * XREFs of sub_140A231DC @ 0x140A231DC
 * Callers:
 *     sub_140A24D6C @ 0x140A24D6C (sub_140A24D6C.c)
 *     sub_140A25124 @ 0x140A25124 (sub_140A25124.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A23328 @ 0x140A23328 (sub_140A23328.c)
 */

__int64 __fastcall sub_140A231DC(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  _DWORD v12[22]; // [rsp+40h] [rbp-41h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (unsigned __int8)a3 != 32 && (unsigned __int8)a3 != 64 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 504);
  v12[5] = 0;
  v12[7] = 0;
  v12[4] = a3;
  LOBYTE(v12[6]) = 1;
  if ( v6 )
  {
    v7 = sub_14042A5E0(a1, a2);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v12[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = sub_140A23328(a1, a2, v12[4], v12[5], v12[6]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v12[0] = v8;
  v10 = sub_14042A5E0(a1, a2);
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v12[0];
  if ( v10 )
    return (unsigned int)-1073741595;
  return v9;
}
