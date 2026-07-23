/*
 * XREFs of sub_140355830 @ 0x140355830
 * Callers:
 *     sub_140355774 @ 0x140355774 (sub_140355774.c)
 *     PoFxIdleComponent @ 0x1403557F0 (PoFxIdleComponent.c)
 *     sub_140355D70 @ 0x140355D70 (sub_140355D70.c)
 *     sub_140357EE0 @ 0x140357EE0 (sub_140357EE0.c)
 *     sub_1403B9594 @ 0x1403B9594 (sub_1403B9594.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     sub_140419798 @ 0x140419798 (sub_140419798.c)
 *     sub_140419AAC @ 0x140419AAC (sub_140419AAC.c)
 *     PoFxAddComponentRelation @ 0x1405CA2E0 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CA8F0 (PoFxRemoveComponentRelation.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140355424 @ 0x140355424 (sub_140355424.c)
 *     sub_1403559B0 @ 0x1403559B0 (sub_1403559B0.c)
 *     sub_14035800C @ 0x14035800C (sub_14035800C.c)
 *     sub_1403B1998 @ 0x1403B1998 (sub_1403B1998.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_140355830(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  __int64 v3; // r11
  unsigned int v4; // esi
  ULONG_PTR v7; // rbx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 InterruptTimePrecise; // rax
  LARGE_INTEGER v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = BugCheckParameter3;
  v12 = 0LL;
  if ( (a3 & 3) == 3 )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    sub_1405CAE6C(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3);
  if ( dword_140C0C63C == 2 )
  {
    InterruptTimePrecise = KeQueryInterruptTimePrecise(v11);
    sub_1403559B0(v7 + 144, InterruptTimePrecise, &v12);
  }
  else
  {
    v12 = *(_QWORD *)(v7 + 144);
  }
  if ( (*(_DWORD *)(v7 + 88) & 0x3FFFFFFF) == 0 )
    sub_1405CAE6C(0x608uLL, v7, *(int *)(v7 + 88), 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
  if ( (_DWORD)result == 0x80000000 )
  {
    if ( !v3 )
      v3 = KeQueryInterruptTimePrecise(v11);
    v9 = *(unsigned int *)(v7 + 92);
    if ( (v9 & 2) == 0 && !byte_140C5AD32 )
    {
      v9 = (unsigned int)dword_140C0982C;
      if ( v3 - v12 < (unsigned __int64)(unsigned int)dword_140C0982C )
      {
        v9 = 2147483649LL;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)(v7 + 88),
                                 -2147483647,
                                 0x80000000);
        if ( (_DWORD)result != 0x80000000 )
          return result;
        result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
        if ( (_DWORD)result == 1 )
        {
          if ( _InterlockedIncrement(&dword_140C23BB0) == 1 )
            return sub_14035800C(0LL);
          return result;
        }
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
      }
    }
    if ( dword_140C0C63C == 1 )
      sub_1403559B0(v7 + 144, v3, 0LL);
    if ( (a3 & 2) != 0 )
      return sub_1403B1998(v9, v7 + 24, BugCheckParameter2);
    else
      return sub_140355424((__int64 *)BugCheckParameter2, v4);
  }
  return result;
}
