/*
 * XREFs of sub_180019320 @ 0x180019320
 * Callers:
 *     sub_180016B20 @ 0x180016B20 (sub_180016B20.c)
 *     sub_180016B40 @ 0x180016B40 (sub_180016B40.c)
 *     sub_180016B60 @ 0x180016B60 (sub_180016B60.c)
 *     sub_180016B80 @ 0x180016B80 (sub_180016B80.c)
 *     sub_180016BA0 @ 0x180016BA0 (sub_180016BA0.c)
 * Callees:
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019320(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = sub_180008980((volatile signed __int32 *)(a1 + 108));
  v3 = v1;
  if ( (*(_BYTE *)(v2 + 128) & 4) == 0 && v1 == 2 && qword_1800328E0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 8LL))(qword_1800328E0);
  return v3;
}
