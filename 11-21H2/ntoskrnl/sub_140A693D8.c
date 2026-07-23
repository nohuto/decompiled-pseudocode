/*
 * XREFs of sub_140A693D8 @ 0x140A693D8
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_1403C13E4 @ 0x1403C13E4 (sub_1403C13E4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140829870 @ 0x140829870 (sub_140829870.c)
 */

__int64 __fastcall sub_140A693D8(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // r9d
  int v5; // eax
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[1] = 0LL;
  v7[0] = a1;
  KeGenericCallDpc((__int64)sub_140A69470, (__int64)v7);
  if ( dword_140D0516C )
  {
    v5 = sub_140829870(a1);
    if ( v5 < 0 )
      KeBugCheckEx(0x33u, v5, 0LL, 0LL, 0LL);
  }
  result = sub_1403C13E4(a1, v2, v3, v4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x33u, (int)result, 0LL, 1uLL, 0LL);
  return result;
}
