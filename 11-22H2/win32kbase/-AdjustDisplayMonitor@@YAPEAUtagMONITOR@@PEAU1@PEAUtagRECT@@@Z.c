/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00BC138
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     IntersectRect @ 0x1C0059BB8 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C005BE7C (GetMonitorRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  __m128i v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __m128i v8; // [rsp+40h] [rbp-18h] BYREF

  for ( i = *((_QWORD *)gpDispInfo + 13); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) == 0 )
    {
      v7 = 0LL;
      v6 = *GetMonitorRect(&v8, i);
      if ( (unsigned int)IntersectRect(&v7, &a2->left, v6.m128i_i32) )
        return (struct tagMONITOR *)i;
    }
  }
  return a1;
}
