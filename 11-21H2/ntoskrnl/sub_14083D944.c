/*
 * XREFs of sub_14083D944 @ 0x14083D944
 * Callers:
 *     sub_14083D8B0 @ 0x14083D8B0 (sub_14083D8B0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14083DC20 @ 0x14083DC20 (sub_14083DC20.c)
 */

__int64 __fastcall sub_14083D944(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  _QWORD v19[11]; // [rsp+40h] [rbp-61h] BYREF

  memset(v19, 0, sizeof(v19));
  v11 = *(_QWORD *)(a1 + 504);
  v19[3] = a3;
  LODWORD(v19[5]) = a5;
  v19[2] = a2;
  v19[4] = a4;
  v19[6] = a6;
  LODWORD(v19[7]) = a7;
  if ( v11 )
  {
    v12 = sub_14042A5E0(a1, 0LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v19[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = sub_14083DC20(a1, v19[2], v19[3], v19[4], v19[5], v19[6], v19[7]);
  v14 = v13;
  if ( !v11 )
    return v14;
  LODWORD(v19[0]) = v13;
  v16 = sub_14042A5E0(a1, 0LL);
  v17 = v16;
  if ( v16 == -1073741822 )
    return v14;
  if ( v16 == -1073741536 )
    return LODWORD(v19[0]);
  v18 = v14;
  if ( v17 )
    return (unsigned int)-1073741595;
  return v18;
}
