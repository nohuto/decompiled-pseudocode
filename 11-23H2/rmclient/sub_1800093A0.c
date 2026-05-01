/*
 * XREFs of sub_1800093A0 @ 0x1800093A0
 * Callers:
 *     sub_180009390 @ 0x180009390 (sub_180009390.c)
 *     sub_1800176A0 @ 0x1800176A0 (sub_1800176A0.c)
 *     sub_1800176C0 @ 0x1800176C0 (sub_1800176C0.c)
 * Callees:
 *     sub_180008B2C @ 0x180008B2C (sub_180008B2C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800093A0(__int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r11
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_5;
  }
  v3 = sub_180008B2C((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 1LL);
    if ( qword_1800328E0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 16LL))(qword_1800328E0);
  }
  return v3;
}
