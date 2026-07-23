/*
 * XREFs of sub_1404173E4 @ 0x1404173E4
 * Callers:
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     sub_14024E6F0 @ 0x14024E6F0 (sub_14024E6F0.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 * Callees:
 *     IoAcquireCancelSpinLock @ 0x14022A5C0 (IoAcquireCancelSpinLock.c)
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024A390 @ 0x14024A390 (sub_14024A390.c)
 *     sub_14024C370 @ 0x14024C370 (sub_14024C370.c)
 *     IoReleaseCancelSpinLock @ 0x1402A23F0 (IoReleaseCancelSpinLock.c)
 *     sub_1402A2E8C @ 0x1402A2E8C (sub_1402A2E8C.c)
 *     sub_1402A386C @ 0x1402A386C (sub_1402A386C.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1404173E4(_QWORD *P, __int64 a2, int a3, unsigned int a4, int a5, int a6, __int16 a7)
{
  __int64 v7; // rsi
  char v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8

  v7 = P[2];
  P[2] = 0LL;
  v12 = 1;
  IoAcquireCancelSpinLock((PKIRQL)(v7 + 69));
  _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
  IoReleaseCancelSpinLock(*(_BYTE *)(v7 + 69));
  sub_1402A386C((__int64)P);
  if ( *(_BYTE *)(v7 + 68) )
  {
    a3 = -1073741536;
    v12 = 0;
    ObfDereferenceObject((PVOID)P[3]);
    if ( P[5] )
      sub_140240DB4(a2, (__int64)P);
    ExFreePoolWithTag(P, 0);
    v14 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(v7 + 24);
    v14 = 24LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_DWORD *)v13 = 1572865;
    *(_DWORD *)(v13 + 4) = 3;
    *(_DWORD *)(v13 + 8) = (a4 >> 12) & 7;
    *(_DWORD *)(v13 + 12) = a5;
    if ( (a5 & 2) != 0 )
    {
      *(_DWORD *)(v13 + 16) = a6;
      *(_WORD *)(v13 + 20) = a7;
    }
    if ( (a5 & 1) != 0 )
    {
      *((_DWORD *)P + 12) = P[6] & 0xFF0FFFFF | (a4 != 0 ? 0x100000 : 0x800000);
      sub_1402A2E8C((__int64 *)(a2 + 72), P);
      LOBYTE(v15) = 1;
      sub_14024A390(a2, (__int64)P, v15);
      sub_14024C370(a2, (__int64)P);
    }
    else
    {
      ObfDereferenceObject((PVOID)P[3]);
      if ( P[5] )
        sub_140240DB4(a2, (__int64)P);
      ExFreePoolWithTag(P, 0);
    }
  }
  *(_QWORD *)(v7 + 56) = v14;
  *(_DWORD *)(v7 + 48) = a3;
  IofCompleteRequest((PIRP)v7, 1);
  return v12;
}
