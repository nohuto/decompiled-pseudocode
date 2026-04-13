/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@$$QEAV12@@Z @ 0x180009A88
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_N@Z @ 0x18000B310 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B310.c)
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     memmove_0 @ 0x180022B30 (memmove_0.c)
 */

void **__fastcall std::string::assign(void **a1, void **Src)
{
  if ( a1 != Src )
  {
    if ( (unsigned __int64)a1[3] >= 0x10 )
      operator delete(*a1);
    a1[3] = (void *)15;
    a1[2] = 0LL;
    *(_BYTE *)a1 = 0;
    if ( (unsigned __int64)Src[3] >= 0x10 )
    {
      *a1 = *Src;
      *Src = 0LL;
    }
    else if ( Src[2] != (void *)-1LL )
    {
      memmove_0(a1, Src, (size_t)Src[2] + 1);
    }
    a1[2] = Src[2];
    a1[3] = Src[3];
    Src[3] = (void *)15;
    Src[2] = 0LL;
    *(_BYTE *)Src = 0;
  }
  return a1;
}
