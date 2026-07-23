/*
 * XREFs of sub_14098EC78 @ 0x14098EC78
 * Callers:
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14098EBBC @ 0x14098EBBC (sub_14098EBBC.c)
 */

__int64 sub_14098EC78()
{
  __int64 result; // rax
  __int64 v1; // rax
  __int64 i; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0;
  v6 = 0;
  v9 = 0;
  v5[1] = (unsigned __int16 *)qword_140C0B8E8[0];
  v5[0] = (unsigned __int16 *)word_140C0B8E0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v9, v5);
    if ( (_DWORD)result )
      break;
    v1 = sub_140348800(v9);
    sub_14098EBBC(v1 + 33968);
  }
  for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 296) )
    {
      v3 = 0;
      do
      {
        result = v3;
        v4 = *(_QWORD *)(i + 312) + 136LL * v3;
        if ( *(_DWORD *)(v4 + 16) == 1 )
          result = sub_14098EBBC(*(_QWORD *)v4);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(i + 296) );
    }
  }
  return result;
}
