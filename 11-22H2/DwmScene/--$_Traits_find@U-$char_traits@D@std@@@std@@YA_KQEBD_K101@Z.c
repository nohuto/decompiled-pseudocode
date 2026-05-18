/*
 * XREFs of ??$_Traits_find@U?$char_traits@D@std@@@std@@YA_KQEBD_K101@Z @ 0x18001EDD0
 * Callers:
 *     ?find@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_KAEBV12@_K@Z @ 0x18001F850 (-find@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_KAEBV12@_K@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     memchr_0 @ 0x1800E38EC (memchr_0.c)
 */

__int64 __fastcall std::_Traits_find<std::char_traits<char>>(char *Buf, size_t a2, __int64 a3, char *a4, size_t Size)
{
  int v8; // r15d
  char *v9; // rbx
  char *v10; // r14
  char *v11; // rax
  char *v12; // rbx

  if ( Size <= a2 )
  {
    if ( !Size )
      return 0LL;
    v8 = *a4;
    v9 = Buf;
    v10 = &Buf[a2 - Size];
    while ( 1 )
    {
      v11 = (char *)memchr_0(v9, v8, v10 + 1 - v9);
      v12 = v11;
      if ( !v11 )
        break;
      if ( !memcmp_0(v11, a4, Size) )
        return v12 - Buf;
      v9 = v12 + 1;
    }
  }
  return -1LL;
}
