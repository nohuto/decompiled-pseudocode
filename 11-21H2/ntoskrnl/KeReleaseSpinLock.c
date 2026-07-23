/*
 * XREFs of KeReleaseSpinLock @ 0x1402B1CB0
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     sub_14024E07C @ 0x14024E07C (sub_14024E07C.c)
 *     sub_1402D6330 @ 0x1402D6330 (sub_1402D6330.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_140355A50 @ 0x140355A50 (sub_140355A50.c)
 *     sub_1403A5AF0 @ 0x1403A5AF0 (sub_1403A5AF0.c)
 *     sub_1403B5A24 @ 0x1403B5A24 (sub_1403B5A24.c)
 *     sub_1404178E8 @ 0x1404178E8 (sub_1404178E8.c)
 *     sub_1404179B0 @ 0x1404179B0 (sub_1404179B0.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     sub_140419798 @ 0x140419798 (sub_140419798.c)
 *     sub_140419AAC @ 0x140419AAC (sub_140419AAC.c)
 *     ntoskrnl_32 @ 0x14055A160 (ntoskrnl_32.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 */

void __stdcall KeReleaseSpinLock(PKSPIN_LOCK SpinLock, KIRQL NewIrql)
{
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // rdx
  int v5; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v7; // r10
  __int64 v8; // r9
  int v9; // eax
  bool v10; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = NewIrql;
  if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    sub_14056E8CC(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v4 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v5 = *(_DWORD *)(v4 + 24) - 1;
      *(_DWORD *)(v4 + 24) = v5;
      if ( !v5 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        v7 = KeGetCurrentPrcb();
        v8 = *((_QWORD *)v7 + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C(v7);
      }
    }
  }
  __writecr8(v2);
}
