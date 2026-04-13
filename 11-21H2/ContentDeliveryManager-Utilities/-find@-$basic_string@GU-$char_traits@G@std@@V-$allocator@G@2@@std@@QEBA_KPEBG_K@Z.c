/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18006B8AC
 * Callers:
 *     _anonymous_namespace_::StartsWith @ 0x180065AE4 (_anonymous_namespace_--StartsWith.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180078240 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1, _WORD *a2)
{
  __int16 v2; // bp
  char *v4; // r8
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r9
  char *v8; // rsi
  unsigned __int64 v9; // rax
  char *i; // rdx
  unsigned __int64 v12; // rdi
  _WORD *v13; // rcx
  __int64 v14; // rcx

  v2 = *a2;
  v4 = a1;
  if ( !*a2 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( !v5 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 2);
  if ( !v6 || v5 > v6 )
    return -1LL;
  v7 = 1 - v5 + v6;
  v8 = *((_QWORD *)a1 + 3) < 8uLL ? a1 : *(char **)a1;
LABEL_10:
  if ( !v7 )
    return -1LL;
  v9 = v7;
  for ( i = v8; *(_WORD *)i != v2; i += 2 )
  {
    if ( !--v9 )
      return -1LL;
  }
  if ( !i )
    return -1LL;
  v12 = v5;
  v13 = a2;
  do
  {
    if ( *(_WORD *)((char *)v13 + i - (char *)a2) != *v13 )
    {
      v14 = i - v8;
      v8 = i + 2;
      v7 += -1 - (v14 >> 1);
      goto LABEL_10;
    }
    ++v13;
    --v12;
  }
  while ( v12 );
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v4 = *(char **)v4;
  return (i - v4) >> 1;
}
