/*
 * XREFs of sub_18007AC70 @ 0x18007AC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18007AC70(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // r10
  __int64 *v4; // rcx
  __int64 *v7; // r9
  unsigned int v8; // edx
  __int64 *v9; // rax
  _QWORD *v10; // rax

  v3 = (__int64 *)(a1 + 256);
  v4 = *(__int64 **)(a1 + 256);
  v7 = v4;
  v8 = *(_DWORD *)(*(_QWORD *)a2 + 88LL);
  v9 = (__int64 *)v4[1];
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( *((_DWORD *)v9 + 8) >= v8 )
    {
      v4 = v9;
      v9 = (__int64 *)*v9;
    }
    else
    {
      v9 = (__int64 *)v9[2];
    }
  }
  if ( *((_BYTE *)v4 + 25) || v8 < *((_DWORD *)v4 + 8) || v4 == v7 )
    return 0;
  v10 = (_QWORD *)sub_180029E58(v3, v8);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v10 + 88LL))(*v10, a2, a3);
}
