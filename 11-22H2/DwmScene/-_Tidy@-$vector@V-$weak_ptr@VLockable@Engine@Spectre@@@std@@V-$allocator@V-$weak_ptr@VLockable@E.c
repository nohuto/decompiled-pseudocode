/*
 * XREFs of ?_Tidy@?$vector@V?$weak_ptr@VLockable@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VLockable@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x1800277CC
 * Callers:
 *     ??1Lockable@Engine@Spectre@@QEAA@XZ @ 0x180025B30 (--1Lockable@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::vector<std::weak_ptr<Spectre::Engine::Lockable>>::_Tidy(void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      v4 = (std::_Ref_count_base *)*((_QWORD *)v1 + 1);
      if ( v4 )
        std::_Ref_count_base::_Decwref(v4);
      v1 += 16;
    }
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
