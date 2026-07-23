/*
 * XREFs of sub_140A53260 @ 0x140A53260
 * Callers:
 *     sub_14038B488 @ 0x14038B488 (sub_14038B488.c)
 *     sub_1403A68B0 @ 0x1403A68B0 (sub_1403A68B0.c)
 *     sub_1407FDC18 @ 0x1407FDC18 (sub_1407FDC18.c)
 *     sub_1407FE0BC @ 0x1407FE0BC (sub_1407FE0BC.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A53260(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9

  v2 = 0;
  if ( *a2 )
  {
    v3 = *a2 - *a1;
    if ( is_mul_ok(v3, 0x3E8uLL) )
      return (unsigned int)(v3 * (unsigned __int128)0x3E8uLL / (unsigned __int64)qword_140D069F8);
    else
      return (unsigned int)(v3 / (qword_140D069F8 / 0x3E8uLL));
  }
  return v2;
}
