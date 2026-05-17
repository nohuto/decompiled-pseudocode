/*
 * XREFs of RtlZombifyActivationContext @ 0x1800EAA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlZombifyActivationContext(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax
  char v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || ((a1 - 1) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( (v3 & 1) == 0 )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        v5 = 0;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(a1 + 32))(
          2LL,
          a1,
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 40),
          0LL,
          &v5);
        v3 = *(_DWORD *)(a1 + 4);
      }
      *(_DWORD *)(a1 + 4) = v3 | 1;
    }
  }
  return v1;
}
