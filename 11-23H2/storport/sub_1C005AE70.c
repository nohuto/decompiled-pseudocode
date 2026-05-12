/*
 * XREFs of sub_1C005AE70 @ 0x1C005AE70
 * Callers:
 *     sub_1C005AD74 @ 0x1C005AD74 (sub_1C005AD74.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0059BDC @ 0x1C0059BDC (sub_1C0059BDC.c)
 */

__int64 __fastcall sub_1C005AE70(__int64 a1, unsigned int *a2)
{
  int v3; // ebx
  unsigned int (__fastcall *v4)(_QWORD); // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = sub_1C0059BDC(a1, &v6);
  if ( v3 >= 0 )
  {
    if ( *(_WORD *)(v6 + 2) >= 2u && (v4 = *(unsigned int (__fastcall **)(_QWORD))(v6 + 56)) != 0LL )
      *a2 = (v4(*(_QWORD *)(v6 + 8)) >> 2) & 0x3FF;
    else
      return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
