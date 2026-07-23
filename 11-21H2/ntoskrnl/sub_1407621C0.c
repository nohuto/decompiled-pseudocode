/*
 * XREFs of sub_1407621C0 @ 0x1407621C0
 * Callers:
 *     sub_140762174 @ 0x140762174 (sub_140762174.c)
 *     sub_1409680B0 @ 0x1409680B0 (sub_1409680B0.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     sub_14026B32C @ 0x14026B32C (sub_14026B32C.c)
 *     sub_14026DAB0 @ 0x14026DAB0 (sub_14026DAB0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402DBF90 @ 0x1402DBF90 (sub_1402DBF90.c)
 *     sub_1402DC188 @ 0x1402DC188 (sub_1402DC188.c)
 *     sub_1402DC334 @ 0x1402DC334 (sub_1402DC334.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall sub_1407621C0(int a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // r13
  ULONG v6; // r14d
  unsigned __int64 v7; // rdi
  __int64 i; // rbx
  ULONG ClearBitsAndSet; // ecx
  ULONG v11; // r12d
  __int64 v12; // r8
  _RTL_BITMAP *v13; // r15
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  _RTL_BITMAP *v17; // rcx
  unsigned __int64 v18; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v6 = (unsigned int)(a1 + 15) >> 4;
  sub_1402DC334((__int64)CurrentThread);
  v7 = 0LL;
  if ( !a2 )
  {
    for ( i = qword_140C4F040[v4 + 149]; i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 36) & 1) == 0 && *(_DWORD *)(i + 16) >= v6 )
      {
        ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(i + 16), v6, *(_DWORD *)(i + 32));
        if ( ClearBitsAndSet != -1 )
        {
          v7 = *(_QWORD *)(i + 8) + ((unsigned __int64)ClearBitsAndSet << 7);
          *(_DWORD *)(i + 32) = v6 + ClearBitsAndSet;
          goto LABEL_8;
        }
      }
    }
  }
  v11 = (unsigned __int8)sub_140363220(1);
  v20 = (16 * (v6 + v11) + 511) & 0xFFFFFE00;
  v13 = (_RTL_BITMAP *)sub_1402828F0((_DWORD)dword_140C4E560 != 0 ? 256 : 64, (v20 >> 7) + 40, 0x70446D4Du);
  if ( !v13 )
  {
LABEL_8:
    sub_1402DC188((__int64)CurrentThread);
    return v7;
  }
  v14 = 12 - ((_DWORD)v4 != 0);
  v15 = sub_14026B32C(((16 * (v6 + v11) + 511) & 0xFFFFFE00) >> 9, v14, v12);
  v18 = v15;
  if ( !v15 )
    goto LABEL_18;
  v16 = sub_140313C70(v15);
  if ( !(_DWORD)v4 && !(unsigned int)sub_1402DBF90(v16, v16 + 8 * (v20 - 1), 1, v14) )
  {
    sub_14026DAB0(v18, (__int64)((v16 << 25) + (v20 << 28)) >> 16, v14);
LABEL_18:
    sub_1402DC188((__int64)CurrentThread);
    ExFreePoolWithTag(v13, 0);
    return 0LL;
  }
  memset(&v13[2].Buffer, 0, v20 >> 7);
  v17 = v13 + 1;
  v13[1].SizeOfBitMap = ((16 * (v6 + v11) + 511) & 0xFFFFFE00) >> 4;
  v13[1].Buffer = (PULONG)&v13[2].Buffer;
  if ( a2 )
  {
    v11 = 0;
    RtlSetAllBits(v17);
    LODWORD(v7) = 2;
  }
  else
  {
    RtlSetBits(v17, v11, v6);
  }
  *(&v13[2].SizeOfBitMap + 1) = v7;
  v13->Buffer = (PULONG)v16;
  v13[2].SizeOfBitMap = v6 + v11;
  *(_QWORD *)&v13->SizeOfBitMap = qword_140C4F040[v4 + 149];
  qword_140C4F040[v4 + 149] = (__int64)v13;
  sub_1402DC188((__int64)CurrentThread);
  return v16 + ((unsigned __int64)v11 << 7);
}
