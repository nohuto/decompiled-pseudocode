/*
 * XREFs of sub_140A24FF8 @ 0x140A24FF8
 * Callers:
 *     sub_140787620 @ 0x140787620 (sub_140787620.c)
 *     sub_140954D10 @ 0x140954D10 (sub_140954D10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A25124 @ 0x140A25124 (sub_140A25124.c)
 */

__int64 __fastcall sub_140A24FF8(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD v14[22]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = *(_QWORD *)(a1 + 504);
  v14[4] = a3;
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
        return v14[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = sub_140A25124(a1, a2, v14[4]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v10 = sub_14042A5E0(a1, a2);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14[0];
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
