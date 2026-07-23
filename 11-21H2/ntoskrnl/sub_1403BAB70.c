/*
 * XREFs of sub_1403BAB70 @ 0x1403BAB70
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_1403BAC88 @ 0x1403BAC88 (sub_1403BAC88.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BAB70()
{
  __int64 result; // rax
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG_PTR v3; // rbx
  void *v4; // rax
  __int64 v5; // rsi

  qword_140C4C750 = 0LL;
  result = sub_1403B3BA0();
  v1 = (unsigned int)result;
  if ( *(_DWORD *)(qword_140C4E390 + 228) == 5 )
  {
    v2 = (4 * (_DWORD)result + ((4 * (_DWORD)result + 8 * (_DWORD)result + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8;
    v3 = ((((_DWORD)v2 + 4 * (_DWORD)result + 7) & 0xFFFFFFF8) + ((_DWORD)result << 7) + 135) & 0xFFFFFFF8;
    v4 = (void *)sub_1403B1F04(v2, v3);
    v5 = (__int64)v4;
    if ( !v4 )
      KeBugCheckEx(0xACu, v3, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\timers\\pc\\tscsync.c", 0x166uLL);
    memset(v4, 0, v3);
    qword_140C4C758 = v5;
    dword_140C4C74C = 1024;
    qword_140C4C730 = (v5 + 8 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    qword_140C4C738 = (qword_140C4C730 + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    qword_140C4C740 = (qword_140C4C738 + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    qword_140C4C770 = (((qword_140C4C740 + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 120) & 0xFFFFFFFFFFFFFF80uLL;
    result = sub_1403BAC88();
    byte_140C4C77C = result;
  }
  return result;
}
