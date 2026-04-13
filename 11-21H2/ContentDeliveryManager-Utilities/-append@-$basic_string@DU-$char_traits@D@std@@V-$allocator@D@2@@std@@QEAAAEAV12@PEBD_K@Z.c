/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18007B900
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18007C544 (-to_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 * Callees:
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180047B44 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18007B7FC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

char *__fastcall std::string::append(_QWORD *Src, char *a2, size_t Size)
{
  _QWORD *v5; // rbx
  char *v6; // rax
  _BYTE *v7; // rax
  size_t v9; // r8
  size_t v10; // rdi
  char *v11; // rcx
  _BYTE *v12; // rax
  _BYTE *v13; // rax

  v5 = Src;
  if ( !a2 )
    goto LABEL_13;
  v6 = Src[3] < 0x10uLL ? (char *)Src : (char *)*Src;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  if ( (char *)Src + v5[2] <= a2 )
  {
LABEL_13:
    v9 = v5[2];
    if ( ~v9 > Size )
    {
      if ( !Size )
        return (char *)v5;
      v10 = v9 + Size;
      if ( v9 + Size != -1LL )
      {
        if ( v5[3] >= v10 )
        {
          if ( !v10 )
          {
            if ( v5[3] < 0x10uLL )
              v12 = v5;
            else
              v12 = (_BYTE *)*v5;
            v5[2] = 0LL;
            *v12 = 0;
            return (char *)v5;
          }
          goto LABEL_18;
        }
        std::string::_Copy((const void **)v5, v9 + Size, v9);
        if ( v10 )
        {
LABEL_18:
          if ( v5[3] < 0x10uLL )
            v11 = (char *)v5;
          else
            v11 = (char *)*v5;
          memcpy_0(&v11[v5[2]], a2, Size);
          if ( v5[3] < 0x10uLL )
            v13 = v5;
          else
            v13 = (_BYTE *)*v5;
          v5[2] = v10;
          v13[v10] = 0;
        }
        return (char *)v5;
      }
    }
    std::wstring::_Xlen();
  }
  if ( v5[3] < 0x10uLL )
    v7 = v5;
  else
    v7 = (_BYTE *)*v5;
  return std::string::append((char *)v5, v5, a2 - v7, Size);
}
