/*
 * XREFs of SdbpMatchList @ 0x1800969D8
 * Callers:
 *     SdbpMatchOne @ 0x180096B60 (SdbpMatchOne.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     SdbGetFirstChild @ 0x18008FF38 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18008FF98 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180093F34 (SdbGetStringTagPtr.c)
 *     SdbpFindMatcher @ 0x180096130 (SdbpFindMatcher.c)
 *     SdbpIsSdbCapabilityPresent @ 0x180096914 (SdbpIsSdbCapabilityPresent.c)
 */

__int64 __fastcall SdbpMatchList(
        int *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        BOOL a7,
        int a8)
{
  int v10; // esi
  unsigned int i; // eax
  __int64 (__fastcall *Matcher)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // rax
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // r9
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  int v21; // eax
  unsigned int v22; // ebx
  int v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF

  a7 = 1;
  v10 = 0;
  for ( i = SdbGetFirstChild(a4, a5, a3, a4); ; i = SdbGetNextChild(a4, a5, v22, v15) )
  {
    v22 = i;
    if ( !i )
    {
      v21 = a7;
      goto LABEL_20;
    }
    Matcher = (__int64 (__fastcall *)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher(&v25, &a8, a3, a4, i);
    if ( Matcher )
    {
      v17 = Matcher(&a7, a3, a4, a5, v22, a6, v25);
      if ( !v17 )
        return v17;
    }
    else
    {
      if ( a8 == 2 )
      {
        v16 = 1;
      }
      else
      {
        if ( a8 != 3 )
          continue;
        v16 = 0;
      }
      a7 = v16;
    }
    ++v10;
    if ( (unsigned int)SdbFindFirstTag(a4, v22, 4099LL, v15) )
      a7 = !a7;
    FirstTag = SdbFindFirstTag(a4, v22, 24636LL, v18);
    if ( FirstTag )
    {
      StringTagPtr = SdbGetStringTagPtr(a4, FirstTag);
      SdbpIsSdbCapabilityPresent(&v24, a3, StringTagPtr);
      if ( v24 )
        break;
    }
    v21 = a7;
LABEL_16:
    if ( v21 == 1 )
      goto LABEL_20;
  }
  if ( a7 )
  {
    v21 = 0;
    a7 = 0;
    goto LABEL_16;
  }
  v21 = 1;
LABEL_20:
  v17 = 1;
  *a1 = v21;
  if ( a2 )
    *a2 = v10;
  return v17;
}
