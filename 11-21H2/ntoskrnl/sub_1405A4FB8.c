/*
 * XREFs of sub_1405A4FB8 @ 0x1405A4FB8
 * Callers:
 *     sub_14028FA14 @ 0x14028FA14 (sub_14028FA14.c)
 *     sub_1405A4C68 @ 0x1405A4C68 (sub_1405A4C68.c)
 * Callees:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140591D7C @ 0x140591D7C (sub_140591D7C.c)
 */

void __fastcall sub_1405A4FB8(int *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf

  if ( (*a1 & 0x20) != 0 )
  {
    v2 = qword_140C52BC8 << 25;
    _InterlockedExchange64((volatile __int64 *)qword_140C52BC8, 0LL);
    v3 = v2 >> 16;
    if ( (*a1 & 0x12) != 0 )
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v3, 0, 1u);
    else
      sub_1403AD304(v3, 0);
  }
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v4 & 1) != 0 || (v4 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v4 & 0x18) != 0 )
    {
      sub_140591D7C((__int64 *)a1 + 2);
    }
  }
  v5 = *((unsigned __int8 *)a1 + 4);
  if ( (_BYTE)v5 != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v10 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
}
