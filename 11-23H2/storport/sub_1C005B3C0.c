/*
 * XREFs of sub_1C005B3C0 @ 0x1C005B3C0
 * Callers:
 *     sub_1C0039604 @ 0x1C0039604 (sub_1C0039604.c)
 *     sub_1C0063608 @ 0x1C0063608 (sub_1C0063608.c)
 * Callees:
 *     sub_1C0059230 @ 0x1C0059230 (sub_1C0059230.c)
 *     sub_1C00592E8 @ 0x1C00592E8 (sub_1C00592E8.c)
 *     sub_1C00593B0 @ 0x1C00593B0 (sub_1C00593B0.c)
 *     sub_1C0059468 @ 0x1C0059468 (sub_1C0059468.c)
 */

__int64 __fastcall sub_1C005B3C0(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _BYTE *DeviceExtension; // rsi
  __int64 result; // rax
  int v6; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  DeviceExtension = a1->DeviceExtension;
  if ( *(_DWORD *)DeviceExtension != 1094997074 )
    return 3221225659LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  result = sub_1C00593B0(a1);
  if ( (int)result >= 0 )
  {
    if ( (DeviceExtension[5632] & 9) != 9 )
      return 3221225659LL;
    v6 = 4 * (*(_DWORD *)(a2 + 8) & 0x1FF);
    if ( (*((_DWORD *)DeviceExtension + 1408) & 2) != 0
      && (int)sub_1C00592E8(a1) >= 0
      && (v6 & *((_DWORD *)DeviceExtension + 1409)) == 0 )
    {
      return 3221225659LL;
    }
    if ( (*((_DWORD *)DeviceExtension + 1408) & 4) != 0 )
    {
      v7 = 0;
      result = sub_1C0059230(a1, &v7);
      if ( (int)result >= 0 )
      {
        if ( *(_BYTE *)(a2 + 12) )
        {
          if ( (v6 & v7) != 0 )
            return result;
        }
        else if ( (v6 & v7) == 0 )
        {
          return result;
        }
      }
    }
    return sub_1C0059468(a1);
  }
  return result;
}
