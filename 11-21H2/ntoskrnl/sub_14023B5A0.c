/*
 * XREFs of sub_14023B5A0 @ 0x14023B5A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140345110 @ 0x140345110 (sub_140345110.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405CF458 @ 0x1405CF458 (sub_1405CF458.c)
 */

char sub_14023B5A0()
{
  char v0; // bl
  __int64 i; // rdi
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h]
  __int16 v13; // [rsp+40h] [rbp-C8h]
  int v14; // [rsp+42h] [rbp-C6h]
  __int16 v15; // [rsp+46h] [rbp-C2h]
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _BYTE v18[248]; // [rsp+58h] [rbp-B0h] BYREF

  v0 = 0;
  v16 = 2097153LL;
  v14 = 0;
  v15 = 0;
  LODWORD(v10) = 0;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 990) )
    {
      sub_1402FEC10(i + 24, &v16, &v16, WORD1(v16), v10);
      LODWORD(v10) = 0;
      if ( *(_DWORD *)(i + 296) )
      {
        v6 = 0;
        do
        {
          v7 = *(_QWORD *)(i + 312) + 136LL * v6;
          if ( *(_DWORD *)(v7 + 16) )
          {
            if ( *(_BYTE *)(v7 + 124) )
            {
              LOBYTE(v5) = 1;
              sub_1405CF458(i, *(_QWORD *)(i + 312) + 136LL * v6, v5);
              *(_BYTE *)(v7 + 124) = 0;
            }
            sub_1405CF458(i, v7, 0LL);
          }
          ++v6;
        }
        while ( v6 < *(_DWORD *)(i + 296) );
        LODWORD(v10) = v6;
      }
      *(_BYTE *)(i + 990) = 0;
    }
  }
  v12 = v17;
  v11 = &v16;
  v13 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v11) )
  {
    v3 = sub_140348800((unsigned int)v10);
    v4 = *(_QWORD *)(v3 + 33976);
    if ( *(_BYTE *)(v4 + 124) )
    {
      LOBYTE(v2) = 1;
      if ( (unsigned __int8)sub_14023B798(v3, v2) )
      {
        *(_BYTE *)(v4 + 124) = 0;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( (unsigned __int8)sub_14023B798(v3, 0LL) )
        KeRemoveProcessorAffinityEx(&v16, (unsigned int)v10);
    }
  }
  dword_140C204B0 = KeCountSetBitsAffinityEx(&v16);
  if ( !dword_140C204B0 )
    return 1;
  v12 = v17;
  v11 = &v16;
  v13 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v11) )
  {
    v8 = sub_140348800((unsigned int)v10);
    sub_140345110(v8, 2LL);
  }
  return v0;
}
