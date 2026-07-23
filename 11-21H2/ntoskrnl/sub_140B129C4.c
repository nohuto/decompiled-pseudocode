/*
 * XREFs of sub_140B129C4 @ 0x140B129C4
 * Callers:
 *     sub_140B10CAC @ 0x140B10CAC (sub_140B10CAC.c)
 * Callees:
 *     sub_140294D28 @ 0x140294D28 (sub_140294D28.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_140B129C4()
{
  struct _KTHREAD *CurrentThread; // rax
  const signed __int16 *v1; // r8
  __int64 v2; // rdx
  unsigned __int8 v3; // cf
  __int64 v4; // rcx
  struct _MDL *Pool2; // rbx
  PVOID *v6; // rdx
  __int64 v7; // rdi
  int v8; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 *v10[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v11[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v11, 0, 0x68uLL);
  memset(v10, 0, 0x48uLL);
  if ( sub_140294D28(0LL) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    v1 = (const signed __int16 *)PsLoadedModuleList;
    v2 = 0LL;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_10;
    do
    {
      v3 = _bittest16(v1 + 55, 8u);
      v4 = v2;
      v1 = *(const signed __int16 **)v1;
      ++v2;
      if ( !v3 )
        v2 = v4;
    }
    while ( v1 != (const signed __int16 *)&PsLoadedModuleList );
    if ( !v2 )
    {
LABEL_10:
      Pool2 = 0LL;
    }
    else
    {
      Pool2 = (struct _MDL *)ExAllocatePool2(64LL, 8 * v2, 0x65426B53u);
      if ( !Pool2 )
        KeBugCheck(0x7Du);
    }
    v6 = (PVOID *)PsLoadedModuleList;
    v7 = 0LL;
    while ( v6 != &PsLoadedModuleList )
    {
      if ( _bittest16((const signed __int16 *)v6 + 55, 8u) )
        *((_QWORD *)&Pool2->Next + v7++) = v6[6];
      v6 = (PVOID *)*v6;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v7 )
    {
      v8 = sub_1403A0F08((__int64)v10, Pool2, 8 * (int)v7, 0, 0);
      if ( v8 < 0 )
        KeBugCheckEx(0x13Du, 0xFFFFFFFCuLL, (ULONG_PTR)Pool2, 8 * v7, v8);
    }
    v11[1] = v10[0];
    v11[2] = v10[7];
    BugCheckParameter4 = (int)sub_140358A20(2u, 54, 0, (__int64)v11);
    if ( v7 )
      sub_1403A0EB4(v10);
    if ( (BugCheckParameter4 & 0x80000000) != 0LL )
      KeBugCheckEx(0x13Du, 0xFFFFFFFBuLL, (ULONG_PTR)Pool2, 8 * v7, BugCheckParameter4);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
