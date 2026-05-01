/*
 * XREFs of ?_Parse_extension@filesystem@std@@YA?AV?$basic_string_view@GU?$char_traits@G@std@@@2@V32@@Z @ 0x1802E8AB6
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180644120 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?extension@path@filesystem@std@@QEBA?AV123@XZ @ 0x1806457FC (-extension@path@filesystem@std@@QEBA-AV123@XZ.c)
 * Callees:
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x180090CE4 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 */

const unsigned __int16 **__fastcall std::filesystem::_Parse_extension(
        const unsigned __int16 **a1,
        __int64 a2,
        const unsigned __int16 *a3)
{
  char *v4; // rdi
  const unsigned __int16 *filename; // rax
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // rdx
  const unsigned __int16 *v8; // rax
  __int64 v9; // rdx
  const unsigned __int16 **result; // rax

  v4 = (char *)(*(_QWORD *)a2 + 2LL * *(_QWORD *)(a2 + 8));
  filename = std::filesystem::_Find_filename(*(std::filesystem **)a2, v4, a3);
  v6 = filename;
  v7 = filename;
  if ( filename == (const unsigned __int16 *)v4 )
    goto LABEL_12;
  do
  {
    if ( *v7 == 58 )
      break;
    ++v7;
  }
  while ( v7 != (const unsigned __int16 *)v4 );
  if ( filename == v7 )
    goto LABEL_12;
  v8 = v7 - 1;
  if ( v6 == v7 - 1 )
    goto LABEL_12;
  if ( *v8 != 46 )
  {
    while ( 1 )
    {
      if ( v6 == --v8 )
        goto LABEL_12;
      if ( *v8 == 46 )
        goto LABEL_13;
    }
  }
  if ( v6 == v7 - 2 && *(v7 - 2) == 46 )
LABEL_12:
    v8 = v7;
LABEL_13:
  *a1 = v8;
  v9 = v7 - v8;
  result = a1;
  a1[1] = (const unsigned __int16 *)v9;
  return result;
}
