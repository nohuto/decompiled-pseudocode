/*
 * XREFs of sub_14059E1E8 @ 0x14059E1E8
 * Callers:
 *     sub_1409704A0 @ 0x1409704A0 (sub_1409704A0.c)
 * Callees:
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14059E1E8(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  if ( a2 )
  {
    v2 = a2;
    v3 = 48 * a1 - 0x220000000000LL;
    do
    {
      v4 = (unsigned __int8)sub_1402F2700(v3);
      sub_140273FD0(v3, v5, v6, v7);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v11;
            if ( v12 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      v3 += 48LL;
      --v2;
    }
    while ( v2 );
  }
}
