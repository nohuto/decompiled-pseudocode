/*
 * XREFs of MiAllocateInPageSupport @ 0x1402E0F74
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x1402BD58C (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x1402E1574 (MiGetInPageSupportBlock.c)
 */

__int64 __fastcall MiAllocateInPageSupport(unsigned __int64 a1, unsigned int a2, unsigned int *a3, __int64 *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 result; // rax
  _SLIST_ENTRY *v12; // rsi
  __int64 v13; // rax

  if ( a4 )
    v7 = *a4;
  else
    v7 = 0LL;
  v8 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v8 = 256;
  }
  v9 = a2 | 1;
  if ( v8 <= 0x10 )
    v9 = a2;
  v10 = v9;
  if ( a4 )
    v10 = v9 | 4;
  result = MiGetInPageSupportBlock(v10);
  if ( !result )
  {
    if ( a4 )
    {
      MiUnlockProtoPoolPage(v7, 0x11u);
    }
    else
    {
      if ( (v9 & 1) == 0 )
        return 0LL;
      v9 &= ~1u;
      *a3 = 16;
    }
    v12 = (_SLIST_ENTRY *)MiGetInPageSupportBlock(v9);
    if ( !v12 )
    {
      if ( (v9 & 1) == 0 )
        return (__int64)v12;
      *a3 = 16;
      v12 = (_SLIST_ENTRY *)MiGetInPageSupportBlock(v9 & 0xFFFFFFFE);
      if ( !v12 )
        return 0LL;
    }
    if ( !a4 )
      return (__int64)v12;
    v13 = MiLockProtoPoolPage(a1, 0LL);
    if ( v13 )
    {
      *a4 = v13;
      return (__int64)v12;
    }
    MiFreeInPageSupportBlock(v12);
    return 0LL;
  }
  return result;
}
