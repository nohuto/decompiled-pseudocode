/*
 * XREFs of sub_1C00592E8 @ 0x1C00592E8
 * Callers:
 *     sub_1C005B3C0 @ 0x1C005B3C0 (sub_1C005B3C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0057690 @ 0x1C0057690 (sub_1C0057690.c)
 *     sub_1C005961C @ 0x1C005961C (sub_1C005961C.c)
 */

__int64 __fastcall sub_1C00592E8(struct _DEVICE_OBJECT *a1)
{
  _BYTE *DeviceExtension; // rbx
  __int64 result; // rax
  int v3; // ecx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  DeviceExtension = a1->DeviceExtension;
  result = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  if ( (DeviceExtension[109] & 0x20) == 0 )
  {
    LODWORD(v5) = 24;
    v3 = sub_1C005961C(a1, (__int64)&v5);
    if ( v3 >= 0 )
    {
      if ( (unsigned int)v5 >= 0x18 && (_DWORD)v6 == 1114596673 && DWORD2(v6) && WORD6(v6) == 2 )
      {
        if ( (_WORD)v7 )
        {
          return (unsigned int)sub_1C0057690((unsigned __int16)v7);
        }
        else
        {
          v4 = HIDWORD(v7);
          DeviceExtension[109] |= 0x20u;
          *((_DWORD *)DeviceExtension + 1409) = v4;
        }
      }
      else
      {
        return (unsigned int)-1072431089;
      }
    }
    return (unsigned int)v3;
  }
  return result;
}
