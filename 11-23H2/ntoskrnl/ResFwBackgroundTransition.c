/*
 * XREFs of ResFwBackgroundTransition @ 0x140AEEAF8
 * Callers:
 *     BgpFwLibraryEnable @ 0x140388024 (BgpFwLibraryEnable.c)
 *     BgpFwLibraryDestroy @ 0x140AEEA88 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14038780C (BgpFwAllocateMemory.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x140AEEBF0 (ResFwpPageOutBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx
  __int64 Memory; // rax
  void *v5; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_140C0E4B0 & 0xC00) != 0xC00 )
      {
        v2 = qword_140C0E4F8;
        if ( qword_140C0E4F8 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C0E4F8, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140C0E500;
        if ( qword_140C0E500 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C0E500, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v3, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(Size) = 0;
      }
    }
    else
    {
      ResFwpPageOutBackground();
    }
  }
  else if ( (dword_140C0E4B0 & 0xC00) != 0xC00 && (dword_140C0E4B0 & 0x100000) == 0 )
  {
    if ( qword_140C0E500 )
    {
      Memory = BgpFwAllocateMemory((unsigned int)Size);
      v5 = (void *)Memory;
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(v5, qword_140C0E500, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140C0E4F8 )
          BgpFwFreeMemory((__int64)v5);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C0E4F8, (__int64)v5);
      }
    }
  }
}
