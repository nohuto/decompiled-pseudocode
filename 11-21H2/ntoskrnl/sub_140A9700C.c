/*
 * XREFs of sub_140A9700C @ 0x140A9700C
 * Callers:
 *     sub_140A96EB4 @ 0x140A96EB4 (sub_140A96EB4.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A9755C @ 0x140A9755C (sub_140A9755C.c)
 */

__int64 __fastcall sub_140A9700C(void *Src, __int64 a2)
{
  size_t v2; // rdi
  unsigned int v4; // ebp
  __int64 Pool2; // rax
  UNICODE_STRING *v6; // rsi
  unsigned __int64 v7; // rbx
  UNICODE_STRING **v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // edx
  bool v13; // zf

  v2 = 2 * a2;
  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 2 * a2 + 34, 0x41466656u);
  v6 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 32), Src, v2);
    *(unsigned __int16 *)((char *)&v6[2].Length + v2) = 0;
    RtlInitUnicodeString(v6 + 1, &v6[2].Length);
    RtlUpcaseUnicodeString(v6 + 1, v6 + 1, 0);
    v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C1ACD0);
    if ( (unsigned int)sub_140A9755C(&v6[1]) )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v8 = (UNICODE_STRING **)qword_140C1ACF8;
      if ( *(PVOID **)qword_140C1ACF8 != &qword_140C1ACF0 )
        __fastfail(3u);
      *(_QWORD *)&v6->Length = &qword_140C1ACF0;
      v6->Buffer = (wchar_t *)v8;
      *v8 = v6;
      qword_140C1ACF8 = (__int64)v6;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C1ACD0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
