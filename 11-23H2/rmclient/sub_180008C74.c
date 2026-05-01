/*
 * XREFs of sub_180008C74 @ 0x180008C74
 * Callers:
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 * Callees:
 *     sub_180006F94 @ 0x180006F94 (sub_180006F94.c)
 *     sub_180008D10 @ 0x180008D10 (sub_180008D10.c)
 */

__int64 __fastcall sub_180008C74(_QWORD *a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  RtlAcquireSRWLockExclusive(a1 + 1);
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)a1 + 5) |= 1u;
  *((_DWORD *)a1 + 4) = CurrentThreadId;
  while ( 1 )
  {
    v3 = a1[4];
    if ( (v3 & 1) != 0 )
    {
      if ( v3 == 1 )
        break;
      v4 = v3 ^ ((unsigned __int64)(a1 + 3) | 1);
    }
    else
    {
      v4 = a1[4];
    }
    if ( !v4 )
      break;
    sub_180006F94(v4, a1);
  }
  *((_DWORD *)a1 + 4) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 1);
  if ( *a1 )
    return sub_180008D10(*a1);
  return result;
}
