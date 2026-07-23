/*
 * XREFs of KeFlushIoBuffers @ 0x140232370
 * Callers:
 *     sub_140457DC0 @ 0x140457DC0 (sub_140457DC0.c)
 *     sub_140504158 @ 0x140504158 (sub_140504158.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 *     sub_140513544 @ 0x140513544 (sub_140513544.c)
 *     sub_140513C1C @ 0x140513C1C (sub_140513C1C.c)
 *     sub_14051416C @ 0x14051416C (sub_14051416C.c)
 *     sub_140A88D98 @ 0x140A88D98 (sub_140A88D98.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14056F780 @ 0x14056F780 (sub_14056F780.c)
 *     sub_14062D620 @ 0x14062D620 (sub_14062D620.c)
 */

char __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3, __int64 a4)
{
  PVOID v4; // rax
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // r12
  char v10; // si
  void *v11; // rbx
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = dword_140C0B8A8;
  memset(v13, 0, sizeof(v13));
  if ( !dword_140C0B8A8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = *(unsigned int *)(BugCheckParameter4 + 40);
    if ( a3 || a2 )
    {
      v10 = 1;
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
      {
        v11 = *(void **)(BugCheckParameter4 + 24);
      }
      else
      {
        v4 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
        v11 = v4;
      }
      if ( !v11 && CurrentIrql == 15 )
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      if ( (xmmword_140D06910 & 0x4000000) != 0 )
        LOBYTE(v4) = sub_140223A20((unsigned __int64)v13, 0x84000000uLL);
      else
        v10 = 0;
      if ( v11 )
      {
        LOBYTE(v4) = sub_14056F780(BugCheckParameter4, v11, v9, a3);
      }
      else if ( a3 )
      {
        LOBYTE(v4) = KeInvalidateAllCaches();
      }
      if ( v10 )
      {
        LOBYTE(a4) = a2 == 0;
        LOBYTE(v4) = sub_14062D620(v13, v11, v9, a4);
      }
    }
  }
  return (char)v4;
}
