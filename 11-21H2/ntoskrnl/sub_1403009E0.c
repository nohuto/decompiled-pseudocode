/*
 * XREFs of sub_1403009E0 @ 0x1403009E0
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1406E3610 @ 0x1406E3610 (sub_1406E3610.c)
 * Callees:
 *     sub_140300B00 @ 0x140300B00 (sub_140300B00.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406375D0 @ 0x1406375D0 (sub_1406375D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1403009E0(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  volatile signed __int32 *v9; // rdi
  __int64 v12; // r11
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // r10
  char v15; // al
  _BYTE *v16; // rdx
  __int64 v18; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rdi
  char v25; // al
  _BYTE *v26; // rdx
  int v27; // eax
  char v28; // cl
  char v29[24]; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  v29[0] = 1;
  v12 = a1;
  if ( a9 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v18 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v14 = 104LL * a2;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + v14 + 72) )
    {
      v15 = sub_140300B00(a5);
      if ( *v16 != v15 )
      {
        v29[0] = 0;
        goto LABEL_6;
      }
    }
    else if ( !v29[0] )
    {
LABEL_6:
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v23 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      goto LABEL_8;
    }
    v9 = *(volatile signed __int32 **)(*(_QWORD *)(v12 + 384) + v14 + 80);
    if ( v9 )
      _InterlockedIncrement(v9);
    goto LABEL_6;
  }
  v24 = 104LL * a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + v24 + 72) )
  {
    v25 = sub_140300B00(a5);
    if ( *v26 != v25 )
      return 0;
  }
  v9 = *(volatile signed __int32 **)(*(_QWORD *)(v12 + 384) + v24 + 80);
LABEL_8:
  if ( !v9 )
    return v29[0];
  v27 = sub_1406375D0(a4, a6, a7, a8, a3 == 0, v9 + 2, v29);
  v28 = v29[0];
  if ( v27 < 0 )
    v28 = 1;
  v29[0] = v28;
  if ( a9 < 2u )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v9, 0);
    return v29[0];
  }
  return v28;
}
