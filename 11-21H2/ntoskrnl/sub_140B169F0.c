/*
 * XREFs of sub_140B169F0 @ 0x140B169F0
 * Callers:
 *     sub_140B16904 @ 0x140B16904 (sub_140B16904.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_140837614 @ 0x140837614 (sub_140837614.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140B169F0(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v6; // rdi
  int v7; // r8d
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h] BYREF

  v12 = a3;
  LOBYTE(v12) = 0;
  BugCheckParameter3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x1B0uLL);
    v7 = 18;
    if ( dword_140C54CA0 )
      v7 = 33554450;
    v8 = sub_14068A7FC(
           &BugCheckParameter3,
           1u,
           v7,
           2u,
           *(_QWORD *)(a1 + 168),
           0LL,
           (__int64)&stru_140D3CFA8,
           4784136,
           0LL,
           0LL,
           (__int64)&v12,
           (__int64)v6);
    if ( v8 < 0 )
      KeBugCheckEx(0x74u, 3uLL, 2uLL, (ULONG_PTR)v6, v8);
    sub_140837614(BugCheckParameter3, (unsigned int *)(*(_QWORD *)(a1 + 240) + 2916LL));
    if ( (_BYTE)v12 == 1 )
      byte_140C54CA4 = 1;
    if ( byte_140D3B018 )
      *(_DWORD *)(BugCheckParameter3 + 160) |= 0x8000u;
    if ( dword_140D011A8 && !dword_140D014EC )
    {
      *(_DWORD *)(BugCheckParameter3 + 160) |= 0x8000u;
      *(_DWORD *)(BugCheckParameter3 + 160) &= ~2u;
    }
    v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
    dword_140C4986C = v9;
    if ( !dword_140C0C69C )
    {
      BYTE3(NlsMbOemCodePageTag) = 0;
      if ( (v9 & 4) != 0 )
        KeBugCheckEx(0x74u, 3uLL, 3uLL, BugCheckParameter3, 0LL);
    }
    v10 = sub_14067C9E8(
            (__int64)&stru_140D3CF88,
            0LL,
            BugCheckParameter3,
            0,
            dword_140C02780,
            0,
            0LL,
            a2,
            0LL,
            0LL,
            1,
            v6);
    if ( v10 >= 0 )
    {
      v10 = 0;
      qword_140C02770 = BugCheckParameter3;
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
