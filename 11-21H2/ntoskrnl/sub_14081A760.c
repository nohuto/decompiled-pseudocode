/*
 * XREFs of sub_14081A760 @ 0x14081A760
 * Callers:
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1403B402C @ 0x1403B402C (sub_1403B402C.c)
 */

void sub_14081A760()
{
  __int64 v0; // rax
  __int64 i; // rbx
  unsigned int v2; // edi
  __int64 v3; // rcx
  unsigned __int16 *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+32h] [rbp-16h]
  __int16 v7; // [rsp+36h] [rbp-12h]
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = 0;
  v5 = 0;
  v8 = 0;
  v4[1] = (unsigned __int16 *)qword_140C0B8E8[0];
  v4[0] = (unsigned __int16 *)word_140C0B8E0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v4) )
  {
    v0 = sub_140348800(v8);
    sub_1403B402C(v0 + 33968);
  }
  for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 296) )
    {
      v2 = 0;
      do
      {
        v3 = *(_QWORD *)(i + 312) + 136LL * v2;
        if ( *(_DWORD *)(v3 + 16) == 1 )
          sub_1403B402C(*(_QWORD *)v3);
        ++v2;
      }
      while ( v2 < *(_DWORD *)(i + 296) );
    }
  }
}
