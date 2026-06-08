/*
 * XREFs of AcpiEval_PDC @ 0x1C0026D58
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     memcpy_s @ 0x1C0002CC8 (memcpy_s.c)
 *     AcpiEvaluateMethod @ 0x1C0027F18 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PDC(__int64 a1, const void *a2, unsigned __int16 a3)
{
  rsize_t v5; // rbp
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  void *v8; // rsi
  int v9; // ebx
  int v11; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  P = 0LL;
  v5 = a3;
  v6 = a3 + 24;
  Pool2 = ExAllocatePool2(256LL, v6, 1919119952LL);
  v8 = (void *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
LABEL_6:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x20000u);
    return (unsigned int)v9;
  }
  *(_DWORD *)Pool2 = 1130980673;
  *(_DWORD *)(Pool2 + 4) = 1128550495;
  *(_DWORD *)(Pool2 + 8) = v6;
  *(_DWORD *)(Pool2 + 12) = 1;
  *(_WORD *)(Pool2 + 18) = v5;
  *(_WORD *)(Pool2 + 16) = 2;
  memcpy_s((void *)(Pool2 + 20), v5, a2, v5);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x20000u);
  v9 = AcpiEvaluateMethod(a1, 0, (_DWORD)v8, (unsigned int)&P, (__int64)&v11);
  ExFreePoolWithTag(v8, (ULONG)0);
  if ( P )
    ExFreePoolWithTag(P, (ULONG)0);
  if ( v9 < 0 )
    goto LABEL_6;
  return (unsigned int)v9;
}
