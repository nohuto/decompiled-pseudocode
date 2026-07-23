/*
 * XREFs of MmQueryMemoryRanges @ 0x14096ADD0
 * Callers:
 *     sub_14093CF20 @ 0x14093CF20 (sub_14093CF20.c)
 * Callees:
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     RtlFindNextForwardRunClearEx @ 0x14045EF10 (RtlFindNextForwardRunClearEx.c)
 *     sub_14096A868 @ 0x14096A868 (sub_14096A868.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmQueryMemoryRanges(__int64 a1)
{
  unsigned __int64 v1; // rbx
  char v2; // r13
  PVOID v3; // rsi
  bool v4; // zf
  unsigned int v6; // edx
  ULONG_PTR **v7; // rcx
  ULONG_PTR *v8; // r12
  ULONG_PTR *v9; // rax
  int v10; // r15d
  ULONG64 SetBits; // rax
  ULONG64 v12; // r14
  unsigned __int64 NextForwardRunClear; // rax
  ULONG64 SizeOfBitMap; // rsi
  unsigned __int64 v15; // rsi
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h]
  unsigned __int64 v19; // [rsp+90h] [rbp+40h] BYREF
  int v20; // [rsp+98h] [rbp+48h]
  ULONG64 v21; // [rsp+A0h] [rbp+50h] BYREF

  v1 = 0LL;
  v2 = 0;
  v21 = 0LL;
  v3 = 0LL;
  v4 = *(_DWORD *)a1 == 1;
  LOBYTE(v19) = 0;
  v17 = 0LL;
  P = 0LL;
  if ( !v4 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 40) )
    return 3221225485LL;
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 >= 0x20
    || KeGetCurrentIrql()
    || (*(_DWORD *)(a1 + 32) & 0x7FFFFFFFu) >= (unsigned __int16)word_140D05000
    || (v6 & 1) == 0
    || *(_QWORD *)(a1 + 24) != 0x40000000LL )
  {
    return 3221225485LL;
  }
  v7 = *(ULONG_PTR ***)(a1 + 8);
  if ( v7 != (ULONG_PTR **)-2LL )
  {
    v9 = sub_140264ED0(v7, 0LL, &v19);
    v8 = v9;
    if ( v9 )
    {
      v2 = v19;
      v20 = *(unsigned __int16 *)v9;
      goto LABEL_12;
    }
    return 3221225485LL;
  }
  v8 = 0LL;
  v20 = 1025;
LABEL_12:
  v10 = 0;
  if ( qword_140C52968 )
  {
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(&stru_140C52958, 1uLL, (ULONG64)v3);
      v12 = SetBits;
      if ( SetBits < (unsigned __int64)v3 || SetBits == -1LL )
      {
LABEL_19:
        v3 = P;
        goto LABEL_20;
      }
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)&stru_140C52958, SetBits, &v21);
      SizeOfBitMap = v21;
      v19 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        SizeOfBitMap = stru_140C52958.SizeOfBitMap;
      v15 = SizeOfBitMap - v12;
      v1 ^= ((unsigned int)v1 ^ (unsigned int)v12) & 0x3FFFFF;
      v10 = sub_14096A868(a1, (__int64 *)&v17, v1, v15, v20);
      if ( v10 < 0 )
        break;
      v3 = (PVOID)(v19 + v12 + v15);
      if ( (unsigned __int64)v3 >= stru_140C52958.SizeOfBitMap )
        goto LABEL_19;
    }
    v3 = P;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v3 = 0LL;
    }
  }
LABEL_20:
  if ( v2 )
    sub_1403606C4(v8[22]);
  if ( v10 >= 0 )
  {
    *(_QWORD *)(a1 + 40) = v17;
    *(_QWORD *)(a1 + 48) = v3;
  }
  return (unsigned int)v10;
}
