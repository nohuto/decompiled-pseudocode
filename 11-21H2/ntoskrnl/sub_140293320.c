/*
 * XREFs of sub_140293320 @ 0x140293320
 * Callers:
 *     <none>
 * Callees:
 *     sub_140243E5C @ 0x140243E5C (sub_140243E5C.c)
 *     sub_140248DB8 @ 0x140248DB8 (sub_140248DB8.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402944A4 @ 0x1402944A4 (sub_1402944A4.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405DB0D8 @ 0x1405DB0D8 (sub_1405DB0D8.c)
 */

char sub_140293320()
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 *v3; // r10
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned int v6; // r8d
  unsigned __int16 i; // dx
  __int64 v8; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+32h] [rbp-16h]
  __int16 v12; // [rsp+36h] [rbp-12h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( dword_140C20488 )
  {
    if ( sub_140248DB8() && sub_140243E5C() )
    {
      v9[1] = qword_140C0B8E8[0];
      v9[0] = &word_140C0B8E0;
      v10 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v9) )
      {
        v1 = sub_140348800(v13);
        sub_1402944A4(v1 + 33968);
      }
      v2 = qword_140D06970;
      v3 = &qword_140D06970;
      while ( (__int64 *)v2 != v3 )
      {
        if ( *(_DWORD *)(v2 + 296) )
        {
          v4 = 0;
          do
          {
            v5 = *(_QWORD *)(v2 + 312) + 136LL * v4;
            if ( *(_DWORD *)(v5 + 16) == 1 )
              sub_1402944A4(*(_QWORD *)v5);
            ++v4;
          }
          while ( v4 < *(_DWORD *)(v2 + 296) );
        }
        v2 = *(_QWORD *)v2;
      }
      v6 = dword_140C1CF34;
      for ( i = 0; i < v6; *(_QWORD *)(qword_140C1CF38 + 336 * v8 + 112) = *(_QWORD *)(qword_140C1CF38 + 336 * v8 + 104) )
        v8 = i++;
      dword_140C20488 = 0;
    }
    else
    {
      sub_1405DB0D8();
      --dword_140C20488;
      dword_140C20394 = 4;
    }
  }
  return 1;
}
