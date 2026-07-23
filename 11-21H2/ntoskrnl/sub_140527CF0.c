/*
 * XREFs of sub_140527CF0 @ 0x140527CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403CD2D0 @ 0x1403CD2D0 (sub_1403CD2D0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14051B384 @ 0x14051B384 (sub_14051B384.c)
 *     sub_140529200 @ 0x140529200 (sub_140529200.c)
 *     sub_140846E20 @ 0x140846E20 (sub_140846E20.c)
 *     sub_140908DD4 @ 0x140908DD4 (sub_140908DD4.c)
 */

__int64 __fastcall sub_140527CF0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rbx
  __int64 v9; // rcx
  int v10; // edi
  char v11; // r12
  void *v12; // rax
  unsigned __int8 CurrentIrql; // r14
  __int64 v14; // r9
  __int64 *v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  void *Src; // [rsp+38h] [rbp-8h] BYREF

  Src = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  v10 = sub_1403CD2D0(a2, &Src);
  if ( v10 < 0 )
    goto LABEL_35;
  if ( a3 || a4 != 1 )
  {
    v10 = -1073741583;
    v11 = 0;
    goto LABEL_16;
  }
  v10 = sub_140846E20(Src);
  if ( v10 < 0 )
  {
LABEL_35:
    if ( Src )
      sub_1403B1B5C(v9, (__int64)Src);
    return (unsigned int)v10;
  }
  if ( MEMORY[0x18] )
  {
    v11 = 1;
    if ( MEMORY[0x18] == a1 )
    {
      v10 = 0;
LABEL_34:
      sub_140908DD4(0LL);
      return (unsigned int)v10;
    }
    sub_140529200(0LL, &v22);
    v6 = v22;
  }
  else
  {
    v11 = 0;
  }
  v10 = sub_14051B384(0LL, a1, 0LL);
  if ( v10 >= 0 )
  {
    if ( !v6 )
    {
      v22 = sub_1403B1F04(v9, 56LL);
      v6 = v22;
      if ( !v22 )
      {
        v10 = -1073741670;
        goto LABEL_35;
      }
    }
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_OWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 16) = a2;
    *(_DWORD *)(v6 + 24) = 0;
    v12 = Src;
    *(_DWORD *)(v6 + 28) = 1;
    *(_QWORD *)(v6 + 40) = a1;
    *(_QWORD *)(v6 + 48) = v12;
  }
LABEL_16:
  if ( v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v6 = v22;
      *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    KeAcquireSpinLockAtDpcLevel(&qword_140C4A110);
    v15 = (__int64 *)qword_140C4A108;
    if ( *(__int64 **)qword_140C4A108 != &qword_140C4A100 )
      __fastfail(3u);
    *(_QWORD *)v6 = &qword_140C4A100;
    *(_QWORD *)(v6 + 8) = v15;
    *v15 = v6;
    qword_140C4A108 = v6;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4A110);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = (unsigned int)CurrentIrql + 1;
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v10 < 0 )
    goto LABEL_35;
  if ( v11 )
    goto LABEL_34;
  return (unsigned int)v10;
}
