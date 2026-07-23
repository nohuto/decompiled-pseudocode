/*
 * XREFs of sub_14076200C @ 0x14076200C
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140761FC0 @ 0x140761FC0 (sub_140761FC0.c)
 *     sub_140968160 @ 0x140968160 (sub_140968160.c)
 *     sub_140B52AA8 @ 0x140B52AA8 (sub_140B52AA8.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_1402DC188 @ 0x1402DC188 (sub_1402DC188.c)
 *     sub_1402DC334 @ 0x1402DC334 (sub_1402DC334.c)
 *     RtlAreBitsSet @ 0x1402DC360 (RtlAreBitsSet.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14076200C(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r15
  _RTL_BITMAP *v7; // r12
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rbp
  _RTL_BITMAP *v10; // rbx
  unsigned __int64 Buffer; // rcx
  void *v12; // rax
  __int64 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 NumberToClear; // [rsp+88h] [rbp+10h]
  unsigned __int64 StartingIndex; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = 0LL;
  v9 = (__int64)(a2 << 25) >> 16;
  sub_1402DC334((__int64)CurrentThread);
  v13 = v5;
  v10 = (_RTL_BITMAP *)qword_140C4F4E8[v5];
  if ( !v10 )
    goto LABEL_16;
  do
  {
    Buffer = (unsigned __int64)v10->Buffer;
    if ( a2 >= Buffer )
    {
      v8 = (-(__int64)((*(&v10[2].SizeOfBitMap + 1) & 1) != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
      if ( a2 < Buffer + 8 * v8 * v10[1].SizeOfBitMap )
        break;
    }
    v7 = v10;
    v10 = *(_RTL_BITMAP **)&v10->SizeOfBitMap;
  }
  while ( v10 );
  if ( !v10 )
LABEL_16:
    KeBugCheckEx(0x1Au, 0x2102uLL, v9, (unsigned int)((_DWORD)v3 << 12), 0LL);
  NumberToClear = (~(v8 - 1) & (v8 + v3 - 1)) / v8;
  StartingIndex = ((__int64)(a2 - (unsigned __int64)v10->Buffer) >> 3) / v8;
  if ( !RtlAreBitsSet(v10 + 1, StartingIndex, NumberToClear) )
    KeBugCheckEx(0x1Au, 0x2103uLL, v9, (unsigned int)((_DWORD)v3 << 12), 0LL);
  if ( (*(&v10[2].SizeOfBitMap + 1) & 2) != 0
    || (RtlClearBits(v10 + 1, StartingIndex, NumberToClear), !RtlNumberOfSetBits(v10 + 1)) )
  {
    sub_14026DAB0(
      (__int64)v10->Buffer << 25 >> 16,
      ((__int64)v10->Buffer << 25 >> 16) + (((unsigned int)v8 * v10[1].SizeOfBitMap) << 12),
      12 - (a1 != 0));
    v12 = *(void **)&v10->SizeOfBitMap;
    if ( v7 )
      *(_QWORD *)&v7->SizeOfBitMap = v12;
    else
      qword_140C4F4E8[v13] = v12;
    sub_1402DC188((__int64)CurrentThread);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    sub_1402DC188((__int64)CurrentThread);
  }
}
