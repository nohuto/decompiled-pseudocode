/*
 * XREFs of SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402D0E30
 * Callers:
 *     IoCreateDeviceSecure @ 0x1407435E0 (IoCreateDeviceSecure.c)
 *     sub_14084D3DC @ 0x14084D3DC (sub_14084D3DC.c)
 *     sub_1409B3230 @ 0x1409B3230 (sub_1409B3230.c)
 *     sub_140B152D4 @ 0x140B152D4 (sub_140B152D4.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     sub_140743E60 @ 0x140743E60 (sub_140743E60.c)
 */

__int64 __fastcall SeConvertStringSecurityDescriptorToSecurityDescriptor(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 || !a3 )
  {
    LOWORD(result) = 87;
    return (unsigned __int16)result | 0xC0070000;
  }
  if ( a2 != 1 )
  {
    LOWORD(result) = 1305;
    return (unsigned __int16)result | 0xC0070000;
  }
  result = sub_140743E60(a1, 1, a3, a1, a3, a4);
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
