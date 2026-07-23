/*
 * XREFs of sub_140AA72F4 @ 0x140AA72F4
 * Callers:
 *     sub_140AA7270 @ 0x140AA7270 (sub_140AA7270.c)
 *     sub_140AA72A0 @ 0x140AA72A0 (sub_140AA72A0.c)
 *     sub_140AA72D0 @ 0x140AA72D0 (sub_140AA72D0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 */

void __fastcall sub_140AA72F4(__int64 a1, __int64 a2)
{
  PVOID v3; // rax
  PVOID v4; // rdi

  if ( *(_WORD *)(a1 + 2) )
  {
    v3 = sub_140A90660(
           NonPagedPool,
           768LL,
           *(unsigned __int16 *)(a1 + 2),
           0x72745356u,
           LowPoolPriority,
           (__int64)&byte_140C5B0E0,
           1u,
           a2);
    v4 = v3;
    if ( v3 )
    {
      memmove(v3, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
      *(_QWORD *)(a1 + 8) = v4;
    }
  }
}
