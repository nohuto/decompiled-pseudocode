/*
 * XREFs of sub_1C00440A4 @ 0x1C00440A4
 * Callers:
 *     sub_1C00AA17C @ 0x1C00AA17C (sub_1C00AA17C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C00440A4(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  void (__fastcall *v3)(__int64); // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 232);
    if ( v1 )
    {
      v2 = *(_QWORD *)(a1 + 240);
      if ( v2 )
      {
        if ( (*(_BYTE *)(a1 + 248) & 4) != 0 )
        {
          v3 = *(void (__fastcall **)(__int64))(v1 + 136);
          if ( v3 )
            v3(v2 + 16);
        }
      }
    }
  }
}
