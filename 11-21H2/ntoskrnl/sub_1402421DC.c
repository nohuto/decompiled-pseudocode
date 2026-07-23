/*
 * XREFs of sub_1402421DC @ 0x1402421DC
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x140242190 (KeSaveExtendedProcessorState.c)
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 * Callees:
 *     sub_14024215C @ 0x14024215C (sub_14024215C.c)
 *     sub_1402423D0 @ 0x1402423D0 (sub_1402423D0.c)
 *     sub_140242424 @ 0x140242424 (sub_140242424.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402421DC(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rbp
  bool v5; // zf
  unsigned __int8 v6; // r13
  __int64 v7; // rax
  ULONG_PTR v8; // r15
  unsigned int *v9; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v12; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( (qword_140D068D8 & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(qword_140D06A68 | MEMORY[0xFFFFF780000003D8]) & BugCheckParameter3) != 0 )
LABEL_35:
        KeBugCheckEx(
          0x131u,
          0LL,
          qword_140D068D8 & 0x800000,
          (unsigned int)BugCheckParameter3,
          HIDWORD(BugCheckParameter3));
LABEL_28:
      v6 = CurrentIrql + 1;
      goto LABEL_9;
    }
    v5 = (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) == 0;
  }
  else
  {
    v5 = (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v5 )
    goto LABEL_35;
  if ( CurrentIrql || (*((_BYTE *)CurrentThread + 192) & 1) != 0 )
    goto LABEL_28;
  v6 = 0;
LABEL_9:
  v7 = *((_QWORD *)CurrentThread + 51);
  v8 = (BugCheckParameter3 | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v7 && *(_BYTE *)(v7 + 16) > v6 )
    KeBugCheckEx(0x131u, 2uLL, *(unsigned __int8 *)(v7 + 16), v6, 0LL);
  if ( v8 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_12;
    if ( !v7 || *(_BYTE *)(v7 + 16) != v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      memset((void *)(*((_QWORD *)CurrentPrcb + 4410) + 512LL), 0, 0x40uLL);
      v12 = dword_140D050A0;
      *(_QWORD *)(a2 + 48) = 0LL;
      *(_DWORD *)(a2 + 32) = v12;
      *(_QWORD *)(a2 + 40) = *((_QWORD *)CurrentPrcb + 4410);
      goto LABEL_14;
    }
    v9 = (unsigned int *)0xFFFFF78000000600LL;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
LABEL_12:
      v9 = (unsigned int *)0xFFFFF780000003E8LL;
    result = sub_140242424(a2 + 24, a2, *v9);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    *(_DWORD *)(a2 + 32) = 0;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_QWORD *)(a2 + 40) = 0LL;
  }
LABEL_14:
  *(_QWORD *)(a2 + 8) = CurrentThread;
  *(_BYTE *)(a2 + 16) = v6;
  *(_QWORD *)(a2 + 24) = v8;
  if ( !CurrentIrql )
    --*((_WORD *)CurrentThread + 243);
  *(_QWORD *)a2 = *((_QWORD *)CurrentThread + 51);
  if ( !v8 || (qword_140D068D8 & 0x800000) == 0 )
    goto LABEL_20;
  if ( CurrentIrql != 2 || (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
  {
    sub_1402423D0(*(_QWORD *)(a2 + 40), v8);
LABEL_20:
    *((_QWORD *)CurrentThread + 51) = a2;
    if ( !CurrentIrql )
    {
      v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 520LL) = v8;
  sub_14024215C(*(_QWORD *)(a2 + 40), v8);
  *((_QWORD *)CurrentThread + 51) = a2;
  return 0LL;
}
