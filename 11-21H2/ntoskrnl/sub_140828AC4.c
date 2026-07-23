/*
 * XREFs of sub_140828AC4 @ 0x140828AC4
 * Callers:
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     sub_14082902C @ 0x14082902C (sub_14082902C.c)
 *     PoDisableSleepStates @ 0x14098C600 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_140828AC4()
{
  _DWORD *v0; // rbx
  _DWORD *Pool2; // rax
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+58h] [rbp+10h] BYREF

  ReturnLength = 0;
  v0 = 0LL;
  sub_14082902C();
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, ReturnLength, 1919052136LL);
    v0 = Pool2;
    if ( Pool2 )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, Pool2, ReturnLength, &ReturnLength) >= 0 )
      {
        ReturnLength -= 2;
        if ( *(_BYTE *)v0 )
        {
          if ( v0[1] <= ReturnLength )
          {
            byte_140D06A4B = 1;
            PoDisableSleepStates(2LL, 8LL, &v6);
          }
        }
      }
    }
  }
  v2 = 0;
  v3 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&unk_140D06E18 + v3)
      && (int)PoDisableSleepStates(*(unsigned int *)((char *)&qword_140A381F0[1] + v3), 8LL, &v6) < 0 )
    {
      LOBYTE(v4) = 1;
      PoShutdownBugCheck(v4, 160LL, 272LL, 0LL, 0LL, 0LL);
    }
    ++v2;
    v3 += 4LL;
  }
  while ( v2 < 2 );
  if ( v0 )
    ExFreePoolWithTag(v0, 0x72626968u);
}
