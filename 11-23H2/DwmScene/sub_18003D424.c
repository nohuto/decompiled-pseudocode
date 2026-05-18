/*
 * XREFs of sub_18003D424 @ 0x18003D424
 * Callers:
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003D424(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rcx

  sub_18003E370();
  result = a2[1];
  v5 = 0LL;
  v6 = 0LL;
  if ( result )
  {
    v5 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(result + 12));
    v6 = result;
  }
  *(_QWORD *)(a1 + 88) = v5;
  v7 = *(volatile signed __int32 **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v6;
  if ( v7 )
    result = sub_180010574(v7);
  v8 = a2[1];
  if ( v8 )
    return sub_180010530(v8);
  return result;
}
