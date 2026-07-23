/*
 * XREFs of sub_140571FDC @ 0x140571FDC
 * Callers:
 *     sub_1402FF620 @ 0x1402FF620 (sub_1402FF620.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall sub_140571FDC(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdx
  unsigned __int8 v5; // al
  bool v6; // cf
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+32h] [rbp-16h]
  __int16 v11; // [rsp+36h] [rbp-12h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v13 = HIDWORD(a1);
  v10 = 0;
  v1 = -1;
  v11 = 0;
  v2 = 0;
  v9 = 0;
  v12 = 0;
  v8[1] = (unsigned __int16 *)qword_140C1C9A8;
  v8[0] = (unsigned __int16 *)&qword_140C1C9A0;
  while ( 1 )
  {
    v3 = v1;
    if ( (unsigned int)KeEnumerateNextProcessor(&v12, v8) )
      break;
    v4 = qword_140D088C0[v12];
    if ( dword_140D068FC )
      v5 = *(_BYTE *)(v4 + 34056);
    else
      v5 = *(_BYTE *)(v4 + 34059);
    if ( !v5 )
      return v12;
    v6 = v5 < v1;
    v1 = v5;
    if ( v6 )
      v2 = v12;
    if ( v5 >= v3 )
      v1 = v3;
  }
  return v2;
}
