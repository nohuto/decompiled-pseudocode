/*
 * XREFs of HvlNotifyRootCrashdump @ 0x140547A48
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x140547AF4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140547EA8 (HvlResumeFromRootCrashdump.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall HvlNotifyRootCrashdump(int a1)
{
  char result; // al
  _DWORD *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+38h] [rbp-30h]
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  result = HvlpRootFlags;
  v4 = 0LL;
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v4, 1, (__int64)v7, 8LL);
    *v3 = 2;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v3[1] = 2;
      }
      else
      {
        if ( a1 != 2 )
          return HvlpReleaseHypercallPage((__int64)&v4);
        v3[1] = 3;
      }
    }
    else
    {
      v3[1] = 1;
    }
    HvcallInitiateHypercall(135);
    return HvlpReleaseHypercallPage((__int64)&v4);
  }
  return result;
}
