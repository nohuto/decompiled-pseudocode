/*
 * XREFs of CcRegisterExternalCache @ 0x1403A12A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A1330 @ 0x1403A1330 (sub_1403A1330.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14053A314 @ 0x14053A314 (sub_14053A314.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCache(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  bool v7; // zf

  v2 = 0;
  if ( !dword_140C54C60 )
    KeBugCheckEx(0x34u, 0x1DF3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x40uLL, 0x43456343u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = byte_140C54C58 == 1;
    *PoolWithTag = a1;
    if ( v7 )
      sub_14053A314(PoolWithTag);
    else
      sub_1403A1330(PoolWithTag, &qword_140C49BF0);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
