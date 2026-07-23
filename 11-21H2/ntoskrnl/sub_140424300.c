/*
 * XREFs of sub_140424300 @ 0x140424300
 * Callers:
 *     DriverEntry @ 0x140A47010 (DriverEntry.c)
 * Callees:
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_1402A8980 @ 0x1402A8980 (sub_1402A8980.c)
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 *     sub_140343C60 @ 0x140343C60 (sub_140343C60.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 *     sub_140569E70 @ 0x140569E70 (sub_140569E70.c)
 */

void __fastcall __noreturn sub_140424300(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_BYTE)dword_140D069F0 )
    __asm { clac }
  retaddr = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( 1 )
  {
    while ( 1 )
    {
      if ( byte_140D0505F )
        _mm_pause();
      _enable();
      _disable();
      if ( (*((_BYTE *)CurrentPrcb + 13244) & 0xBF) != 0 )
        sub_1402A8980((__int64)CurrentPrcb);
      if ( *((_BYTE *)CurrentPrcb + 13241) )
      {
        *((_BYTE *)CurrentPrcb + 13241) = 0;
        _enable();
        sub_14028FFD0(a1, a2, a3);
        _disable();
      }
      _InterlockedOr8((volatile signed __int8 *)CurrentPrcb + 7, 1u);
      if ( !*((_QWORD *)CurrentPrcb + 2) )
        break;
      *((_BYTE *)CurrentPrcb + 7) = 0;
      _enable();
      v5 = *((_QWORD *)CurrentPrcb + 3);
      if ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
      {
        v6 = 0;
        do
        {
          if ( (++v6 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && sub_14039EA10() )
            sub_14039D930(v6);
          _mm_pause();
        }
        while ( (*((_QWORD *)CurrentPrcb + 6) & 1LL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) );
      }
      v7 = *((_QWORD *)CurrentPrcb + 2);
      *((_QWORD *)CurrentPrcb + 2) = 0LL;
      if ( v7 != v5 )
      {
        _disable();
        ++*((_BYTE *)CurrentPrcb + 32);
        v8 = __rdtsc();
        v9 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - *((_QWORD *)CurrentPrcb + 4144);
        *(_QWORD *)(v5 + 72) += v9;
        *((_QWORD *)CurrentPrcb + 4144) += v9;
        _enable();
        *((_QWORD *)CurrentPrcb + 1) = v7;
        *(_BYTE *)(v7 + 388) = 2;
        _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
        goto LABEL_33;
      }
      *((_QWORD *)CurrentPrcb + 6) = 0LL;
    }
    if ( *((_BYTE *)CurrentPrcb + 13243) )
    {
      *((_BYTE *)CurrentPrcb + 7) = 0;
      _enable();
      if ( sub_140343C60((__int64)CurrentPrcb, a2, a3, a4) )
      {
LABEL_33:
        *((_BYTE *)CurrentPrcb + 6) |= (*((_BYTE *)CurrentPrcb + 13244) & 0xAF) != 0;
        if ( (_BYTE)dword_140D069F0 )
          __asm { stac }
        sub_140428D90(1LL);
        if ( (_BYTE)dword_140D069F0 )
          __asm { clac }
      }
    }
    else
    {
      if ( (*((_BYTE *)CurrentPrcb + 13244) & 0xBF) == 0 )
      {
        if ( (_BYTE)dword_140D069F0 )
          __asm { stac }
        if ( dword_140D06B08 )
          sub_140569E70(0LL);
        else
          __writecr8(0LL);
        sub_140305BD0((ULONG_PTR)CurrentPrcb);
        _enable();
        a1 = 2LL;
        if ( dword_140D06B08 )
          sub_140569E70(2LL);
        else
          __writecr8(2uLL);
        if ( (_BYTE)dword_140D069F0 )
          __asm { clac }
      }
      *((_BYTE *)CurrentPrcb + 7) = 0;
    }
  }
}
