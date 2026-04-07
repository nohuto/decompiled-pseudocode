/*
 * XREFs of ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x18011134C
 * Callers:
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x1801115F0 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180023050 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMILResourceCache::EnsureCount(CMILResourceCache *this, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v5; // edi
  int v6; // eax
  signed __int32 v7; // edx

  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  v2 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 0x80000000, 0) )
    SleepEx(0, 1);
  if ( a2 > *((_DWORD *)this + 8) )
  {
    v5 = a2 - *((_DWORD *)this + 8);
    if ( a2 <= *((_DWORD *)this + 7)
      || (v6 = DynArrayImpl<0>::Grow((char **)this + 1, 8u, v5, 1, 0LL), v2 = v6, v6 >= 0) )
    {
      memset_0((void *)(*((_QWORD *)this + 1) + 8LL * *((unsigned int *)this + 8)), 0, 8LL * v5);
      *((_DWORD *)this + 8) = a2;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x346u);
    }
  }
  do
    v7 = *((_DWORD *)this + 14);
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)this + 14, v7 - 0x7FFFFFFF, v7) );
  return v2;
}
