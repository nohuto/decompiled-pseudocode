/*
 * XREFs of sub_140A9B2E4 @ 0x140A9B2E4
 * Callers:
 *     sub_1406019A0 @ 0x1406019A0 (sub_1406019A0.c)
 * Callees:
 *     sub_140250C50 @ 0x140250C50 (sub_140250C50.c)
 *     sub_140601980 @ 0x140601980 (sub_140601980.c)
 *     sub_14063B338 @ 0x14063B338 (sub_14063B338.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A7FDC0 @ 0x140A7FDC0 (sub_140A7FDC0.c)
 *     sub_140A926E4 @ 0x140A926E4 (sub_140A926E4.c)
 *     sub_140A9D00C @ 0x140A9D00C (sub_140A9D00C.c)
 */

void sub_140A9B2E4()
{
  _QWORD *Pool2; // rax
  __int64 v1; // rcx

  sub_14063B338(0x10u);
  if ( !dword_140C1ADEC )
  {
    dword_140C1ADF0 = 0;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x2000uLL, 0x74546F49u);
    qword_140C1AE00 = Pool2;
    if ( Pool2 )
    {
      v1 = 256LL;
      do
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2 += 2;
        --v1;
      }
      while ( v1 );
      qword_140C1ADF8 = (__int64)Pool2;
      _InterlockedExchange(&dword_140C1ADEC, 1);
    }
  }
  if ( (qword_140D01450 & 0x400000) == 0 )
    sub_140A9D00C();
  if ( !dword_140D57610 )
  {
    sub_140250C50(
      (__int64)&unk_140D591C0,
      0LL,
      (void (__stdcall *)(PVOID, ULONG))sub_1405FDFF0,
      512,
      2600,
      1936749129,
      16,
      dword_140C1AD3C);
    _InterlockedExchange(&dword_140D57610, 1);
  }
  if ( !byte_140C1A915 )
  {
    sub_140250C50(
      (__int64)&unk_140D590C0,
      0LL,
      (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
      512,
      256,
      1953526345,
      16,
      dword_140C1AD3C);
    byte_140C1A915 = 1;
  }
  if ( !byte_140C1A965 )
  {
    sub_140250C50(
      (__int64)&unk_140D59040,
      0LL,
      (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
      512,
      192,
      1131442761,
      16,
      dword_140C1AD3C);
    byte_140C1A965 = 1;
  }
  sub_140A926E4(
    0x1Bu,
    (__int64)sub_140AA5E40,
    (__int64)sub_140AA6600,
    (__int64)sub_140AA6270,
    (__int64)sub_140AA6400,
    (__int64)sub_140AA6020,
    (__int64)sub_140AA5E10,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)sub_140AA60B0,
    0LL);
  sub_140A926E4(
    0x16u,
    (__int64)sub_140AA68A0,
    (__int64)sub_140AA6B20,
    (__int64)sub_140AA69F0,
    (__int64)sub_140AA6AE0,
    (__int64)sub_140AA6970,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)sub_140AA6990,
    0LL);
  sub_140A926E4(
    0x17u,
    (__int64)sub_140AA6B60,
    (__int64)sub_140AA6D30,
    (__int64)sub_140AA6C20,
    (__int64)sub_140AA6CA0,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    0LL,
    (__int64)sub_140AA6BB0,
    0LL);
  sub_140A926E4(
    0xFFu,
    (__int64)sub_140A82690,
    (__int64)nullsub_11,
    (__int64)sub_140A82730,
    (__int64)sub_140A82930,
    0LL,
    0LL,
    (__int64)sub_140A82710,
    (__int64)sub_140A826E0,
    (__int64)sub_140A82A00,
    (__int64)nullsub_11,
    0LL,
    (__int64)sub_140A82620);
  if ( !dword_140D57528 )
  {
    if ( (int)sub_140601980(&qword_140D58A10, 32LL, 136LL, (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))sub_140A7C3C0) < 0 )
      _InterlockedExchange(&dword_140D576A8, 1);
    else
      _InterlockedExchange(&dword_140D57528, 1);
  }
  if ( !dword_140D575C0 )
  {
    if ( (int)sub_140601980(qword_140D58A38, 336LL, 24LL, (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))sub_140A7C3C0) < 0 )
      _InterlockedExchange(&dword_140D576A4, 1);
    else
      _InterlockedExchange(&dword_140D575C0, 1);
  }
  if ( !dword_140D575C4 )
  {
    sub_140250C50(
      (__int64)&unk_140D59140,
      0LL,
      (void (__stdcall *)(PVOID, ULONG))sub_1402DB870,
      512,
      8,
      1330202198,
      16,
      dword_140C1AD3C);
    _InterlockedExchange(&dword_140D575C4, 1);
  }
  dword_140C1AE08 = 1;
  sub_140A7FDC0(dword_140C29FC0);
}
