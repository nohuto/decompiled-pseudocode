/*
 * XREFs of SdbpMatchDeviceString @ 0x140A51650
 * Callers:
 *     SdbpMatchOem @ 0x140863290 (SdbpMatchOem.c)
 *     SdbpMatchCpu @ 0x1408632E4 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140863338 (SdbpMatchBios.c)
 *     SdbpMatchAcpi @ 0x14086338C (SdbpMatchAcpi.c)
 * Callees:
 *     _wcsicmp @ 0x1403D9A50 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x140757368 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407579A4 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  __int64 v8; // r8
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag, v8);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
