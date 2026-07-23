/*
 * XREFs of sub_140A870B0 @ 0x140A870B0
 * Callers:
 *     sub_140A88B74 @ 0x140A88B74 (sub_140A88B74.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A870B0(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  __int64 result; // rax
  ULONG v5; // ebp
  __int64 v6; // r14
  int v7; // [rsp+50h] [rbp+8h]

  v2 = 0xFFFF;
  if ( *(_BYTE *)(a1 + 203) )
  {
    v3 = -1;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 200) )
    {
      v7 = -1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 212) == 1 )
        v2 = 0xFFFFFF;
      v7 = v2;
    }
    v3 = v7;
  }
  *(_DWORD *)(a1 + 296) = 32;
  *(_QWORD *)(a1 + 304) = a1 + 288;
  RtlClearAllBits((PRTL_BITMAP)(a1 + 296));
  result = ExAllocatePool2(64LL, 0x100uLL, 0x566C6148u);
  *(_QWORD *)(a1 + 264) = result;
  if ( result )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      *(_QWORD *)(v6 + *(_QWORD *)(a1 + 264)) = MmAllocateContiguousNodeMemory(12288LL, 0, v3, 0, 4, 0x80000000);
      if ( *(_QWORD *)(v6 + *(_QWORD *)(a1 + 264)) )
      {
        result = 272LL;
      }
      else
      {
        RtlSetBits((PRTL_BITMAP)(a1 + 296), v5, 1u);
        result = 276LL;
      }
      _InterlockedIncrement((volatile signed __int32 *)(result + a1));
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < 0x20 );
  }
  return result;
}
