/*
 * XREFs of sub_140527F70 @ 0x140527F70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140510C60 @ 0x140510C60 (sub_140510C60.c)
 *     sub_14051B384 @ 0x14051B384 (sub_14051B384.c)
 *     sub_140529200 @ 0x140529200 (sub_140529200.c)
 */

__int64 __fastcall sub_140527F70(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int v5; // r8d
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // r9
  __int64 *v11; // rax
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  char v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0;
  v3 = 0LL;
  v19 = 0LL;
  v5 = sub_140510C60((__int64)a2);
  if ( _bittest(&v5, *(_DWORD *)(a1 + 8)) )
  {
    v7 = a2[3];
    if ( v7 )
    {
      if ( v7 == a1 )
        return 0;
      sub_140529200(a2, &v19);
      v3 = v19;
    }
    v6 = sub_14051B384(a2, a1, &v18);
    if ( v6 >= 0 )
    {
      if ( !v3 )
      {
        v19 = sub_1403B1F04(v8, 56LL);
        v3 = v19;
        if ( !v19 )
          return (unsigned int)-1073741670;
      }
      *(_OWORD *)v3 = 0LL;
      *(_OWORD *)(v3 + 16) = 0LL;
      *(_OWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_QWORD *)(v3 + 32) = a2;
      *(_QWORD *)(v3 + 16) = a2[1];
      *(_DWORD *)(v3 + 24) = 0;
      *(_DWORD *)(v3 + 28) = 1;
      *(_QWORD *)(v3 + 40) = a1;
      *(_QWORD *)(v3 + 48) = *a2;
    }
    if ( v3 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v3 = v19;
        *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
      }
      KeAcquireSpinLockAtDpcLevel(&qword_140C4A110);
      v11 = (__int64 *)qword_140C4A108;
      if ( *(__int64 **)qword_140C4A108 != &qword_140C4A100 )
        __fastfail(3u);
      *(_QWORD *)v3 = &qword_140C4A100;
      *(_QWORD *)(v3 + 8) = v11;
      *v11 = v3;
      qword_140C4A108 = v3;
      KeReleaseSpinLockFromDpcLevel(&qword_140C4A110);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v12 = KeGetCurrentIrql();
          if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v14 = *((_QWORD *)CurrentPrcb + 4375);
            v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v15;
            if ( v16 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
