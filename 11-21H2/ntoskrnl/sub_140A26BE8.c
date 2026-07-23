/*
 * XREFs of sub_140A26BE8 @ 0x140A26BE8
 * Callers:
 *     sub_1406BA8F4 @ 0x1406BA8F4 (sub_1406BA8F4.c)
 *     sub_140954BA8 @ 0x140954BA8 (sub_140954BA8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A26D58 @ 0x140A26D58 (sub_140A26D58.c)
 */

__int64 __fastcall sub_140A26BE8(__int64 a1, __int64 a2, int a3, int a4, HANDLE *a5)
{
  __int64 v5; // r14
  __int64 v9; // rsi
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  HANDLE v15[10]; // [rsp+48h] [rbp-21h] BYREF

  v5 = *(_QWORD *)&qword_140D00AC0;
  memset(v15, 0, sizeof(v15));
  v9 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 488LL);
  if ( a4 || (LODWORD(v15[2]) = 1, a5) )
    LODWORD(v15[2]) = a4;
  HIDWORD(v15[4]) = 0;
  if ( v9 )
  {
    v10 = sub_14042A5E0(*(_QWORD *)&qword_140D00AC0, a2);
    if ( v10 == -1073741822 )
    {
      v9 = 0LL;
    }
    else
    {
      if ( v10 == -1073741536 )
        goto LABEL_15;
      if ( v10 )
        goto LABEL_17;
    }
  }
  v11 = sub_140A26D58(v5, a2, a3, v15[2], (__int64)&v15[3], (__int64)&v15[4], HIDWORD(v15[4]));
  v12 = v11;
  if ( v9 )
  {
    LODWORD(v15[0]) = v11;
    v13 = sub_14042A5E0(v5, a2);
    if ( v13 != -1073741822 )
    {
      if ( v13 != -1073741536 )
      {
        if ( !v13 )
          goto LABEL_11;
LABEL_17:
        v12 = -1073741595;
        goto LABEL_18;
      }
LABEL_15:
      v12 = (int)v15[0];
    }
  }
LABEL_11:
  if ( v12 >= 0 && a5 )
  {
    *a5 = v15[3];
    return (unsigned int)v12;
  }
LABEL_18:
  if ( v15[3] )
    ZwClose(v15[3]);
  return (unsigned int)v12;
}
