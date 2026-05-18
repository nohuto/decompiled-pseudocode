/*
 * XREFs of sub_18009D990 @ 0x18009D990
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_18003B5D8 @ 0x18003B5D8 (sub_18003B5D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009D990(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v5; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 24);
  v5 = (_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 68) || sub_180011DF0((_QWORD *)(a1 + 24), v5) )
  {
    sub_18003B5D8(v2, v5);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 152LL))(a2, v2);
  }
  if ( *(_BYTE *)(a1 + 68) || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
  }
  *(_BYTE *)(a1 + 68) = 0;
  return result;
}
