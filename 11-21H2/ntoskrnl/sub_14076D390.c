/*
 * XREFs of sub_14076D390 @ 0x14076D390
 * Callers:
 *     sub_14076CDB4 @ 0x14076CDB4 (sub_14076CDB4.c)
 *     sub_14076D160 @ 0x14076D160 (sub_14076D160.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14076D4A4 @ 0x14076D4A4 (sub_14076D4A4.c)
 */

__int64 __fastcall sub_14076D390(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  int v10; // r9d
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  _QWORD v17[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v17, 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 504);
  LODWORD(v17[3]) = a5;
  BYTE4(v17[3]) = a6;
  v17[2] = 80LL;
  v17[4] = a7;
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
LABEL_12:
        v14 = v17[0];
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = sub_14076D4A4(a1, a2, v17[2], v10, v17[3], SBYTE4(v17[3]), v17[4], (__int64)&v17[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v17[0]) = v13;
    v16 = sub_14042A5E0(a1, a2);
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        if ( !v16 )
          goto LABEL_5;
        return (unsigned int)-1073741595;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v14 >= 0 && a8 )
    *a8 = v17[5];
  return (unsigned int)v14;
}
