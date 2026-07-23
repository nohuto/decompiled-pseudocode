/*
 * XREFs of PiDqQueryEvaluateFilter @ 0x140788544
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x140786E84 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x140788424 (PiDqQueryEnumObject.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     FilterEval @ 0x140788650 (FilterEval.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     PnpFreeDevPropertyArray @ 0x140789888 (PnpFreeDevPropertyArray.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqQueryEvaluateFilter(__int64 a1, __int64 a2, bool *a3)
{
  __int64 v3; // rax
  PVOID v6; // rbx
  __int64 Pool2; // rsi
  int v9; // edi
  HANDLE Handle[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v14 = 0;
  v6 = 0LL;
  *(_OWORD *)Handle = 0LL;
  *a3 = 0;
  v12 = 0LL;
  P = 0LL;
  v13 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 48LL * *(unsigned int *)(v3 + 80), 1483763280LL);
  if ( Pool2 )
  {
    LODWORD(Handle[1]) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
    *(_QWORD *)&v12 = Pool2;
    *(_QWORD *)&v13 = a2;
    *((_QWORD *)&v13 + 1) = a1;
    PiPnpRtlBeginOperation(&P);
    v9 = FilterEval(
           (unsigned int)PiDqPropertyCallback,
           (unsigned int)Handle,
           *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL),
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL),
           (__int64)&v14);
    if ( v9 >= 0 )
      *a3 = v14 != 0;
    PnpFreeDevPropertyArray(DWORD2(v12), Pool2, 1483763280LL);
    v6 = P;
  }
  else
  {
    v9 = -1073741670;
  }
  if ( (unsigned __int64)Handle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Handle[0]);
  if ( v6 )
    PiPnpRtlEndOperation(v6);
  return (unsigned int)v9;
}
