/*
 * XREFs of SdbpMatchList @ 0x18009BE58
 * Callers:
 *     SdbpMatchOne @ 0x18009BFE0 (SdbpMatchOne.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     SdbGetFirstChild @ 0x180095334 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x180095394 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbpFindMatcher @ 0x18009B5B0 (SdbpFindMatcher.c)
 *     SdbpIsSdbCapabilityPresent @ 0x18009BD94 (SdbpIsSdbCapabilityPresent.c)
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
  int v15; // eax
  __int64 result; // rax
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF

  a7 = 1;
  v10 = 0;
  for ( i = SdbGetFirstChild(a4, a5); ; i = SdbGetNextChild(a4, a5, v20) )
  {
    v20 = i;
    if ( !i )
    {
      v19 = a7;
      goto LABEL_20;
    }
    Matcher = (__int64 (__fastcall *)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher(&v22, &a8, a3, a4, i);
    if ( Matcher )
    {
      result = Matcher(&a7, a3, a4, a5, v20, a6, v22);
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      if ( a8 == 2 )
      {
        v15 = 1;
      }
      else
      {
        if ( a8 != 3 )
          continue;
        v15 = 0;
      }
      a7 = v15;
    }
    ++v10;
    if ( (unsigned int)SdbFindFirstTag(a4, v20, 4099) )
      a7 = !a7;
    FirstTag = SdbFindFirstTag(a4, v20, 24636);
    if ( FirstTag )
    {
      StringTagPtr = SdbGetStringTagPtr(a4, FirstTag);
      SdbpIsSdbCapabilityPresent(&v21, a3, StringTagPtr);
      if ( v21 )
        break;
    }
    v19 = a7;
LABEL_16:
    if ( v19 == 1 )
      goto LABEL_20;
  }
  if ( a7 )
  {
    v19 = 0;
    a7 = 0;
    goto LABEL_16;
  }
  v19 = 1;
LABEL_20:
  *a1 = v19;
  result = 1LL;
  if ( a2 )
    *a2 = v10;
  return result;
}
