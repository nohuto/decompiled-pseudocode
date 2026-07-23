/*
 * XREFs of CmpFreeAllMemory @ 0x140A115DC
 * Callers:
 *     CmShutdownSystem2 @ 0x14061636C (CmShutdownSystem2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpDumpKeyBodyList @ 0x140A17348 (CmpDumpKeyBodyList.c)
 *     CmpDestroyHive @ 0x140A1CF50 (CmpDestroyHive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // ebp
  __int64 *NextActiveHive; // rbx
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rsi
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 i; // rdi
  int v8; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v9[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  v0 = 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v2 = *((_DWORD *)NextActiveHive + 414);
      v3 = 0;
      v4 = NextActiveHive[206];
      v8 = 0;
      if ( v2 > 0 )
      {
        v5 = (__int64 *)(v4 + 16);
        v6 = (unsigned int)v2;
        do
        {
          for ( i = *v5; i; i = *(_QWORD *)(i + 8) )
            CmpDumpKeyBodyList(i - 16, &v8);
          v5 += 3;
          --v6;
        }
        while ( v6 );
        v3 = v8;
      }
      v0 += v3;
      CmpAttachToRegistryProcess(v9);
      CmpDestroyHive(NextActiveHive);
      CmpDetachFromRegistryProcess(v9);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
}
