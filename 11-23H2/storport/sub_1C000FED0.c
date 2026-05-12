/*
 * XREFs of sub_1C000FED0 @ 0x1C000FED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C000FED0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // r8
  __int64 v5; // rsi
  _DWORD *v6; // rax
  __int64 v7; // rax

  v2 = *(unsigned __int8 **)(a2 + 184);
  v5 = *v2;
  if ( *((_DWORD *)v2 + 6) == 2954240 )
  {
    v6 = *(_DWORD **)(a2 + 24);
    if ( v6 )
    {
      if ( !v6[1] && *v6 == 1 && *((_DWORD *)v2 + 2) >= 0x20u )
      {
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
          && BYTE1(off_1C0093070->Timer) >= 4u )
        {
          sub_1C003EDF0(off_1C0093070->AttachedDevice, 16LL, &unk_1C008B030);
        }
        (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_1C0093188 + 8))(
          a1,
          a2,
          sub_1C0010060,
          0LL);
      }
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))qword_1C0093188)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 8 * v5 + 32))(a1, a2);
}
