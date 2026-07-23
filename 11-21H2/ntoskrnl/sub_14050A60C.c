/*
 * XREFs of sub_14050A60C @ 0x14050A60C
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x140222670 (HalPerformEndOfInterrupt.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_1402523CC @ 0x1402523CC (sub_1402523CC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14050A60C(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  ULONG_PTR *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v11 = 0LL;
  v2 = *(_DWORD *)(v1 + 64);
  v3 = sub_1402523CC(v2, v2 + 1);
  LODWORD(v11) = v3[4];
  HIDWORD(v11) = v2 + v3[5] - v3[7];
  v4 = (_DWORD *)(*((_QWORD *)v3 + 5) + 56LL * (v2 - v3[7]));
  v5 = sub_140252134(v11);
  v6 = sub_140252344(&qword_140C4BEE8);
  if ( *v4 == 1 )
  {
    *v4 = 2;
  }
  else if ( *v4 == 2 )
  {
    *v4 = 1;
  }
  if ( (int)sub_140251FD8((__int64)v5, (__int64)&v11, (__int64)v4) < 0 )
    KeBugCheckEx(0x5Cu, 0x205uLL, *((int *)v5 + 56), (ULONG_PTR)v5, SHIDWORD(v11));
  KeReleaseSpinLockFromDpcLevel(&qword_140C4BEE8);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v10 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= result;
        if ( v10 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
