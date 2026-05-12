/*
 * XREFs of sub_1C0043B00 @ 0x1C0043B00
 * Callers:
 *     sub_1C00A81A4 @ 0x1C00A81A4 (sub_1C00A81A4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C0043B00(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  void (__fastcall *v3)(__int64); // rax

  v1 = *(_QWORD *)(a1 + 576);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 568);
    if ( v2 )
    {
      if ( !*(_BYTE *)(a1 + 4306) && (*(_BYTE *)(a1 + 584) & 4) != 0 )
      {
        v3 = *(void (__fastcall **)(__int64))(v2 + 152);
        if ( v3 )
          v3(v1 + 16);
      }
    }
  }
}
