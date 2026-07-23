/*
 * XREFs of sub_1405683C0 @ 0x1405683C0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall sub_1405683C0(void *a1, size_t Size, int a3)
{
  size_t v4; // rdi
  int v6; // r8d
  unsigned int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h]

  v4 = (unsigned int)Size;
  Src = 0LL;
  v12 = 0LL;
  v6 = a3 - 228;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (unsigned int)-1073741811;
    if ( (_DWORD)Size == 32 )
    {
      LODWORD(Src) = 2;
      goto LABEL_9;
    }
    return (unsigned int)-1073741820;
  }
  if ( (_DWORD)Size != 20 )
    return (unsigned int)-1073741820;
  LODWORD(Src) = 1;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C2BD70, 0LL);
  v9 = a3 - 228;
  if ( !v9 )
  {
    v7 = 0;
LABEL_19:
    if ( dword_140D05028 )
    {
      LODWORD(Src) = Src | 0x100;
      DWORD1(Src) = dword_140D05028;
    }
    if ( dword_140D0501C )
    {
      LODWORD(Src) = Src | 0x200;
      DWORD2(Src) = dword_140D0501C;
    }
    if ( dword_140D05034 )
    {
      LODWORD(Src) = Src | 0x400;
      HIDWORD(Src) = dword_140D05034;
    }
    if ( dword_140D05030 )
    {
      LODWORD(Src) = Src | 0x800;
      LODWORD(v12) = dword_140D05030;
    }
    goto LABEL_27;
  }
  if ( v9 == 1 )
  {
    v7 = 0;
    if ( dword_140D05024 )
    {
      LODWORD(Src) = Src | 0x1000;
      DWORD1(v12) = dword_140D05024;
    }
    if ( dword_140D05020 )
    {
      LODWORD(Src) = Src | 0x2000;
      DWORD2(v12) = dword_140D05020;
    }
    if ( (_DWORD)dword_140D0502C )
    {
      LODWORD(Src) = Src | 0x4000;
      HIDWORD(v12) = (_DWORD)dword_140D0502C;
    }
    goto LABEL_19;
  }
  v7 = 0;
LABEL_27:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C2BD70, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C2BD70);
  sub_1402AFC00((ULONG_PTR)&qword_140C2BD70);
  sub_1402F9540((__int64)KeGetCurrentThread());
  memmove(a1, &Src, v4);
  return v7;
}
