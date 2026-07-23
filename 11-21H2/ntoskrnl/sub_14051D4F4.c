/*
 * XREFs of sub_14051D4F4 @ 0x14051D4F4
 * Callers:
 *     sub_1404593D2 @ 0x1404593D2 (sub_1404593D2.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14051D4F4(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  bool v5; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9

  v2 = sub_140252344(&qword_140C4B0F0);
  v3 = (_QWORD *)qword_140C4B0E8;
  v4 = (_QWORD *)(a1 + 144);
  if ( *(__int64 **)qword_140C4B0E8 != &qword_140C4B0E0 )
    __fastfail(3u);
  v5 = byte_140C4B068 == 0;
  *v4 = &qword_140C4B0E0;
  v4[1] = v3;
  *v3 = v4;
  qword_140C4B0E8 = (__int64)v4;
  if ( v5 )
  {
    byte_140C4B068 = 1;
    sub_140345190((ULONG_PTR)&dword_140C4B080, 0LL, 0LL, 0LL, 0);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4B0F0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v5 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v5 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
