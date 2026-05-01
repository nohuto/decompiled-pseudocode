/*
 * XREFs of sub_180006910 @ 0x180006910
 * Callers:
 *     sub_1800170C0 @ 0x1800170C0 (sub_1800170C0.c)
 *     sub_1800170E0 @ 0x1800170E0 (sub_1800170E0.c)
 *     sub_180017100 @ 0x180017100 (sub_180017100.c)
 *     sub_180017120 @ 0x180017120 (sub_180017120.c)
 *     sub_180017140 @ 0x180017140 (sub_180017140.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180006910(signed __int32 *a1)
{
  signed __int32 i; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx

  for ( i = a1[27]; i != 0x7FFFFFFF; i = a1[27] )
  {
    if ( i == _InterlockedCompareExchange(a1 + 27, i - 1, i) )
      break;
  }
  v2 = a1[32] & 4;
  v3 = i - 1;
  if ( v3 )
  {
    if ( !v2 && v3 == 1 && qword_1800328E0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 16LL))(qword_1800328E0);
  }
  else
  {
    if ( a1 )
      (*(void (__fastcall **)(signed __int32 *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( v2 && qword_1800328E0 )
      (*(void (**)(void))(*(_QWORD *)qword_1800328E0 + 16LL))();
  }
  return v3;
}
