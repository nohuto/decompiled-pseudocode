/*
 * XREFs of sub_140959F9C @ 0x140959F9C
 * Callers:
 *     sub_140945A10 @ 0x140945A10 (sub_140945A10.c)
 *     sub_140959DF4 @ 0x140959DF4 (sub_140959DF4.c)
 * Callees:
 *     sub_1402D2848 @ 0x1402D2848 (sub_1402D2848.c)
 *     sub_1402DDE58 @ 0x1402DDE58 (sub_1402DDE58.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1403A0154 @ 0x1403A0154 (sub_1403A0154.c)
 *     sub_140564AC0 @ 0x140564AC0 (sub_140564AC0.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_1409588F0 @ 0x1409588F0 (sub_1409588F0.c)
 */

__int64 __fastcall sub_140959F9C(__int64 a1, char a2)
{
  unsigned int v3; // edi
  struct _DEVICE_OBJECT *v4; // rdx

  v3 = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 778 && (!a2 || !sub_140564AC0(a1)) )
  {
    if ( sub_1402DDE58(*(_QWORD *)(a1 + 32)) )
    {
      sub_1403A0154(*(_QWORD **)(a1 + 32));
      sub_14076FB70(a1, 0x1000000);
    }
    sub_1402D2848(*(_QWORD *)(a1 + 32));
    v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x20u;
    v3 = sub_1409588F0(5, v4);
    sub_1402DE844(a1, 779);
  }
  return v3;
}
