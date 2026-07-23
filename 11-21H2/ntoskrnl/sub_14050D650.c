/*
 * XREFs of sub_14050D650 @ 0x14050D650
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050D91C @ 0x14050D91C (sub_14050D91C.c)
 */

__int64 __fastcall sub_14050D650(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  bool v4; // dl
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  bool v11; // zf

  byte_140C4C7D8 = sub_140252344(&qword_140C4C7D0);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v2 = *(_QWORD **)a1;
    v3 = *(_QWORD **)(a1 + 8);
    v4 = *(_QWORD *)&qword_140C4C7A0 == a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = v3;
    if ( v3 == v2 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&qword_140C4C7E0 + 228LL) != 3 )
      {
        v5 = sub_140303720(*(__int64 *)&qword_140C4C7E0);
        sub_14042A5E0(v5, v6);
      }
    }
    else if ( v4 )
    {
      sub_14050D91C();
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  v7 = (unsigned __int8)byte_140C4C7D8;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4C7D0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v11 = ((unsigned int)result & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= result;
        if ( v11 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
