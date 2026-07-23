/*
 * XREFs of sub_140554988 @ 0x140554988
 * Callers:
 *     sub_1403B83F0 @ 0x1403B83F0 (sub_1403B83F0.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041D480 @ 0x14041D480 (sub_14041D480.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140564F3C @ 0x140564F3C (sub_140564F3C.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 */

void sub_140554988()
{
  __int64 v0; // rsi
  char v1; // r12
  int v2; // eax
  PVOID *v3; // rdi
  __int64 *v4; // r14
  unsigned int v5; // r15d
  void *ContiguousNodeMemory; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // eax
  __int128 v12; // [rsp+38h] [rbp-38h]
  _DWORD v13[4]; // [rsp+50h] [rbp-20h] BYREF

  v13[0] = 2012912317;
  v13[1] = 1295123289;
  v13[2] = -198680387;
  v13[3] = 1266192359;
  *(_QWORD *)&v12 = 0x302E4594353594B3LL;
  v0 = 2LL;
  *((_QWORD *)&v12 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(dword_140C54D70, 1) != 1 )
  {
    dword_140C54DA4 = 0;
    LODWORD(qword_140C54D90) = 0;
    v1 = 0;
    v2 = sub_14041D480(1LL, 270532611LL);
    if ( v2 >= 0 || v2 == -2143092730 && (_BYTE)KdDebuggerEnabled )
      v1 = 1;
    v3 = (PVOID *)&unk_140C54D78;
    qword_140C54D88 = 9112LL;
    v4 = (__int64 *)&unk_140C54D78;
    v5 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(qword_140C54D88, 0, -1, 0, 4, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_140C54D88);
      v8 = *v4;
      *(_OWORD *)v8 = v12;
      *(_QWORD *)(v8 + 16) = 0x199B7088610836E8LL;
      if ( v1 )
        sub_140564F3C(*v4 + 8216, v7);
      ++v5;
      ++v4;
      if ( v5 >= 2 )
      {
        v9 = __rdtsc();
        LODWORD(qword_140C54D98) = v9;
        v10 = __rdtsc();
        HIDWORD(qword_140C54D98) = v10;
        HIDWORD(qword_140C54D98) = sub_140363220(1) & 0x7FFFFFFF;
        v11 = sub_14093E830((unsigned int)L"DumpInstance", (unsigned int)v13, (unsigned int)&qword_140C54D98, 8, 7);
        if ( v11 < 0 )
        {
          dword_140C54DA4 = v11;
          qword_140C54D98 = 0x4547415045474150LL;
        }
        dword_140C54D74 = 1;
        goto LABEL_18;
      }
    }
    dword_140C54DA4 = -1073741801;
    do
    {
      if ( *v3 )
      {
        MmFreeContiguousMemory(*v3);
        *v3 = 0LL;
      }
      ++v3;
      --v0;
    }
    while ( v0 );
LABEL_18:
    _InterlockedExchange(dword_140C54D70, 0);
  }
}
