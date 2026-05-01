/*
 * XREFs of sub_18001AD08 @ 0x18001AD08
 * Callers:
 *     sub_18001B220 @ 0x18001B220 (sub_18001B220.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001AD08(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180025050;
  if ( qword_1800328E0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 8LL))(qword_1800328E0);
  *(_DWORD *)(a1 + 16) = 0x3FFFFFFF;
  *(_QWORD *)a1 = &off_180020E48;
  result = a1;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 12) = 2;
  return result;
}
