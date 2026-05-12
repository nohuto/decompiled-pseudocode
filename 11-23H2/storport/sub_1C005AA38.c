/*
 * XREFs of sub_1C005AA38 @ 0x1C005AA38
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C005AA38(__int64 a1, unsigned int a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 (__fastcall *v5)(_QWORD); // r8

  result = 3221225659LL;
  if ( *(_BYTE *)(a1 + 4305) )
  {
    v4 = *(_QWORD *)(a1 + 4288);
    if ( v4 )
    {
      if ( a2 < *(_DWORD *)(v4 + 4) )
      {
        if ( a3 )
          v5 = *(__int64 (__fastcall **)(_QWORD))(a1 + 5872);
        else
          v5 = *(__int64 (__fastcall **)(_QWORD))(a1 + 5880);
        if ( v5 )
          return v5(*(_QWORD *)(a1 + 5840));
      }
      else
      {
        return 3221225485LL;
      }
    }
  }
  return result;
}
