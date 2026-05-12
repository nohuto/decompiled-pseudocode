/*
 * XREFs of sub_1C0074430 @ 0x1C0074430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C0074430(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // r8
  __int64 v6; // rbp
  _BYTE *v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(unsigned __int8 **)(a2 + 184);
  v6 = *v4;
  if ( *(_DWORD *)v2 == 1431193940 )
  {
    v7 = *(_BYTE **)(v2 + 104);
    if ( v7 )
    {
      if ( (*v7 & 0x1F) == 0xD && *((_DWORD *)v4 + 6) == 2954240 )
      {
        v8 = *(_DWORD **)(a2 + 24);
        if ( v8 )
        {
          if ( !v8[1] && *v8 == 2 )
          {
            v9 = *((unsigned int *)v4 + 2);
            if ( (unsigned int)v9 >= 8 )
            {
              if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
                && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
                && BYTE1(off_1C0093070->Timer) >= 4u )
              {
                sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x12u, (__int64)&unk_1C008B030);
              }
              (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), __int64))(qword_1C0093308 + 8))(
                a1,
                a2,
                sub_1C0074540,
                v9);
            }
          }
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))qword_1C0093308)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 8 * v6 + 32))(a1, a2);
}
