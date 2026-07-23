/*
 * XREFs of sub_140958430 @ 0x140958430
 * Callers:
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_14080ED34 @ 0x14080ED34 (sub_14080ED34.c)
 * Callees:
 *     sub_140767EAC @ 0x140767EAC (sub_140767EAC.c)
 *     sub_14080BEDC @ 0x14080BEDC (sub_14080BEDC.c)
 */

__int64 __fastcall sub_140958430(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int **v3; // r11
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = sub_140767EAC(*a1, a2, *(_DWORD *)*a1, &v5);
  if ( v2 == -1 )
    return 3221225486LL;
  else
    return sub_14080BEDC(*v3, v2);
}
