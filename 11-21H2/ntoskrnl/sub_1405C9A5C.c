/*
 * XREFs of sub_1405C9A5C @ 0x1405C9A5C
 * Callers:
 *     PoSetThermalActiveCooling @ 0x14098B330 (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x14098B3E0 (PoSetThermalPassiveCooling.c)
 *     sub_14098B4E0 @ 0x14098B4E0 (sub_14098B4E0.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     sub_14098B798 @ 0x14098B798 (sub_14098B798.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14099193C @ 0x14099193C (sub_14099193C.c)
 *     sub_140991A00 @ 0x140991A00 (sub_140991A00.c)
 */

void __fastcall sub_1405C9A5C(__int64 a1)
{
  char v2; // si
  unsigned __int8 v3; // di
  __int64 *i; // rdx
  unsigned __int8 v5; // cl
  __int64 v6; // rdx
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx

  if ( *(_BYTE *)(a1 + 67) )
  {
    *(_BYTE *)(a1 + 67) = 0;
    return;
  }
  do
  {
    while ( 1 )
    {
      v2 = 0;
      v3 = 100;
      if ( *(_BYTE *)(a1 + 64) )
      {
        for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); i = (__int64 *)*i )
        {
          if ( *((_BYTE *)i + 18) )
          {
            v5 = *((_BYTE *)i + 16);
            if ( v5 >= v3 )
              v5 = v3;
            v3 = v5;
            if ( *((_BYTE *)i + 17) )
              v2 = 1;
          }
        }
      }
      if ( v3 == *(_BYTE *)(a1 + 66) )
        break;
      *(_BYTE *)(a1 + 66) = v3;
      *(_BYTE *)(a1 + 67) = 1;
      sub_1402935D0(a1 + 32);
      sub_140991A00(a1);
      sub_14042A5E0(*(_QWORD *)(a1 + 96), v3);
      sub_1402D66A8(a1 + 32);
      if ( *(_BYTE *)(a1 + 67) )
      {
        *(_BYTE *)(a1 + 67) = 0;
        break;
      }
    }
    if ( v2 == *(_BYTE *)(a1 + 65) )
      goto LABEL_18;
    *(_BYTE *)(a1 + 65) = v2;
    *(_BYTE *)(a1 + 67) = 1;
    sub_1402935D0(a1 + 32);
    sub_14099193C(a1);
    LOBYTE(v6) = v2;
    sub_14042A5E0(*(_QWORD *)(a1 + 96), v6);
    sub_1402D66A8(a1 + 32);
  }
  while ( !*(_BYTE *)(a1 + 67) );
  *(_BYTE *)(a1 + 67) = 0;
LABEL_18:
  v7 = *(struct _KEVENT **)(a1 + 80);
  if ( v7 )
    KeSetEvent(v7, 0, 0);
  v8 = *(struct _KEVENT **)(a1 + 72);
  if ( v8 )
    KeSetEvent(v8, 0, 0);
}
