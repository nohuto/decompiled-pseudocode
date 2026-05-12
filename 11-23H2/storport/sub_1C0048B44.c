/*
 * XREFs of sub_1C0048B44 @ 0x1C0048B44
 * Callers:
 *     sub_1C0045338 @ 0x1C0045338 (sub_1C0045338.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C0048B44(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  _DWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // eax

  if ( !a1 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x31u, (__int64)&unk_1C0083380);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v14 = sub_1C000E2EC(a1);
    if ( !v14 )
      return 3238002694LL;
    v15 = *((_QWORD *)v14 + 95);
    if ( v15 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, __int64, __int64, char, __int64, int))(*(_QWORD *)(v15 + 8) + 112LL))(
              v15,
              *((_QWORD *)v14 + 1),
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9);
      return sub_1C000E318(v16);
    }
    else
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
        && BYTE1(off_1C0093070->Timer) >= 2u )
      {
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x33u, (__int64)&unk_1C0083380);
      }
      return 3238002695LL;
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x32u, (__int64)&unk_1C0083380);
    }
    return 3238002696LL;
  }
}
