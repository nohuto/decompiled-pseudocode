/*
 * XREFs of BgkResumePrepare @ 0x140A4E794
 * Callers:
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     PopMarkComponentsBootPhase @ 0x140A4F19C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     BgMarkHiberPhase @ 0x140AAB248 (BgMarkHiberPhase.c)
 *     BgGetContext @ 0x140AAB2D4 (BgGetContext.c)
 *     BgkpLockBgfxCodeSection @ 0x140AAB660 (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AAB6EC (BgkpUnlockBgfxCodeSection.c)
 */

__int64 __fastcall BgkResumePrepare(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 Context; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v7; // rdi
  void *v8; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    BgkpLockBgfxCodeSection();
    Context = BgGetContext();
    v4 = (void *)Context;
    if ( Context )
    {
      v5 = *(void **)(Context + 16);
      if ( v5 )
        PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(Context + 24), 0x4B494742u);
      qword_140C547D8 = v4;
      return v1;
    }
    BgkpUnlockBgfxCodeSection();
    return (unsigned int)-1073741670;
  }
  v7 = qword_140C547D8;
  if ( !qword_140C547D8 )
    return (unsigned int)-1073741670;
  PoSetHiberRange(0LL, 0x10000u, qword_140C547D8, *(unsigned int *)qword_140C547D8, 0);
  v8 = (void *)v7[2];
  if ( v8 )
    PoSetHiberRange(0LL, 0x10000u, v8, *((unsigned int *)v7 + 6), 0);
  return (unsigned int)BgMarkHiberPhase();
}
