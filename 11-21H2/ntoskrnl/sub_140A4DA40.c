/*
 * XREFs of sub_140A4DA40 @ 0x140A4DA40
 * Callers:
 *     sub_140A4C5B4 @ 0x140A4C5B4 (sub_140A4C5B4.c)
 *     sub_140A4D4A4 @ 0x140A4D4A4 (sub_140A4D4A4.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1404294D0 @ 0x1404294D0 (sub_1404294D0.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 */

unsigned __int64 __fastcall sub_140A4DA40(__int64 a1, char a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r14
  unsigned int v15; // r8d
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+78h] [rbp+20h]

  v18 = a4;
  result = __rdtsc();
  v8 = result;
  if ( *(_QWORD *)(a1 + 432) )
  {
    v9 = a2 ? *(_QWORD *)(a1 + 440) >> 1 : *(_QWORD *)(a1 + 416);
    v10 = a3 >> 9;
    if ( a3 >> 9 < v9 )
    {
      v11 = a5;
      if ( (a5 & 0x1FF) != 0 )
        v11 = a5 - (a5 & 0x1FF) + 512;
      v12 = (v11 >> 9) + v10;
      if ( v12 >= v9 )
        v12 = v9;
      v13 = 0LL;
      while ( v10 < v12 )
      {
        v14 = *(_QWORD *)(a1 + 432);
        v15 = a5 - v13;
        if ( a5 - v13 > 0x200 )
          v15 = 512;
        v16 = sub_1404294D0(0, (const char *)(v13 + a4), v15);
        if ( a2 )
        {
          *(_WORD *)(v14 + 2 * v10) = v16;
        }
        else
        {
          if ( *(unsigned __int16 *)(v14 + 2 * v10) != v16 )
          {
            sub_140A4B974(30);
            KeBugCheckEx(0xA0u, 0x10EuLL, 0xAuLL, *(unsigned __int16 *)(v14 + 2 * v10), *(unsigned __int16 *)(a1 + 424));
          }
          LOWORD(v16) = *(_WORD *)(v14 + 2 * v10);
        }
        a4 = v18;
        v13 += 512LL;
        *(_WORD *)(a1 + 424) = v16;
        ++v10;
      }
      v17 = __rdtsc();
      result = (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v8;
      if ( a2 )
      {
        *(_QWORD *)(a1 + 416) = v10;
        qword_140C22D48 += result;
      }
      else
      {
        qword_140C22E88 += result;
      }
    }
  }
  return result;
}
