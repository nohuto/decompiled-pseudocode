/*
 * XREFs of sub_1406B6054 @ 0x1406B6054
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406B6278 @ 0x1406B6278 (sub_1406B6278.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406B6054(__int64 a1, unsigned __int64 a2)
{
  int v3; // edi
  void *v4; // rsi
  unsigned int v5; // r12d
  __int32 v6; // ebx
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  unsigned int v9; // r15d
  PVOID PoolWithTag; // rax
  volatile void *v11; // r15
  unsigned int v12; // r12d
  void *Src[2]; // [rsp+48h] [rbp-50h]
  __m128i v15; // [rsp+58h] [rbp-40h]
  SIZE_T Length; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp+10h]
  PVOID P; // [rsp+B0h] [rbp+18h] BYREF

  v17 = a2;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  P = 0LL;
  LODWORD(Length) = 0;
  v6 = 0;
  if ( !a2 )
  {
    v3 = -1073741789;
    goto LABEL_24;
  }
  if ( a2 + 32 > 0x7FFFFFFF0000LL || a2 + 32 < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_OWORD *)Src = *(_OWORD *)a2;
  v15 = *(__m128i *)(a2 + 16);
  v7 = _mm_cvtsi128_si32(v15);
  if ( v7 )
  {
    v8 = (unsigned __int64)Src[0] + v7;
    if ( v8 > 0x7FFFFFFF0000LL || (void *)v8 < Src[0] )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( Src[0] && v7 )
  {
    v5 = v7;
    v9 = v7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x20534C53u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, Src[0], v9);
      v11 = Src[1];
      if ( Src[1] )
        v6 = v15.m128i_i32[1];
      goto LABEL_17;
    }
    v3 = -1073741801;
  }
  else
  {
    v3 = -1073741789;
  }
  v11 = Src[1];
LABEL_17:
  if ( v3 >= 0 )
  {
    v3 = sub_1406B6278((_DWORD)v4, v5, v6, (unsigned int)&P, (__int64)&Length);
    if ( v3 >= 0 )
    {
      if ( v11 )
      {
        v12 = Length;
        if ( v15.m128i_i32[1] < (unsigned int)Length )
        {
          v3 = -1073741789;
        }
        else
        {
          ProbeForWrite(v11, (unsigned int)Length, 1u);
          memmove((void *)v11, P, v12);
          *(_DWORD *)(a2 + 20) = v12;
        }
      }
      else
      {
        *(_DWORD *)(a2 + 20) = Length;
      }
    }
  }
LABEL_24:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v3;
}
