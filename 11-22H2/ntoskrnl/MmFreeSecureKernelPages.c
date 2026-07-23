/*
 * XREFs of MmFreeSecureKernelPages @ 0x140657F1C
 * Callers:
 *     PspIumAllocatePhysicalPages @ 0x1405A5B90 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePhysicalPages @ 0x1405A60E0 (PspIumFreePhysicalPages.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiFreeSecureKernelPage @ 0x1406569F4 (MiFreeSecureKernelPage.c)
 */

void __fastcall MmFreeSecureKernelPages(__int64 a1, int a2)
{
  ULONG_PTR *v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // r15
  _DWORD v8[4]; // [rsp+38h] [rbp-89h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+48h] [rbp-79h] BYREF

  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v4 = (ULONG_PTR *)(a1 + 48);
  v5 = a1 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 40) >> 12);
  v6 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 48) - 0x21FFFFFFFFD8LL);
  v8[0] = 0;
  v7 = *(_QWORD *)(qword_140C674C8 + 8 * ((v6 >> 43) & 0x3FF));
  if ( a1 + 48 < v5 )
  {
    do
      MiFreeSecureKernelPage(*v4++, v7, a2, (ULONG_PTR)BugCheckParameter2, v8);
    while ( (unsigned __int64)v4 < v5 );
    if ( v8[0] )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[4] = 0LL;
      BugCheckParameter2[5] = (unsigned int)(v8[0] << 12);
      LOWORD(BugCheckParameter2[1]) = 8 * (LOWORD(v8[0]) + 6);
      WORD1(BugCheckParameter2[1]) = 2;
      MiFreePagesFromMdl((ULONG_PTR)BugCheckParameter2, 0);
    }
  }
  *(_WORD *)(a1 + 10) &= ~2u;
}
