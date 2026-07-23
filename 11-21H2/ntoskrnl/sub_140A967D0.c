/*
 * XREFs of sub_140A967D0 @ 0x140A967D0
 * Callers:
 *     sub_140A82480 @ 0x140A82480 (sub_140A82480.c)
 *     sub_140A9AFDC @ 0x140A9AFDC (sub_140A9AFDC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

void __fastcall sub_140A967D0(char a1)
{
  void *Pool3; // rax
  void *v2; // rax

  if ( (a1 & 2) != 0 )
  {
    if ( !qword_140D57620 && dword_140C0B1F8 >= 3 )
    {
      Pool3 = (void *)ExAllocatePool3(
                        64LL,
                        56LL * (unsigned int)dword_140D4E028,
                        0x6C717249u,
                        (__int64)&byte_140C5B0E0,
                        1u);
      if ( Pool3 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D57620, (signed __int64)Pool3, 0LL) )
          ExFreePoolWithTag(Pool3, 0);
      }
    }
    if ( !qword_140D576C8 )
    {
      v2 = (void *)ExAllocatePool3(
                     64LL,
                     (unsigned __int64)(unsigned int)dword_140D4E02C << 6,
                     0x52436656u,
                     (__int64)&byte_140C5B0E0,
                     1u);
      if ( v2 )
      {
        if ( _InterlockedCompareExchange64(&qword_140D576C8, (signed __int64)v2, 0LL) )
          ExFreePoolWithTag(v2, 0);
      }
    }
  }
}
