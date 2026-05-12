/*
 * XREFs of sub_1C004DE50 @ 0x1C004DE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C004DE50(__int64 a1)
{
  int v2; // ecx
  _BYTE *v3; // rax
  __int64 (__fastcall *v4)(_QWORD); // rax
  __int64 (__fastcall *v5)(_QWORD); // rax
  _BYTE *v6; // rax
  _BYTE *v7; // rdx

  v2 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v3 = *(_BYTE **)(a1 + 48);
  if ( v3 && !*v3 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD))(a1 + 56);
    if ( v4 )
    {
      v2 = v4(*(_QWORD *)(a1 + 64));
      if ( v2 < 0 )
        return (unsigned int)v2;
    }
    if ( *(_BYTE *)(a1 + 32) )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v2 = PoFxPowerOnCrashdumpDevice(*(_QWORD *)(a1 + 40), 0LL);
        if ( v2 < 0 )
          return (unsigned int)v2;
        v5 = *(__int64 (__fastcall **)(_QWORD))(a1 + 56);
        if ( v5 )
        {
          v2 = v5(*(_QWORD *)(a1 + 64));
          if ( v2 < 0 )
            return (unsigned int)v2;
        }
      }
    }
    **(_BYTE **)(a1 + 48) = 1;
  }
  v6 = *(_BYTE **)(a1 + 16);
  if ( v6 && !*v6 && *(_QWORD *)(a1 + 8) )
  {
    v2 = PoFxPowerOnCrashdumpDevice(*(_QWORD *)(a1 + 8), 0LL);
    if ( v2 < 0 )
      return (unsigned int)v2;
    **(_BYTE **)(a1 + 16) = 1;
  }
  v7 = *(_BYTE **)(a1 + 24);
  if ( v7 && **(_BYTE **)(a1 + 16) == 1 && **(_BYTE **)(a1 + 48) == 1 )
    *v7 = 1;
  return (unsigned int)v2;
}
