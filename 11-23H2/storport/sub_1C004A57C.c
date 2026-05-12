/*
 * XREFs of sub_1C004A57C @ 0x1C004A57C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C004A57C(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx

  v3 = 0;
  if ( !a1 )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x34u, (__int64)&unk_1C0083380);
    }
    return (unsigned int)-1056964602;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v7 = sub_1C000E2EC(a1);
    if ( !v7 )
      return (unsigned int)-1056964602;
    v9 = *((_QWORD *)v7 + 95);
    if ( v9 )
    {
      LOBYTE(v8) = a3;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v9 + 8) + 96LL))(v9, a2, v8);
    }
    else
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
        && BYTE1(off_1C0093070->Timer) >= 2u )
      {
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x36u, (__int64)&unk_1C0083380);
      }
      return (unsigned int)-1056964601;
    }
  }
  else
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x35u, (__int64)&unk_1C0083380);
    }
    return (unsigned int)-1056964600;
  }
  return v3;
}
