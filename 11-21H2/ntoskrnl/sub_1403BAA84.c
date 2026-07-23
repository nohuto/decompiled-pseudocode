/*
 * XREFs of sub_1403BAA84 @ 0x1403BAA84
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     NtQuerySystemInformation @ 0x14073D860 (NtQuerySystemInformation.c)
 */

__int64 sub_1403BAA84()
{
  NTSTATUS v0; // esi
  char v1; // bl
  ULONG_PTR *v2; // rax
  unsigned __int64 v3; // rdi
  int v4; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  bool v8; // zf
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF
  char v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0;
  v0 = NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &v11, 8u, 0LL);
  v1 = 0;
  v2 = sub_1403ACEFC(5, 0, 0, 0, 1);
  if ( v2 )
  {
    if ( (v2[28] & 0x1000000) != 0 )
    {
      v1 = 0x80;
    }
    else if ( sub_1403AAE80(0LL, 0LL, 0LL, &v10) )
    {
      if ( v10 == 2 )
      {
        v1 = 32;
      }
      else
      {
        v1 = 0;
        if ( v10 == 1 )
          v1 = 16;
      }
    }
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4C750);
  v4 = *(_DWORD *)(qword_140C4E390 + 228);
  if ( (v4 == 5 || v4 == 8) && v0 >= 0 && v11 )
  {
    MEMORY[0xFFFFF780000003C7] = 0;
    _InterlockedOr(v9, 0);
    MEMORY[0xFFFFF780000003C6] = v1 | 3;
  }
  else
  {
    MEMORY[0xFFFFF780000003C6] = 0;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C4C750);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v8 = ((unsigned int)result & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= result;
        if ( v8 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
