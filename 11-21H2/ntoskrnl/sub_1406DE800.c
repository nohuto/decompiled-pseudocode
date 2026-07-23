/*
 * XREFs of sub_1406DE800 @ 0x1406DE800
 * Callers:
 *     sub_140255A78 @ 0x140255A78 (sub_140255A78.c)
 *     sub_1402D5CA8 @ 0x1402D5CA8 (sub_1402D5CA8.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FEB18 @ 0x1405FEB18 (sub_1405FEB18.c)
 *     sub_140604874 @ 0x140604874 (sub_140604874.c)
 *     sub_1406DE8A0 @ 0x1406DE8A0 (sub_1406DE8A0.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 */

LONG __fastcall sub_1406DE800(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  Handle = 0LL;
  if ( v3 )
  {
    sub_14042A5E0(v3, a2);
    if ( (unsigned int)sub_1402DA4B0() || sub_140604874() )
      sub_1405FEB18(*(_QWORD *)(a1 + 56));
    v4 = 0;
  }
  else
  {
    v4 = sub_1406DE960(&Handle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( v4 >= 0 )
    {
      v4 = sub_14074A178(Handle);
      if ( v4 == -1073740955 )
      {
        v4 = 0;
      }
      else if ( v4 == -1073740914 )
      {
        v4 = -1073741772;
      }
      sub_1406DE8A0(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = v4;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
