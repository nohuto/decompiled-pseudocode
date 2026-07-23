/*
 * XREFs of sub_140A69470 @ 0x140A69470
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402F38C4 @ 0x1402F38C4 (sub_1402F38C4.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405692F8 @ 0x1405692F8 (sub_1405692F8.c)
 *     KeSignalCallDpcSynchronize @ 0x14056F9F0 (KeSignalCallDpcSynchronize.c)
 *     sub_140A59154 @ 0x140A59154 (sub_140A59154.c)
 *     sub_140A5943C @ 0x140A5943C (sub_140A5943C.c)
 *     sub_140A59D28 @ 0x140A59D28 (sub_140A59D28.c)
 *     sub_140A5A248 @ 0x140A5A248 (sub_140A5A248.c)
 *     sub_140A69694 @ 0x140A69694 (sub_140A69694.c)
 */

__int64 __fastcall sub_140A69470(__int64 a1, _QWORD **a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  _DWORD v19[68]; // [rsp+30h] [rbp-138h] BYREF

  memset(&v19[2], 0, 0x100uLL);
  if ( (unsigned int)KeSignalCallDpcSynchronize(a4, v7, v8, v9) )
  {
    sub_140A69694(*((unsigned int *)*a2 + 9));
    sub_140A5943C((__int64)*a2);
    sub_140A59D28((__int64)*a2);
    sub_1403DAC1C((__int64)PsInitialSystemProcess, 0, (unsigned __int16 *)dword_140D06E40);
    v19[0] = 2097153;
    memset(&v19[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v19, *((_DWORD *)*a2 + 9));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
    }
    sub_1402F38C4(0, (int)v19, (__int64)sub_14056EB90, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( *((_DWORD *)CurrentPrcb + 2912) )
      _mm_pause();
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C((__int64)v14);
        }
      }
    }
    __writecr8(CurrentIrql);
    sub_140A5A248();
    sub_14042A5E0(0LL, (char *)*a2 + 36);
    sub_140A59154((__int64)*a2, 1);
    sub_1405692F8((*a2)[24], *a2);
    dword_140D06A9C = 0;
    *((_BYTE *)a2 + 8) = 1;
  }
  else
  {
    while ( !*((_BYTE *)a2 + 8) )
      _mm_pause();
  }
  result = sub_140A59154((__int64)KeGetCurrentPrcb(), 1);
  _InterlockedDecrement(a3);
  return result;
}
