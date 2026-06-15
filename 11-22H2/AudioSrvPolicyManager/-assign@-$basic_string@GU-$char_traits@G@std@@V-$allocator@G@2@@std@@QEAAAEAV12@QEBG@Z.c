/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18000BD10
 * Callers:
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180021900 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180032E08 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x180048B28 (memmove_0.c)
 */

char *__fastcall std::wstring::assign(char *a1, _WORD *Src, __int64 a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rbx

  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  v6 = *((_QWORD *)a1 + 3);
  if ( v5 > v6 )
    return (char *)std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
                     a1,
                     v5,
                     a3,
                     Src);
  v7 = a1;
  if ( v6 >= 8 )
    v7 = *(char **)a1;
  v8 = 2 * v5;
  *((_QWORD *)a1 + 2) = v5;
  memmove_0(v7, Src, 2 * v5);
  *(_WORD *)&v7[v8] = 0;
  return a1;
}
