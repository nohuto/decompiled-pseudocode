/*
 * XREFs of sub_1406961F8 @ 0x1406961F8
 * Callers:
 *     sub_140695FFC @ 0x140695FFC (sub_140695FFC.c)
 *     sub_140A1A65C @ 0x140A1A65C (sub_140A1A65C.c)
 * Callees:
 *     sub_140205030 @ 0x140205030 (sub_140205030.c)
 */

char __fastcall sub_1406961F8(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v5; // r15
  _QWORD *v6; // r14
  _QWORD *i; // rbx
  unsigned __int16 v8; // r8

  v2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 60) == *(_DWORD *)(a2 + 60)
    && *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 48)
    && *(_DWORD *)(a1 + 52) == *(_DWORD *)(a2 + 52) )
  {
    v6 = (_QWORD *)(a1 + 72);
    for ( i = *(_QWORD **)(a1 + 72); ; i = (_QWORD *)*i )
    {
      if ( i == v6 )
        return 1;
      v8 = *(_WORD *)(a1 + 48);
      if ( v8 )
      {
        if ( v8 <= 2u )
          goto LABEL_14;
        if ( v8 <= 5u )
          goto LABEL_9;
        if ( v8 == 6 )
        {
LABEL_14:
          v5 = i[5];
        }
        else if ( v8 == 16 )
        {
LABEL_9:
          v5 = (__int64)(i + 5);
        }
      }
      if ( !sub_140205030(a2, v5, v8) )
        return v2;
    }
  }
  return v2;
}
