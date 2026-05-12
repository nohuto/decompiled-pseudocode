/*
 * XREFs of sub_1C0013068 @ 0x1C0013068
 * Callers:
 *     sub_1C0012FC0 @ 0x1C0012FC0 (sub_1C0012FC0.c)
 *     sub_1C0061148 @ 0x1C0061148 (sub_1C0061148.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C0013068(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 40));
  if ( v2 >= 0 )
  {
    v3 = 0;
    if ( !v2 )
    {
      v3 = 1;
      _InterlockedExchange((volatile __int32 *)(a1 + 208), 1);
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x20) != 0
      && BYTE1(off_1C0093070->Timer) >= 3u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 10LL, &unk_1C00898A8);
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 40), 1u);
    return 0;
  }
  return v3;
}
