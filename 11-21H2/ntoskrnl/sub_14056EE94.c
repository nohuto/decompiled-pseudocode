/*
 * XREFs of sub_14056EE94 @ 0x14056EE94
 * Callers:
 *     sub_1403AEB58 @ 0x1403AEB58 (sub_1403AEB58.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     sub_1403AF3B4 @ 0x1403AF3B4 (sub_1403AF3B4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A41A @ 0x14045A41A (sub_14045A41A.c)
 *     sub_14056EC2C @ 0x14056EC2C (sub_14056EC2C.c)
 */

__int64 __fastcall sub_14056EE94(__int64 a1, _DWORD *a2)
{
  bool v4; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v8; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned int v13; // ebx
  unsigned __int8 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  v4 = 0;
  v5 = qword_140C2B0D8 + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  sub_14056EC2C(v5);
  sub_14045A41A((PKSPIN_LOCK)v5, &v15);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 == a1 )
      v4 = *(_QWORD *)(v6 + 8) == v6 + 8;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v8 = v15;
    if ( v15 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = *((_QWORD *)CurrentPrcb + 4375);
      v8 = v15;
      v11 = ~(unsigned __int16)(-1LL << (v15 + 1));
      v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
      *(_DWORD *)(v10 + 20) &= v11;
      if ( v12 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  else
  {
    v8 = v15;
  }
  __writecr8(v8);
  if ( v4 )
    HalDisableInterrupt(a2);
  v13 = sub_1403AF3B4(1, a1, (__int64)a2);
  KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v13;
}
