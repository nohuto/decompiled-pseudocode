/*
 * XREFs of sub_140AA5A48 @ 0x140AA5A48
 * Callers:
 *     sub_140A805A8 @ 0x140A805A8 (sub_140A805A8.c)
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8C014 @ 0x140A8C014 (sub_140A8C014.c)
 *     sub_140A8C08C @ 0x140A8C08C (sub_140A8C08C.c)
 *     sub_140A8CEB8 @ 0x140A8CEB8 (sub_140A8CEB8.c)
 *     sub_140A8D070 @ 0x140A8D070 (sub_140A8D070.c)
 *     sub_140A8D2FC @ 0x140A8D2FC (sub_140A8D2FC.c)
 *     sub_140A90FE0 @ 0x140A90FE0 (sub_140A90FE0.c)
 *     sub_140A9C124 @ 0x140A9C124 (sub_140A9C124.c)
 *     sub_140AA5AF8 @ 0x140AA5AF8 (sub_140AA5AF8.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1406022B8 @ 0x1406022B8 (sub_1406022B8.c)
 *     sub_140602358 @ 0x140602358 (sub_140602358.c)
 *     sub_140A81A74 @ 0x140A81A74 (sub_140A81A74.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 *     sub_140AA5DA4 @ 0x140AA5DA4 (sub_140AA5DA4.c)
 */

__int64 __fastcall sub_140AA5A48(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  KIRQL v4; // bl
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  if ( dword_140C1ADEC
    && sub_140A81A74((__m128i *)(qword_140C1ADF8 + 16LL * (unsigned __int8)(-125 * (a1 >> 12))), a1, a1 + 208) )
  {
    sub_1406022B8(&v6);
    v3 = sub_140AA5DA4(a1);
    v1 = v3;
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 20));
      v4 = v6;
      sub_140602358(v6);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 8));
      *(_BYTE *)(v1 + 16) = v4;
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 20));
      if ( !*(_DWORD *)(v1 + 24) )
      {
        sub_140AA5BCC(v1);
        return 0LL;
      }
    }
    else
    {
      sub_140602358(v6);
    }
  }
  return v1;
}
