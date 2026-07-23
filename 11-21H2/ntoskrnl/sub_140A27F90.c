/*
 * XREFs of sub_140A27F90 @ 0x140A27F90
 * Callers:
 *     sub_140A27B38 @ 0x140A27B38 (sub_140A27B38.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A28530 @ 0x140A28530 (sub_140A28530.c)
 */

__int64 __fastcall sub_140A27F90(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  _DWORD v12[22]; // [rsp+40h] [rbp-88h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = *(_QWORD *)(a1 + 504);
  if ( v4 )
  {
    v5 = sub_14042A5E0(a1, a2);
    if ( v5 == -1073741822 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( v5 == -1073741536 )
        return v12[0];
      if ( v5 )
        return (unsigned int)-1073741595;
    }
  }
  v6 = sub_140A28530(a1, a2, v12[4]);
  v7 = v6;
  if ( !v4 )
    return v7;
  v12[0] = v6;
  v8 = sub_14042A5E0(a1, a2);
  v9 = v8;
  if ( v8 == -1073741822 )
    return v7;
  if ( v8 == -1073741536 )
    return v12[0];
  v10 = v7;
  if ( v9 )
    return (unsigned int)-1073741595;
  return v10;
}
