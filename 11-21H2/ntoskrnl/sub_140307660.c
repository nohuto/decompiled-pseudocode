/*
 * XREFs of sub_140307660 @ 0x140307660
 * Callers:
 *     sub_140304060 @ 0x140304060 (sub_140304060.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 * Callees:
 *     sub_14022B9E4 @ 0x14022B9E4 (sub_14022B9E4.c)
 *     sub_14022BA6C @ 0x14022BA6C (sub_14022BA6C.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     sub_14029135C @ 0x14029135C (sub_14029135C.c)
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045AAC0 @ 0x14045AAC0 (sub_14045AAC0.c)
 *     sub_14045ABA8 @ 0x14045ABA8 (sub_14045ABA8.c)
 *     sub_14045E06E @ 0x14045E06E (sub_14045E06E.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 */

__int64 __fastcall sub_140307660(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int16 v3; // bp
  int v4; // esi
  struct _KPRCB *v5; // r9
  bool v6; // zf
  __int64 v7; // rdi
  __int64 result; // rax
  struct _KPRCB *v9; // r14
  int v10; // ecx
  __int64 v11; // rcx
  __int64 i; // rcx
  __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // di
  __int64 v15; // r9
  unsigned __int8 v16; // al
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // edx
  __int16 v21; // [rsp+50h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v21;
  ++*((_DWORD *)CurrentPrcb + 3313);
  ++*((_DWORD *)CurrentPrcb + 2920);
  _disable();
  v4 = MEMORY[0xFFFFF78000000320];
  if ( (v3 & 0x200) != 0 )
    _enable();
  sub_1403078A0((_DWORD)CurrentPrcb, *((_DWORD *)CurrentPrcb + 3312), MEMORY[0xFFFFF78000000320], a2, a1);
  v6 = byte_140D06889 == 0;
  *((_DWORD *)CurrentPrcb + 8104) = 1;
  if ( !v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v15 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    sub_14056CF48((_DWORD)CurrentPrcb, -DesiredTime, DesiredTime, 3, 1, 0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          v5 = KeGetCurrentPrcb();
          v17 = *((_QWORD *)v5 + 4375);
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v6 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= v18;
          if ( v6 )
            sub_140418E4C(v5);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  v7 = *((_QWORD *)CurrentPrcb + 1);
  if ( v7 != *((_QWORD *)CurrentPrcb + 3) )
  {
    if ( (dword_140D068EC & 0x8000) != 0 && *((_DWORD *)CurrentPrcb + 8122) - v4 < 0 )
    {
      if ( sub_14029135C((__int64)CurrentPrcb) && (*(_DWORD *)(*((_QWORD *)CurrentPrcb + 4361) + 8LL) & 0x300) != 0
        || (*((_DWORD *)CurrentPrcb + 8118) & 0x300) != 0 )
      {
        sub_14022B9E4((unsigned __int16 *)CurrentPrcb + 6622, 64);
        sub_14022BA6C(CurrentPrcb, 2);
      }
      else
      {
        *((_DWORD *)CurrentPrcb + 8122) = v4 + dword_140D050A4;
      }
    }
    result = *(_QWORD *)(v7 + 72);
    if ( (unsigned __int64)result >= *(_QWORD *)(v7 + 32) )
      goto LABEL_16;
    result = sub_140308640(v7, CurrentPrcb, 1LL, v5);
    if ( (_DWORD)result )
      goto LABEL_16;
    v9 = KeGetCurrentPrcb();
    v10 = *((_DWORD *)v9 + 59);
    if ( (v10 & 0x300) != 0 )
    {
      _disable();
      v19 = *((_DWORD *)v9 + 59) & 0xFFFFFCFF;
      if ( (unsigned __int8)*((_DWORD *)v9 + 59) != *(_BYTE *)(v7 + 512) )
      {
        v20 = v19 | ((*(_DWORD *)(v7 + 512) & 3) << 8);
        *((_DWORD *)v9 + 59) = v20;
        if ( (unsigned __int8)sub_14045E06E(v9, (v20 >> 8) & 3) )
          *((_DWORD *)v9 + 59) &= 0xFFFFFCFF;
        v19 = *((_DWORD *)v9 + 59);
      }
      else
      {
        *((_DWORD *)v9 + 59) = v19;
      }
      if ( (v19 & 0x300) == 0 )
        sub_14045ABA8(v9);
      if ( (v21 & 0x200) != 0 )
        _enable();
    }
    else if ( (unsigned __int8)v10 != *(_BYTE *)(v7 + 512) )
    {
      sub_14045AAC0(v9, v7);
    }
  }
  result = MEMORY[0xFFFFF78000000320];
  if ( MEMORY[0xFFFFF78000000320] > *((_QWORD *)CurrentPrcb + 4315) )
  {
LABEL_16:
    *((_BYTE *)CurrentPrcb + 13241) = 1;
    if ( !*((_BYTE *)CurrentPrcb + 32) )
      return HalRequestSoftwareInterrupt(2);
    *((_BYTE *)CurrentPrcb + 6) = 1;
    return result;
  }
  v11 = *(_QWORD *)(v7 + 104);
  if ( v11 )
  {
    result = *((unsigned int *)CurrentPrcb + 54);
    for ( i = result + v11; i; i = *(_QWORD *)(i + 408) )
    {
      v13 = i - *((unsigned int *)CurrentPrcb + 54);
      result = *(unsigned __int8 *)(i + 112);
      if ( (result & 4) != 0 )
      {
        if ( (result & 0x10) != 0 )
        {
          result = *(_QWORD *)(i + 24);
LABEL_25:
          if ( *(_QWORD *)i >= (unsigned __int64)result )
            goto LABEL_16;
          continue;
        }
        if ( (result & 2) == 0 )
        {
          result = *(_QWORD *)(v13 + 48);
          if ( result <= 0 )
            goto LABEL_16;
          result = *(_QWORD *)(i + 24);
          if ( *(_QWORD *)i >= (unsigned __int64)result )
            goto LABEL_16;
        }
      }
      else
      {
        if ( (result & 0x10) != 0 )
        {
          result = *(_QWORD *)(i + 8);
          goto LABEL_25;
        }
        if ( (result & 2) == 0 )
        {
          result = *(_QWORD *)(v13 + 48);
          if ( result <= 0 )
            goto LABEL_16;
        }
      }
    }
  }
  if ( *((_DWORD *)CurrentPrcb + 3314) - v4 < 0 )
  {
    result = sub_14029135C((__int64)CurrentPrcb);
    if ( !(_DWORD)result || (result = *(unsigned int *)(*((_QWORD *)CurrentPrcb + 4361) + 8LL), (result & 0x7FFE) == 0) )
    {
      if ( (*((_DWORD *)CurrentPrcb + 8118) & 0x7FFE) == 0 )
      {
        result = (unsigned int)(v4 + 75);
        *((_DWORD *)CurrentPrcb + 3314) = result;
      }
    }
  }
  return result;
}
