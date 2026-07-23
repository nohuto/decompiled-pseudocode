/*
 * XREFs of sub_14056D050 @ 0x14056D050
 * Callers:
 *     sub_14022F104 @ 0x14022F104 (sub_14022F104.c)
 *     sub_14022F2FC @ 0x14022F2FC (sub_14022F2FC.c)
 *     sub_14022F864 @ 0x14022F864 (sub_14022F864.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_14056C984 @ 0x14056C984 (sub_14056C984.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 * Callees:
 *     sub_14022F440 @ 0x14022F440 (sub_14022F440.c)
 *     sub_14022F670 @ 0x14022F670 (sub_14022F670.c)
 *     sub_14022F6A4 @ 0x14022F6A4 (sub_14022F6A4.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 */

__int64 __fastcall sub_14056D050(char a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r10
  char *v5; // rdx
  char *v6; // r11
  unsigned __int64 v7; // r15
  int v8; // r8d
  ULONG LowPart; // ebp
  char v10; // cl
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r9
  bool v14; // cf
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned __int64 v17; // r10
  _QWORD *v18; // r11
  unsigned __int64 Min; // rcx
  __int64 v20; // rdx
  char v21; // si
  unsigned int v22; // edi
  __int16 v24; // [rsp+50h] [rbp-8h]
  LARGE_INTEGER v25; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  v3 = KeQueryInterruptTimePrecise(&v25);
  v4 = -1LL;
  v5 = (char *)CurrentPrcb + 37028;
  v6 = 0LL;
  v7 = v3;
  v8 = 0;
  LowPart = 7;
  do
  {
    v10 = *v5;
    v11 = v4;
    v25.LowPart = LowPart;
    if ( (v10 & 1) != 0 && (a1 || (v10 & 2) == 0) )
    {
      v12 = *(_QWORD *)(v5 - 12);
      v13 = v12 + *((unsigned int *)v5 - 1);
      if ( v8 == 4 && v13 < v3 && a1 )
        goto LABEL_13;
      v14 = v13 < v4;
      LowPart = v8;
      v4 = v12 + *((unsigned int *)v5 - 1);
      if ( v14 )
        v6 = v5 - 12;
      if ( v13 >= v11 )
      {
        LowPart = v25.LowPart;
        v4 = v11;
      }
      if ( v12 <= v3 )
LABEL_13:
        *v5 = v10 & 0xFE;
    }
    ++v8;
    v5 += 16;
  }
  while ( v8 < 7 );
  v15 = v4;
  if ( *((_DWORD *)v6 + 2) >= (unsigned int)dword_140D06960 )
    v15 = v4 - (unsigned int)dword_140D06960;
  v16 = sub_14022F670(v15, v3);
  if ( ((__int64)Tree.Min & 1) != 0 )
  {
    if ( Tree.Min == (PRTL_BALANCED_NODE)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)Tree.Min ^ ((unsigned __int64)&Tree.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)Tree.Min;
  }
  v20 = *(unsigned int *)(Min + 28);
  v21 = 1;
  if ( *v18 <= v7 + v20 && v7 + v20 <= v17 )
  {
    v21 = 0;
    v16 = *(_DWORD *)(Min + 28);
  }
  if ( *((_DWORD *)CurrentPrcb + 9252) != 2
    && (v16 == *((_DWORD *)CurrentPrcb + 9251) || v16 == *((_DWORD *)CurrentPrcb + 9250)) )
  {
    v22 = *((_DWORD *)CurrentPrcb + 9250);
  }
  else
  {
    v22 = sub_14022F6A4(v16, v21);
  }
  *((_DWORD *)CurrentPrcb + 9253) = LowPart;
  *((_QWORD *)CurrentPrcb + 4624) = v7 + v22;
  if ( v21 )
    sub_14022F440(v22, 1397707336, 1);
  if ( (v24 & 0x200) != 0 )
    _enable();
  return v22;
}
