/*
 * XREFs of sub_180019930 @ 0x180019930
 * Callers:
 *     sub_180017020 @ 0x180017020 (sub_180017020.c)
 *     sub_180017040 @ 0x180017040 (sub_180017040.c)
 *     sub_180017060 @ 0x180017060 (sub_180017060.c)
 *     sub_180017080 @ 0x180017080 (sub_180017080.c)
 *     sub_1800170A0 @ 0x1800170A0 (sub_1800170A0.c)
 * Callees:
 *     sub_180008B2C @ 0x180008B2C (sub_180008B2C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019930(__int64 a1)
{
  unsigned int v1; // edi
  _DWORD *v2; // r11
  int v3; // ebx

  v1 = sub_180008B2C((volatile signed __int32 *)(a1 + 108));
  v3 = v2[32] & 4;
  if ( v1 )
  {
    if ( !v3 && v1 == 1 && qword_1800328E0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800328E0 + 16LL))(qword_1800328E0);
  }
  else
  {
    if ( v2 )
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, v1 + 1);
    if ( v3 && qword_1800328E0 )
      (*(void (**)(void))(*(_QWORD *)qword_1800328E0 + 16LL))();
  }
  return v1;
}
