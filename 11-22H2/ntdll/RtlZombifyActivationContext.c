/*
 * XREFs of RtlZombifyActivationContext @ 0x1800E9EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlZombifyActivationContext(__int64 a1)
{
  unsigned int v1; // edi
  void (__fastcall *v3)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  char v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || ((a1 - 1) | 7) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    return (unsigned int)-1073741811;
  }
  else if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    v3 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(a1 + 32);
    if ( v3 )
    {
      v5 = 0;
      v3(2LL, a1, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 40), 0LL, &v5);
    }
    *(_DWORD *)(a1 + 4) |= 1u;
  }
  return v1;
}
