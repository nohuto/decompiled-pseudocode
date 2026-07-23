/*
 * XREFs of sub_140A27D84 @ 0x140A27D84
 * Callers:
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 *     sub_140A27B38 @ 0x140A27B38 (sub_140A27B38.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A27EE4 @ 0x140A27EE4 (sub_140A27EE4.c)
 */

__int64 __fastcall sub_140A27D84(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  HANDLE v14[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v14, 0, 0x58uLL);
  v8 = *(_QWORD *)(a1 + 504);
  HIDWORD(v14[4]) = 0;
  LODWORD(v14[2]) = 4;
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
        goto LABEL_12;
      if ( v9 )
        goto LABEL_14;
    }
  }
  v10 = sub_140A27EE4(a1, a2, v14[2], (unsigned int)&v14[3], (__int64)&v14[4], SWORD2(v14[4]));
  v11 = v10;
  if ( v8 )
  {
    LODWORD(v14[0]) = v10;
    v12 = sub_14042A5E0(a1, a2);
    if ( v12 != -1073741822 )
    {
      if ( v12 != -1073741536 )
      {
        if ( !v12 )
          goto LABEL_8;
LABEL_14:
        v11 = -1073741595;
        goto LABEL_15;
      }
LABEL_12:
      v11 = (int)v14[0];
    }
  }
LABEL_8:
  if ( v11 >= 0 && a4 )
  {
    *a4 = v14[3];
LABEL_18:
    if ( a5 )
      *a5 = v14[4];
    return (unsigned int)v11;
  }
LABEL_15:
  if ( v14[3] )
    ZwClose(v14[3]);
  if ( v11 >= 0 )
    goto LABEL_18;
  return (unsigned int)v11;
}
