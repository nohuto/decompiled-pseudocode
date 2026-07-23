/*
 * XREFs of sub_140A505D4 @ 0x140A505D4
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_1403AE924 @ 0x1403AE924 (sub_1403AE924.c)
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     sub_14051DE5C @ 0x14051DE5C (sub_14051DE5C.c)
 *     sub_14051E084 @ 0x14051E084 (sub_14051E084.c)
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 */

int __fastcall sub_140A505D4(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  int v3; // r15d
  int v4; // ebp
  ULONG_PTR v5; // rdi
  int v6; // eax
  int v7; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  int v9; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v12; // esi
  ULONG i; // ebx
  __int64 v14; // r14
  ULONG_PTR v15; // rbp
  unsigned int v16; // ebp
  unsigned int v17; // ebx
  __int64 v18; // rsi
  ULONG_PTR v20; // r14
  ULONG ProcessorIndexFromNumber; // eax
  ULONG_PTR v22; // r15
  __int16 v24; // [rsp+50h] [rbp-8h]
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  v25 = 0;
  v2 = (ULONG_PTR *)qword_140C4DE70;
  v3 = 0;
  v4 = a1;
  while ( v2 != &qword_140C4DE70 )
  {
    v5 = (ULONG_PTR)v2;
    v2 = (ULONG_PTR *)*v2;
    v6 = *(_DWORD *)(v5 + 232);
    if ( (v6 & 1) != 0 )
    {
      *(_DWORD *)(v5 + 232) = v6 & 0xFFFFFFFE;
      v7 = sub_1403AE924(v5, a2);
      BugCheckParameter4 = v7;
      if ( v7 < 0 )
      {
        if ( sub_14051DE5C(v5) )
          KeBugCheckEx(0x5Cu, 0x200uLL, dword_140C4ADB0, v5, BugCheckParameter4);
      }
    }
  }
  LOBYTE(a1) = 1;
  v9 = sub_140A543D8(a1, 0LL);
  if ( v9 < 0 )
    KeBugCheckEx(0x5Cu, 0x500uLL, v9, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  LODWORD(CurrentPrcb) = dword_140D06B08;
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *(_DWORD *)(*((_QWORD *)CurrentPrcb + 4375) + 20LL) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  _disable();
  if ( (v4 & 0x10000) != 0 )
  {
    v12 = dword_140C0BB30 - dword_140C4E22C;
    if ( dword_140C4ADAC )
      LODWORD(CurrentPrcb) = sub_14051E084(0);
    for ( i = 1; i < v12; ++i )
    {
      v14 = qword_140C4BFD0 + 1472LL * i;
      v15 = qword_140C4E210 + ((unsigned __int64)i << 6);
      LODWORD(CurrentPrcb) = HalGetProcessorIdByNtNumber(i, &v25);
      if ( (int)CurrentPrcb >= 0 )
      {
        LODWORD(CurrentPrcb) = HalStartNextProcessor(v14, i, v25);
        v3 = (int)CurrentPrcb;
      }
      if ( v3 != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, i, (unsigned int)dword_140C54A90, v15);
    }
    v16 = dword_140C4E22C;
    v17 = 0;
    if ( dword_140C4E22C )
    {
      v18 = 0LL;
      do
      {
        v20 = qword_140C4E200 + (v18 << 6);
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v20 + 16));
        v22 = ProcessorIndexFromNumber;
        LODWORD(CurrentPrcb) = HalStartDynamicProcessor(
                                 qword_140C4BFD0 + 1472LL * ProcessorIndexFromNumber,
                                 ProcessorIndexFromNumber,
                                 *(_DWORD *)v20,
                                 0xFFFFu);
        if ( (_DWORD)CurrentPrcb != 4 )
          KeBugCheckEx(0x5Cu, 0x2001uLL, v22, (unsigned int)dword_140C54A90, v20);
        ++v17;
        ++v18;
      }
      while ( v17 < v16 );
    }
    byte_140C4E209 = 0;
  }
  byte_140C547D0 = 0;
  if ( (v24 & 0x200) != 0 )
    _enable();
  return (int)CurrentPrcb;
}
