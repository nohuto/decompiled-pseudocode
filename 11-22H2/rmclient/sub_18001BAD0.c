/*
 * XREFs of sub_18001BAD0 @ 0x18001BAD0
 * Callers:
 *     sub_180017640 @ 0x180017640 (sub_180017640.c)
 *     sub_180017660 @ 0x180017660 (sub_180017660.c)
 *     sub_180017680 @ 0x180017680 (sub_180017680.c)
 * Callees:
 *     sub_180008B2C @ 0x180008B2C (sub_180008B2C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001BAD0(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r11
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = sub_180008B2C((volatile signed __int32 *)(2 * v1 + 16));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, 1LL);
    if ( qword_1800328E0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 16LL))(qword_1800328E0);
  }
  return v3;
}
