/*
 * XREFs of SdbpMatchList @ 0x1408434E0
 * Callers:
 *     SdbpCheckForMatch @ 0x1408433DC (SdbpCheckForMatch.c)
 *     SdbpMatchOne @ 0x140A12D00 (SdbpMatchOne.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     SdbGetFirstChild @ 0x140791910 (SdbGetFirstChild.c)
 *     SdbFindFirstTag @ 0x140792CCC (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140792D40 (SdbGetNextChild.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     SdbpFindMatcher @ 0x140843624 (SdbpFindMatcher.c)
 *     SdbpIsSdbCapabilityPresent @ 0x140A12B34 (SdbpIsSdbCapabilityPresent.c)
 */

__int64 __fastcall SdbpMatchList(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        BOOL a8)
{
  int v10; // esi
  unsigned int i; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall *Matcher)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // rax
  int v16; // eax
  __int64 result; // rax
  unsigned int FirstTag; // eax
  int v19; // eax
  __int64 StringTagPtr; // rax
  int v21; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF

  a8 = 1;
  v22 = 0;
  v23 = 0LL;
  v21 = 0;
  v10 = 0;
  for ( i = SdbGetFirstChild(a4, a5); ; i = SdbGetNextChild(a4, a5, v14) )
  {
    v14 = i;
    if ( !i )
      break;
    Matcher = (__int64 (__fastcall *)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher((unsigned int)&v23, (unsigned int)&v21, a3, a4, i);
    if ( Matcher )
    {
      result = Matcher(&a8, a3, a4, a5, v14, a6, v23);
      if ( !(_DWORD)result )
        return result;
    }
    else
    {
      if ( v21 == 2 )
      {
        v19 = 1;
      }
      else
      {
        if ( v21 != 3 )
          continue;
        v19 = 0;
      }
      a8 = v19;
    }
    ++v10;
    if ( (unsigned int)SdbFindFirstTag(a4, v14, 4099) )
      a8 = !a8;
    FirstTag = SdbFindFirstTag(a4, v14, 24636);
    if ( FirstTag
      && (StringTagPtr = SdbGetStringTagPtr(a4, FirstTag), SdbpIsSdbCapabilityPresent(&v22, a3, StringTagPtr), v22) )
    {
      v16 = !a8;
      a8 = v16;
    }
    else
    {
      v16 = a8;
    }
    if ( v16 == a7 )
      goto LABEL_8;
  }
  v16 = a8;
LABEL_8:
  *a1 = v16;
  result = 1LL;
  if ( a2 )
    *a2 = v10;
  return result;
}
