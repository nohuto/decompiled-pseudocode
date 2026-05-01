/*
 * XREFs of sub_180004C40 @ 0x180004C40
 * Callers:
 *     sub_18000238C @ 0x18000238C (sub_18000238C.c)
 *     sub_18000246C @ 0x18000246C (sub_18000246C.c)
 *     sub_180002540 @ 0x180002540 (sub_180002540.c)
 *     sub_180003FF0 @ 0x180003FF0 (sub_180003FF0.c)
 *     sub_1800049B0 @ 0x1800049B0 (sub_1800049B0.c)
 *     sub_180004B70 @ 0x180004B70 (sub_180004B70.c)
 *     sub_180004E90 @ 0x180004E90 (sub_180004E90.c)
 *     sub_180004F38 @ 0x180004F38 (sub_180004F38.c)
 *     sub_180004FD4 @ 0x180004FD4 (sub_180004FD4.c)
 *     sub_18000A570 @ 0x18000A570 (sub_18000A570.c)
 *     sub_18001AB4C @ 0x18001AB4C (sub_18001AB4C.c)
 *     sub_18001ADFC @ 0x18001ADFC (sub_18001ADFC.c)
 *     sub_18001B140 @ 0x18001B140 (sub_18001B140.c)
 *     sub_18001BC8C @ 0x18001BC8C (sub_18001BC8C.c)
 *     sub_18001BE48 @ 0x18001BE48 (sub_18001BE48.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180004C40(volatile signed __int32 *a1)
{
  signed __int32 i; // edx
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 3); i != 0x7FFFFFFF; i = *((_DWORD *)a1 + 3) )
  {
    if ( i == _InterlockedCompareExchange(a1 + 3, i - 1, i) )
      break;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 1LL);
    if ( qword_1800328E0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 16LL))(qword_1800328E0);
  }
  return v2;
}
