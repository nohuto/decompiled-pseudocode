/*
 * XREFs of sub_14063130C @ 0x14063130C
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     sub_140460684 @ 0x140460684 (sub_140460684.c)
 */

char __fastcall sub_14063130C(struct _KTHREAD *a1, char a2, ULONG a3, __int64 a4, char a5, char a6)
{
  PVOID *v6; // r14
  ULONG v11; // ebx
  signed __int64 v12; // rdi
  __int16 v13; // bp
  ULONG v14; // ebx
  __int16 v15; // bx
  char result; // al
  __int16 v17; // bx
  char v18; // [rsp+78h] [rbp+20h] BYREF

  v6 = (PVOID *)(*(_QWORD *)a4 + 16LL);
  a6 = 0;
  v11 = 0;
  v18 = 0;
  v12 = 0LL;
  v13 = 0;
  if ( a5 )
  {
    v14 = RtlWalkFrameChain(v6, a3, 0x300u);
    if ( v14 > 3 )
      v11 = v14 - 3;
    else
      v11 = 0;
  }
  sub_140460684(a1, 0, 0, &v18, &a6);
  if ( v18 )
  {
    if ( a6 || (a2 & 1) != 0 )
      v12 = _InterlockedIncrement64(&qword_140C0DA50);
    else
      v13 = RtlWalkFrameChain(&v6[v11], a3 - v11, 1u);
  }
  v15 = v13 + v11;
  if ( !v15 && !v12 )
    return 0;
  v17 = 8 * (v15 + 1);
  *(_QWORD *)(*(_QWORD *)a4 + 8LL) = v12;
  result = 1;
  **(_WORD **)a4 = v17 + 8;
  *(_WORD *)(*(_QWORD *)a4 + 2LL) = 6;
  *(_WORD *)(*(_QWORD *)a4 + 6LL) = v17;
  *(_WORD *)(*(_QWORD *)a4 + 4LL) &= ~1u;
  *(_WORD *)(*(_QWORD *)a4 + 4LL) &= 1u;
  return result;
}
