/*
 * XREFs of sub_140560880 @ 0x140560880
 * Callers:
 *     sub_140560BB0 @ 0x140560BB0 (sub_140560BB0.c)
 *     sub_1409467F8 @ 0x1409467F8 (sub_1409467F8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140459E52 @ 0x140459E52 (sub_140459E52.c)
 *     sub_140459EC8 @ 0x140459EC8 (sub_140459EC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140560880(PVOID P)
{
  char v2; // bp
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v6; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // al
  unsigned __int8 v12; // di
  struct _KPRCB *v13; // r9
  __int64 v14; // r8
  int v15; // eax
  unsigned __int8 v16; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0;
  v16 = 0;
  v2 = 0;
  sub_140459E52(&v17);
  sub_140459EC8((__int64)P, &v16);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 48, 0xFFFFFFFF) == 1 )
  {
    v3 = *(_QWORD **)P;
    v4 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v4 != P )
      __fastfail(3u);
    *v4 = v3;
    v2 = 1;
    v3[1] = v4;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)P + 7);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v6 = v16;
    if ( v16 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = *((_QWORD *)CurrentPrcb + 4375);
      v6 = v16;
      v9 = ~(unsigned __int16)(-1LL << (v16 + 1));
      v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
      *(_DWORD *)(v8 + 20) &= v9;
      if ( v10 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  else
  {
    v6 = v16;
  }
  __writecr8(v6);
  KeReleaseSpinLockFromDpcLevel(&qword_140C468E8);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v11 = KeGetCurrentIrql(), v11 <= 0xFu) )
  {
    v12 = v17;
    if ( v17 <= 0xFu && v11 >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = *((_QWORD *)v13 + 4375);
      v12 = v17;
      v15 = ~(unsigned __int16)(-1LL << (v17 + 1));
      v10 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
      *(_DWORD *)(v14 + 20) &= v15;
      if ( v10 )
        sub_140418E4C((__int64)v13);
    }
  }
  else
  {
    v12 = v17;
  }
  __writecr8(v12);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}
