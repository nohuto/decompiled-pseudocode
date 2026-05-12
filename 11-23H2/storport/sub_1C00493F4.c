/*
 * XREFs of sub_1C00493F4 @ 0x1C00493F4
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int128 *__fastcall sub_1C00493F4(__int64 a1, __int128 **a2)
{
  __int128 *result; // rax
  _DWORD *v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int128 *)&retaddr;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
  {
    if ( _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 8u) && BYTE1(off_1C0093070->Timer) >= 2u )
      result = (__int128 *)sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0xAu, (__int64)&unk_1C0083380);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
    {
      if ( _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 8u) && BYTE1(off_1C0093070->Timer) >= 2u )
        result = (__int128 *)sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0xBu, (__int64)&unk_1C0083380);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
      {
        if ( _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 8u) && BYTE1(off_1C0093070->Timer) >= 2u )
          result = (__int128 *)sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0xCu, (__int64)&unk_1C0083380);
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
        {
          if ( _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 8u) && BYTE1(off_1C0093070->Timer) >= 2u )
            result = (__int128 *)sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0xDu, (__int64)&unk_1C0083380);
          if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
            && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 8u)
            && BYTE1(off_1C0093070->Timer) >= 2u )
          {
            result = (__int128 *)sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0xEu, (__int64)&unk_1C0083380);
          }
        }
      }
    }
  }
  if ( a2 )
  {
    if ( a1 && (v5 = sub_1C000E2EC(a1)) != 0LL )
    {
      result = (__int128 *)(v5 + 1126);
      *result = xmmword_1C0093820;
      result[1] = xmmword_1C0093830;
      result[2] = xmmword_1C0093840;
      result[3] = xmmword_1C0093850;
      result[4] = xmmword_1C0093860;
      *((_QWORD *)result + 10) = qword_1C0093870;
    }
    else
    {
      result = &xmmword_1C0093820;
    }
    *a2 = result;
  }
  else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
         && _bittest((const signed __int32 *)&off_1C0093070->Timer + 1, 8u)
         && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    return (__int128 *)sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0xFu, (__int64)&unk_1C0083380);
  }
  return result;
}
