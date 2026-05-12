/*
 * XREFs of sub_1C005ADDC @ 0x1C005ADDC
 * Callers:
 *     sub_1C005AD74 @ 0x1C005AD74 (sub_1C005AD74.c)
 * Callees:
 *     sub_1C0059230 @ 0x1C0059230 (sub_1C0059230.c)
 *     sub_1C00593B0 @ 0x1C00593B0 (sub_1C00593B0.c)
 */

__int64 __fastcall sub_1C005ADDC(struct _DEVICE_OBJECT *a1, int *a2)
{
  _BYTE *DeviceExtension; // rbx
  int v6; // ecx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  DeviceExtension = a1->DeviceExtension;
  v7 = 0;
  if ( *(_DWORD *)DeviceExtension != 1094997074 )
    return 3221225659LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  v6 = sub_1C00593B0(a1);
  if ( v6 >= 0 )
  {
    if ( (DeviceExtension[5632] & 5) == 5 )
    {
      v6 = sub_1C0059230(a1, &v7);
      if ( v6 >= 0 )
        *a2 = (v7 >> 2) & 0x1FF;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v6;
}
