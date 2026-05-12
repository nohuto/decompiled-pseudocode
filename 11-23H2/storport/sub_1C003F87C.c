/*
 * XREFs of sub_1C003F87C @ 0x1C003F87C
 * Callers:
 *     sub_1C00A9538 @ 0x1C00A9538 (sub_1C00A9538.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1C003F87C(struct _DEVICE_OBJECT *a1)
{
  char v1; // bl
  ULONG v3; // [rsp+58h] [rbp+10h] BYREF
  ULONG v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v1 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  if ( IoGetDevicePropertyData(a1, &stru_1C0089848, 0, 0, 4u, &v5, &v4, &v3) >= 0 && v3 == 7 && v4 == 4 )
    return v5 == 2;
  return v1;
}
