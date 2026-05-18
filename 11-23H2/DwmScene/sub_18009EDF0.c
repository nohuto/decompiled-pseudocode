/*
 * XREFs of sub_18009EDF0 @ 0x18009EDF0
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009EDF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 68)
    || sub_180011DF0((_QWORD *)(a1 + 24), (_QWORD *)(a1 + 8))
    || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    sub_1800124F8((__int64 *)(a1 + 24), (_QWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 160LL))(a2, a1 + 24);
  }
  *(_BYTE *)(a1 + 68) = 0;
  return result;
}
