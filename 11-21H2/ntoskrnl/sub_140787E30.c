/*
 * XREFs of sub_140787E30 @ 0x140787E30
 * Callers:
 *     sub_140787DE8 @ 0x140787DE8 (sub_140787DE8.c)
 *     sub_140789460 @ 0x140789460 (sub_140789460.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781268 @ 0x140781268 (sub_140781268.c)
 */

__int64 __fastcall sub_140787E30(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  _QWORD v18[12]; // [rsp+50h] [rbp-71h] BYREF

  memset(v18, 0, 0x58uLL);
  if ( (unsigned __int8)a3 != 32 && (unsigned __int8)a3 != 64 )
    return (unsigned int)-1073741811;
  v11 = *(_QWORD *)(a1 + 504);
  LODWORD(v18[3]) = a5;
  v18[4] = a7;
  BYTE4(v18[3]) = a6;
  v18[2] = __PAIR64__(a4, a3);
  if ( v11 )
  {
    v12 = sub_14042A5E0(a1, a2);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
      {
LABEL_15:
        v14 = v18[0];
        goto LABEL_7;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = sub_140781268(a1, a2, v18[2], SHIDWORD(v18[2]), v18[3], SBYTE4(v18[3]), v18[4], &v18[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v18[0]) = v13;
    v16 = sub_14042A5E0(a1, a2);
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        if ( !v16 )
          goto LABEL_7;
        return (unsigned int)-1073741595;
      }
      goto LABEL_15;
    }
  }
LABEL_7:
  if ( v14 >= 0 && a8 )
    *a8 = v18[5];
  return (unsigned int)v14;
}
