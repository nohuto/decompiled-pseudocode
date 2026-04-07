/*
 * XREFs of ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x1800189E0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18001BC28 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180051FC4 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWriteText::SetText(CDWriteText *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // r11
  __int64 v4; // rbx
  char **v5; // rdi
  __int64 v6; // rax
  char *v7; // rcx

  v2 = a2;
  if ( a2 )
  {
    v4 = -1LL;
    v5 = (char **)((char *)this + 24);
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = (char *)this + 24;
    if ( (unsigned __int64)v5[3] >= 8 )
      v7 = *v5;
    if ( v5[2] != (char *)v6 || (unsigned int)std::_WChar_traits<unsigned short>::compare(v7) )
    {
      do
        ++v4;
      while ( v2[v4] );
      std::wstring::assign(v5);
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 34) + 24LL))((char *)this - 272, 4096LL);
    }
  }
  return 0LL;
}
