/*
 * XREFs of sub_18009E980 @ 0x18009E980
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     sub_180011DF0 @ 0x180011DF0 (sub_180011DF0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009E980(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  __int64 *v5; // rdi
  unsigned int i; // ebp
  __int64 result; // rax

  v3 = (unsigned int *)(a1 + 908);
  v5 = (__int64 *)(a1 + 248);
  for ( i = 0; i < 0xF; ++i )
  {
    if ( *(_BYTE *)(a1 + 1088)
      || sub_180011DF0(v5, v5 - 30)
      || *(v3 - 30) != *(v3 - 45)
      || (result = *v3, v3[15] != (_DWORD)result) )
    {
      sub_1800124F8(v5, v5 - 30);
      *(v3 - 30) = *(v3 - 45);
      v3[15] = *v3;
      result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 144LL))(a2, v5, i);
    }
    v5 += 2;
    ++v3;
  }
  *(_BYTE *)(a1 + 1088) = 0;
  return result;
}
