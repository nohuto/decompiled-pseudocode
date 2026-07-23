/*
 * XREFs of sub_140A25F18 @ 0x140A25F18
 * Callers:
 *     sub_1409496C0 @ 0x1409496C0 (sub_1409496C0.c)
 *     sub_140A262D8 @ 0x140A262D8 (sub_140A262D8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A26068 @ 0x140A26068 (sub_140A26068.c)
 */

__int64 __fastcall sub_140A25F18(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r14
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  _QWORD v17[11]; // [rsp+40h] [rbp-59h] BYREF

  memset(v17, 0, sizeof(v17));
  v9 = *(_QWORD *)(a1 + 504);
  LODWORD(v17[5]) = 0;
  v17[2] = a3;
  v17[3] = a4;
  v17[4] = a5;
  if ( v9 )
  {
    v10 = sub_14042A5E0(a1, a2);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        return LODWORD(v17[0]);
      if ( v10 )
        return (unsigned int)-1073741595;
    }
  }
  v11 = sub_140A26068(a1, a2, v17[2], v17[3], v17[4], v17[5]);
  v12 = v11;
  if ( !v9 )
    return v12;
  LODWORD(v17[0]) = v11;
  v13 = sub_14042A5E0(a1, a2);
  v14 = v13;
  if ( v13 == -1073741822 )
    return v12;
  if ( v13 == -1073741536 )
    return LODWORD(v17[0]);
  v15 = v12;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v15;
}
