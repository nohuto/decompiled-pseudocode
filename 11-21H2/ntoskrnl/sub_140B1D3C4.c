/*
 * XREFs of sub_140B1D3C4 @ 0x140B1D3C4
 * Callers:
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140B1D468 @ 0x140B1D468 (sub_140B1D468.c)
 */

__int64 sub_140B1D3C4()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  unsigned __int8 v2; // bl
  unsigned __int8 v3; // r10
  char v4; // r8
  unsigned __int64 v5; // r9
  __int64 result; // rax

  _mm_lfence();
  v0 = qword_140D088C0[0];
  v1 = *(_QWORD *)(qword_140D088C0[0] + 120);
  *(_QWORD *)(qword_140D088C0[0] + 120) = 0LL;
  *(_QWORD *)(v0 + 112) = 0LL;
  v2 = MEMORY[0xFFFFF780000002D4] >> 1;
  v3 = ((_DWORD)InitSafeBootMode != 0) & ((int)sub_140B1D468() < 0);
  v4 = 1;
  v5 = __rdtsc() >> 3;
  result = 100 * ((unsigned int)v5 / 0x64);
  if ( (unsigned int)v5 % 0x64 <= 3 )
    v4 = v3;
  if ( !(v2 | (unsigned __int8)v4) )
  {
    result = sub_14042A5E0(v1, v3);
    if ( (_DWORD)result != 1 )
      KeBugCheckEx(0x9Au, 0x42424242uLL, 0xC000026AuLL, 0LL, 0LL);
  }
  return result;
}
