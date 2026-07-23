/*
 * XREFs of sub_1403E39D0 @ 0x1403E39D0
 * Callers:
 *     sub_1403C64C0 @ 0x1403C64C0 (sub_1403C64C0.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     sub_140990360 @ 0x140990360 (sub_140990360.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall sub_1403E39D0(__int16 *a1, _WORD *a2)
{
  __int16 v2; // ax
  __int16 v4; // r10
  _WORD *v5; // r8
  __int16 v6; // dx

  v2 = *a1;
  if ( !*a1 )
    return 0LL;
  v4 = *a2;
  while ( 1 )
  {
    v5 = a2;
    if ( v4 )
      break;
LABEL_7:
    v2 = *++a1;
    if ( !*a1 )
      return 0LL;
  }
  v6 = v4;
  while ( v6 != v2 )
  {
    v6 = *++v5;
    if ( !*v5 )
      goto LABEL_7;
  }
  return a1;
}
