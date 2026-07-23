/*
 * XREFs of sub_140A4B974 @ 0x140A4B974
 * Callers:
 *     sub_14038BAA8 @ 0x14038BAA8 (sub_14038BAA8.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_1407FFCB0 @ 0x1407FFCB0 (sub_1407FFCB0.c)
 *     sub_1407FFD04 @ 0x1407FFD04 (sub_1407FFD04.c)
 *     sub_1407FFD64 @ 0x1407FFD64 (sub_1407FFD64.c)
 *     sub_1407FFDDC @ 0x1407FFDDC (sub_1407FFDDC.c)
 *     sub_1407FFE58 @ 0x1407FFE58 (sub_1407FFE58.c)
 *     sub_1407FFEBC @ 0x1407FFEBC (sub_1407FFEBC.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4C960 @ 0x140A4C960 (sub_140A4C960.c)
 *     sub_140A4CD9C @ 0x140A4CD9C (sub_140A4CD9C.c)
 *     sub_140A4D4A4 @ 0x140A4D4A4 (sub_140A4D4A4.c)
 *     sub_140A4DA40 @ 0x140A4DA40 (sub_140A4DA40.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 *     sub_140A4E0E0 @ 0x140A4E0E0 (sub_140A4E0E0.c)
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407FFF0C @ 0x1407FFF0C (sub_1407FFF0C.c)
 *     sub_140A6BEC8 @ 0x140A6BEC8 (sub_140A6BEC8.c)
 */

unsigned __int64 __fastcall sub_140A4B974(int a1)
{
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax
  __int64 v7; // rcx

  v1 = a1;
  v2 = __rdtsc();
  v3 = (unsigned __int64)HIDWORD(v2) << 32;
  dword_140C22398 = a1;
  v4 = v2;
  if ( byte_140C09740 )
    sub_1407FFF0C(a1);
  if ( dword_140C2238C )
  {
    v7 = (unsigned int)dword_140C22274;
    if ( (dword_140C22274 & 1) == 0 || (v7 = HIBYTE(dword_140C22274), (unsigned int)v1 <= (unsigned int)v7) )
    {
      if ( byte_140C22260 )
      {
        if ( *((_DWORD *)KeGetCurrentPrcb() + 9) )
          KeBugCheckEx(0xA0u, 0x10FuLL, v1, 1uLL, 0LL);
        if ( (unsigned __int8)sub_14042A5E0(v7, v3) )
          KeBugCheckEx(0xA0u, 0x10FuLL, v1, 2uLL, 0LL);
      }
      else if ( !_InterlockedExchangeAdd(&dword_140C0BB24, 0) )
      {
        KeBugCheckEx(0xA0u, 0x10FuLL, v1, 0LL, 0LL);
      }
      sub_140A6BEC8((unsigned int)v1);
    }
  }
  v5 = __rdtsc();
  result = (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - v4;
  qword_140C22D10 += result;
  return result;
}
