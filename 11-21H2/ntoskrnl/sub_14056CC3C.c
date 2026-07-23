/*
 * XREFs of sub_14056CC3C @ 0x14056CC3C
 * Callers:
 *     sub_140A677B8 @ 0x140A677B8 (sub_140A677B8.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 *     sub_140A68BE8 @ 0x140A68BE8 (sub_140A68BE8.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_14056CC3C()
{
  unsigned __int8 EffectiveIrql; // al
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // r9
  struct _KPRCB *v5; // rdi
  int v6; // r14d
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  int v14; // esi

  EffectiveIrql = KeGetEffectiveIrql();
  v2 = 13LL;
  if ( EffectiveIrql >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)dword_140D31000;
    v14 = dword_140C2B1C0;
    if ( (*((_BYTE *)CurrentPrcb + 34) & 1) != 0 )
    {
      result = sub_14042A5E0(13LL, v1);
      *((_BYTE *)CurrentPrcb + 34) &= ~1u;
      *((_BYTE *)CurrentPrcb + 37128) = 0;
    }
    if ( *((_DWORD *)CurrentPrcb + 9) == v14 )
      ++dword_140C2B148;
    if ( *((_BYTE *)CurrentPrcb + 33) )
      *((_BYTE *)CurrentPrcb + 33) = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v2 = (unsigned int)CurrentIrql + 1;
      v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v1 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
      *(_DWORD *)(v4 + 20) |= v1;
    }
    v5 = KeGetCurrentPrcb();
    v6 = dword_140C2B1C0;
    if ( (*((_BYTE *)v5 + 34) & 1) != 0 )
    {
      sub_14042A5E0(v2, v1);
      *((_BYTE *)v5 + 34) &= ~1u;
      *((_BYTE *)v5 + 37128) = 0;
    }
    if ( *((_DWORD *)v5 + 9) == v6 )
      ++dword_140C2B148;
    if ( *((_BYTE *)v5 + 33) )
      *((_BYTE *)v5 + 33) = 0;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
        {
          v8 = KeGetCurrentPrcb();
          v9 = *((_QWORD *)v8 + 4375);
          v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)v8);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
