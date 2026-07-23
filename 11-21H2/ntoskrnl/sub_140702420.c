/*
 * XREFs of sub_140702420 @ 0x140702420
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_1407028B8 @ 0x1407028B8 (sub_1407028B8.c)
 *     sub_140702ABC @ 0x140702ABC (sub_140702ABC.c)
 *     sub_140702AF8 @ 0x140702AF8 (sub_140702AF8.c)
 *     sub_140702CA4 @ 0x140702CA4 (sub_140702CA4.c)
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 *     sub_1407DCC40 @ 0x1407DCC40 (sub_1407DCC40.c)
 *     sub_14092A888 @ 0x14092A888 (sub_14092A888.c)
 */

NTSTATUS sub_140702420()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r14
  int v4; // eax
  __int64 v5; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *v7; // rdi
  ULONG LowPart; // ebx
  int v9; // r8d
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  unsigned int v14; // eax
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v17[112]; // [rsp+50h] [rbp-98h] BYREF

  v16[0] = 0LL;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = *((_QWORD *)CurrentPrcb + 4375);
      v13 = (*(_DWORD *)(v12 + 20) & 0xFFFF0001) == 0;
      *(_DWORD *)(v12 + 20) &= 0xFFFF0001;
      if ( v13 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v16[2] = CurrentThread;
  sub_140702AF8(CurrentThread);
  if ( (*((_DWORD *)CurrentThread + 344) & 2) == 0 )
  {
    LOBYTE(v2) = 1;
    sub_14079F130(CurrentThread, 3221225547LL, v2);
  }
  v3 = *((_QWORD *)CurrentThread + 23);
  v16[1] = v3;
  if ( (*(_DWORD *)(v3 + 2172) & 1) != 0 )
  {
    sub_14092A888(CurrentThread);
  }
  else
  {
    v4 = sub_140702ABC(v1, *((_QWORD *)CurrentThread + 30), v2);
    *(_DWORD *)(v5 + 264) = v4;
    sub_1407028B8(CurrentThread, CurrentThread);
    sub_140702604(CurrentThread);
    if ( (*(_DWORD *)(v3 + 1124) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v3 + 1124), 0x13u) )
    {
      sub_1407DCC40(v3, *(_QWORD *)(v3 + 1304));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v16);
    v7 = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v9 = sub_140363220(1);
    v10 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      LODWORD(v16[0]) ^ HIDWORD(v16[0]) ^ LowPart ^ v10 ^ v9 ^ *((_DWORD *)v7 + 2884) ^ *((_DWORD *)v7 + 8272) ^ *((_DWORD *)v7 + 8276),
      0);
  }
  if ( (*(_BYTE *)(v3 + 992) & 1) != 0 )
  {
    *((_DWORD *)CurrentThread + 345) |= 0x200u;
    memset(v17, 0, 0x68uLL);
    v14 = sub_140358A20(0, 0, *((_DWORD *)KeGetCurrentThread() + 199), (__int64)v17);
    LOBYTE(v15) = 1;
    return sub_14079F130(CurrentThread, v14, v15);
  }
  else if ( (*((_DWORD *)CurrentThread + 344) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(v3 + 2172);
    if ( (result & 1) == 0 )
      return sub_140702CA4();
  }
  return result;
}
