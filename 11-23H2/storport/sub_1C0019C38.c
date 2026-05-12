/*
 * XREFs of sub_1C0019C38 @ 0x1C0019C38
 * Callers:
 *     sub_1C0019218 @ 0x1C0019218 (sub_1C0019218.c)
 *     sub_1C0022594 @ 0x1C0022594 (sub_1C0022594.c)
 *     sub_1C005D530 @ 0x1C005D530 (sub_1C005D530.c)
 *     sub_1C005E1A8 @ 0x1C005E1A8 (sub_1C005E1A8.c)
 *     sub_1C00A25F4 @ 0x1C00A25F4 (sub_1C00A25F4.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C0019C38(__int64 a1)
{
  ULONG MaximumProcessorCount; // eax
  int v3; // r8d
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // r10
  __int32 v7; // eax
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rax

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = 0;
  v4 = MaximumProcessorCount;
  if ( MaximumProcessorCount )
  {
    v5 = 0LL;
    v6 = MaximumProcessorCount;
    do
    {
      v7 = _InterlockedExchange((volatile __int32 *)(v5 + *(_QWORD *)(a1 + 32)), 1);
      v5 += 64LL;
      v3 += v7 / 2;
      --v6;
    }
    while ( v6 );
  }
  if ( v3 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 968), v3 - 0x10000000) - 0x10000000 > 0 )
  {
    v8 = KeWaitForSingleObject((PVOID)(a1 + 464), Executive, 0, 0, 0LL);
    if ( v8 == 258
      && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EDF0(off_1C0093070->AttachedDevice, 11LL, &unk_1C008A520);
    }
  }
  else
  {
    v8 = 0;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 968), 0x10000000u);
  if ( (_DWORD)v4 )
  {
    v9 = 0LL;
    v10 = v4;
    do
    {
      _InterlockedExchange((volatile __int32 *)(v9 + *(_QWORD *)(a1 + 32)), 0);
      v9 += 64LL;
      --v10;
    }
    while ( v10 );
  }
  return v8;
}
