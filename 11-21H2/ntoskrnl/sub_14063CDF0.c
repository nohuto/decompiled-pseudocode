/*
 * XREFs of sub_14063CDF0 @ 0x14063CDF0
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14036B680 (ExIsResourceAcquiredSharedLite.c)
 * Callees:
 *     sub_14039D384 @ 0x14039D384 (sub_14039D384.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14063CDF0(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r9
  __int64 *v4; // rax
  __int64 v5; // r11
  __int64 *v6; // rcx
  __int64 *v7; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // edx
  bool v12; // zf

  if ( *(_DWORD *)(a1 + 64) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v4 = sub_14039D384((__int64)KeGetCurrentThread(), a1, 0, 0);
    if ( v4 )
    {
      v6 = v4 + 5;
      v1 = 1;
      v7 = (__int64 *)v4[5];
      while ( v7 != v6 )
      {
        v7 = (__int64 *)*v7;
        ++v1;
      }
    }
    else
    {
      v1 = 0;
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = *((_QWORD *)CurrentPrcb + 4375);
          v11 = ~(unsigned __int16)(v5 << (CurrentIrql + 1));
          v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v11;
          if ( v12 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    return 0;
  }
  return v1;
}
