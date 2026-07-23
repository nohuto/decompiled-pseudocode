/*
 * XREFs of sub_1403CCFD4 @ 0x1403CCFD4
 * Callers:
 *     sub_140845CD8 @ 0x140845CD8 (sub_140845CD8.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 */

char __fastcall sub_1403CCFD4(struct _DEVICE_OBJECT *a1)
{
  char result; // al
  ULONG v2; // [rsp+58h] [rbp+10h] BYREF
  ULONG v3; // [rsp+60h] [rbp+18h] BYREF
  int v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v3 = 0;
  v2 = 0;
  if ( IoGetDevicePropertyData(a1, &stru_140012918, 0, 0, 4u, &v4, &v3, &v2) < 0 )
    return 0;
  if ( v2 != 7 )
    return 0;
  if ( v3 != 4 )
    return 0;
  if ( v4 < 0 )
    return 0;
  result = 1;
  if ( v4 != 2 )
    return 0;
  return result;
}
