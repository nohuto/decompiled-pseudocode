/*
 * XREFs of sub_1403489B0 @ 0x1403489B0
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140418160 @ 0x140418160 (sub_140418160.c)
 *     sub_140559FA8 @ 0x140559FA8 (sub_140559FA8.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 */

_QWORD *__fastcall sub_1403489B0(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  struct _KPRCB *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1[19];
  CurrentIrql = 0;
  if ( v1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A310(v1 + 1496);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v5 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v13 = *(_DWORD *)(v5 + 24);
          *(_DWORD *)(v5 + 24) = v13 + 1;
          if ( v13 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 1496), 0LL) )
      {
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v12 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v14 = *(_DWORD *)(v12 + 24) - 1;
            *(_DWORD *)(v12 + 24) = v14;
            if ( !v14 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        sub_140211E70((volatile signed __int32 *)(v1 + 1496));
      }
    }
  }
  v6 = a1[4];
  result = a1 + 4;
  v8 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v6 + 8) != a1 + 4 || (_QWORD *)*v8 != result )
    __fastfail(3u);
  *v8 = v6;
  *(_QWORD *)(v6 + 8) = v8;
  a1[5] = a1 + 4;
  *result = result;
  if ( v1 )
  {
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      sub_14056E8CC(v1 + 1496, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 1496), 0LL);
    v9 = KeGetCurrentPrcb();
    v10 = *((_QWORD *)v9 + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)v9 + 32) <= 1u )
      {
        v15 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v15;
        if ( !v15 )
          sub_140418E4C(v9);
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = *((_QWORD *)v17 + 4375);
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(v17);
        }
      }
    }
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
