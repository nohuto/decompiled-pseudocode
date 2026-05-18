/*
 * XREFs of sub_18006FCD0 @ 0x18006FCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_18006FCD0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rbx
  unsigned int v6; // esi
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 256);
  v6 = *(_DWORD *)(*(_QWORD *)a2 + 88LL);
  v10 = v6;
  if ( sub_1800435C8(a1 + 256, (__int64)&v10) == *(_QWORD *)(a1 + 256) )
    return 0;
  v10 = v6;
  v7 = sub_180054270(v3, (__int64)v9, &v10);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 40LL) + 88LL))(
           *(_QWORD *)(*(_QWORD *)v7 + 40LL),
           a2,
           a3);
}
