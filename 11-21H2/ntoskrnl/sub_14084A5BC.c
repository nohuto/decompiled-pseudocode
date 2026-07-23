/*
 * XREFs of sub_14084A5BC @ 0x14084A5BC
 * Callers:
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

char __fastcall sub_14084A5BC(__int64 a1)
{
  char v1; // bl
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rcx
  unsigned __int16 *v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+32h] [rbp-16h]
  __int16 v12; // [rsp+36h] [rbp-12h]
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( (unsigned __int8)byte_140D06992 > 1u || (unsigned __int8)byte_140D069E7 > 1u )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v9[1] = (unsigned __int16 *)qword_140C0BBF8;
    v9[0] = &word_140C0BBF0;
    v10 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v9) )
    {
      v4 = 0;
      if ( *(_DWORD *)(a1 + 4) )
      {
        v5 = v13;
        do
        {
          v6 = *(_QWORD *)(sub_140348800(v5) + 33968);
          if ( (unsigned __int8)byte_140D06992 <= 1u )
            v7 = *(_BYTE *)(v6 + 302);
          else
            v7 = *(_BYTE *)(v6 + 301);
          *(_BYTE *)(v4 + v5 * *(_DWORD *)(a1 + 4) + a1 + 2LL * (v4 + v5 * *(_DWORD *)(a1 + 4)) + 25) = v7;
          v8 = v4++;
          *(_BYTE *)(*(_QWORD *)(a1 + 16) + 2 * v8 + 1) = 1;
        }
        while ( v4 < *(_DWORD *)(a1 + 4) );
      }
    }
    return 1;
  }
  return v1;
}
