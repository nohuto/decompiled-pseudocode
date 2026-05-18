/*
 * XREFs of sub_180032714 @ 0x180032714
 * Callers:
 *     sub_18002FC20 @ 0x18002FC20 (sub_18002FC20.c)
 *     sub_180031560 @ 0x180031560 (sub_180031560.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032714(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // di
  __int64 v7; // rcx
  __int64 *v8; // rcx

  *(_QWORD *)a1 = a2;
  v4 = *a2;
  v5 = *(__int64 *)((char *)a2 + *(int *)(v4 + 4) + 72);
  v6 = 0;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v4 = *a2;
  }
  v7 = *(int *)(v4 + 4);
  if ( !*(_DWORD *)((char *)a2 + v7 + 16) )
  {
    v8 = *(__int64 **)((char *)a2 + v7 + 80);
    if ( !v8 || v8 == a2 )
    {
      v6 = 1;
    }
    else
    {
      std::wostream::flush();
      v6 = *(_DWORD *)((char *)a2 + *(int *)(*a2 + 4) + 16) == 0;
    }
  }
  *(_BYTE *)(a1 + 8) = v6;
  return a1;
}
