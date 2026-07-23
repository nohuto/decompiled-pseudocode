/*
 * XREFs of sub_14027B604 @ 0x14027B604
 * Callers:
 *     sub_140230F28 @ 0x140230F28 (sub_140230F28.c)
 *     sub_140278960 @ 0x140278960 (sub_140278960.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14027B604(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r11d
  int v3; // r10d
  __int64 i; // r9
  unsigned __int64 v6; // rdx

  v2 = *(_DWORD *)(a1 + 16728);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  for ( i = a1 + 16736; ; i += 8LL )
  {
    v6 = *(_QWORD *)(*(_QWORD *)i + 216LL);
    if ( v6 )
    {
      if ( a2 >= v6 && a2 < v6 + (unsigned int)dword_140C531CC * *(_QWORD *)(*(_QWORD *)i + 8LL) )
        break;
    }
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return *(_QWORD *)i;
}
