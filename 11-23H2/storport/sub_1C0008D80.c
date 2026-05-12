/*
 * XREFs of sub_1C0008D80 @ 0x1C0008D80
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C0008D80(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  void (*v3)(void); // rax

  if ( a1 )
  {
    v1 = *a1;
    if ( v1 )
    {
      v2 = *(_QWORD *)(v1 + 8);
      if ( v2 )
      {
        v3 = *(void (**)(void))(v2 + 96);
        if ( v3 )
          v3();
      }
    }
  }
}
