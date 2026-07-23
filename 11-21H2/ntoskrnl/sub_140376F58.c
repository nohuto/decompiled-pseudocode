/*
 * XREFs of sub_140376F58 @ 0x140376F58
 * Callers:
 *     sub_1407FCE14 @ 0x1407FCE14 (sub_1407FCE14.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_14038A10C @ 0x14038A10C (sub_14038A10C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140376F58(unsigned int a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 0LL;
  if ( a1 < 0x18 )
  {
    v3 = -1073741820;
LABEL_7:
    *a3 = 24;
    return v3;
  }
  v6 = sub_140252344(&qword_140C4D048);
  if ( (int)sub_14038A10C(*a2, v7, &v20) >= 0 )
  {
    v8 = v20;
    *((_BYTE *)a2 + 4) = (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v20 + 32)) == 0;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v8 + 24);
    }
    else
    {
      v8 = v20;
      v9 = *(_DWORD *)(32LL * HIDWORD(KeGetPcr()[1].LockArray) + qword_140C4C728 + 24);
    }
    a2[2] = v9;
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v8 + 296);
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v15 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    goto LABEL_7;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = *((_QWORD *)v12 + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(v12);
      }
    }
  }
  __writecr8(v6);
  *a3 = 0;
  return 3221225659LL;
}
