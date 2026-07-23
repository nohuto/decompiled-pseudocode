/*
 * XREFs of sub_140B31238 @ 0x140B31238
 * Callers:
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 *sub_140B31238()
{
  __int64 *result; // rax

  dword_140C49AE8 = 0;
  dword_140C49AE4 = 0;
  qword_140C49AC0 = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x2800uLL, 0x61566343u);
  if ( !qword_140C49AC0 )
    KeBugCheckEx(0x34u, 0x9045CuLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  result = &qword_140C49AD0;
  dword_140C49AC8 = 128;
  qword_140C49AD8 = (__int64)&qword_140C49AD0;
  qword_140C49AD0 = (__int64)&qword_140C49AD0;
  return result;
}
