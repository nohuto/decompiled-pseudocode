/*
 * XREFs of ntoskrnl_4 @ 0x1402D5B80
 * Callers:
 *     ExAllocateTimer @ 0x1402D5B50 (ExAllocateTimer.c)
 *     ntoskrnl_3 @ 0x14063D9B0 (ntoskrnl_3.c)
 * Callees:
 *     sub_140358884 @ 0x140358884 (sub_140358884.c)
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 *     sub_1403725A0 @ 0x1403725A0 (sub_1403725A0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall ntoskrnl_4(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4)
{
  ULONG_PTR v5; // rdi
  _WORD *PoolWithTag; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  _WORD v12[20]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  if ( !(unsigned __int8)sub_140358884(a4) || ((v5 & 2) != 0) != (a3 != 0LL) )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, v5, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6D547845u);
  v9 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (v5 & 2) != 0 )
    {
      v12[0] = *a3;
      v12[1] = a3[1];
      sub_1403725A0((_DWORD)PoolWithTag, a1, a2, (unsigned int)v12, v5);
    }
    else
    {
      PoolWithTag[1] = 0;
      sub_1403588EC(PoolWithTag, a1, a2, (unsigned int)v5);
    }
    *(_QWORD *)(v9 + 136) = qword_140D06CC8 ^ __ROR8__(v9 ^ _byteswap_uint64(qword_140D06E28), qword_140D06CC8);
    v10 = qword_140D06CC8 ^ __ROR8__(v9 ^ _byteswap_uint64(qword_140D06E28), qword_140D06CC8);
    *(_BYTE *)(v9 + 152) = byte_140D06991;
    *(_QWORD *)(v9 + 144) = v10;
  }
  return v9;
}
