/*
 * XREFs of ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC
 * Callers:
 *     ??$?_0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAAAEAV012@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x180582968 (--$-_0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAAAEAV012@AE.c)
 *     _lambda_fd4539b3655cc22a40f9c1e0d2159299_::operator() @ 0x180584A60 (_lambda_fd4539b3655cc22a40f9c1e0d2159299_--operator().c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x180585B70 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180587748 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180126B8C (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180576C2C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z @ 0x180576D10 (-_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180576D3C (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180587C48 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

std::filesystem *__fastcall std::filesystem::path::operator/=(std::filesystem *Src, std::filesystem *this)
{
  std::filesystem *v3; // rcx
  std::filesystem *v4; // rbx
  std::filesystem *v5; // rcx
  const unsigned __int16 *v6; // r8
  char *v7; // r9
  std::filesystem *v8; // r11
  std::filesystem *v9; // r13
  char *v10; // rsi
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // rax
  __int64 v13; // r11
  __int64 v14; // rbp
  char *v15; // r15
  __int64 v16; // r14
  int v17; // eax
  const unsigned __int16 *root_name_end; // rax
  const unsigned __int16 *v19; // rcx
  const unsigned __int16 *v21; // [rsp+68h] [rbp+10h]
  const unsigned __int16 *v22; // [rsp+70h] [rbp+18h]
  const unsigned __int16 *v23; // [rsp+78h] [rbp+20h]

  v3 = this;
  v4 = this;
  if ( *((_QWORD *)this + 3) >= 8uLL )
    v3 = *(std::filesystem **)this;
  v21 = (const unsigned __int16 *)*((_QWORD *)this + 2);
  if ( !std::filesystem::_Has_drive_letter_prefix(v3, (char *)v3 + 2 * (_QWORD)v21, v21) )
  {
    root_name_end = std::filesystem::_Find_root_name_end(v5, v7, v6);
    if ( v19 == root_name_end )
      goto LABEL_7;
    v6 = v21;
LABEL_20:
    if ( Src == v4 )
      return Src;
    if ( *((_QWORD *)v4 + 3) >= 8uLL )
      v4 = *(std::filesystem **)v4;
    goto LABEL_17;
  }
  if ( 2 * (__int64)v21 >= 6 && (*((_WORD *)v5 + 2) == 92 || *((_WORD *)v5 + 2) == 47) )
    goto LABEL_20;
LABEL_7:
  v8 = Src;
  if ( *((_QWORD *)Src + 3) >= 8uLL )
    v8 = *(std::filesystem **)Src;
  v9 = v4;
  v22 = (const unsigned __int16 *)((char *)v8 + 2 * *((_QWORD *)Src + 2));
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v9 = *(std::filesystem **)v4;
  v10 = (char *)v9 + 2 * (_QWORD)v21;
  v23 = std::filesystem::_Find_root_name_end(v8, (char *)v8 + 2 * *((_QWORD *)Src + 2), v6);
  v12 = std::filesystem::_Find_root_name_end(v9, v10, v11);
  v14 = (__int64)v23 - v13;
  v15 = (char *)v12;
  v16 = ((__int64)v23 - v13) >> 1;
  if ( v9 == (std::filesystem *)v12
    || (LOBYTE(v17) = std::_Traits_compare<std::char_traits<unsigned short>>(
                        v13,
                        v14 >> 1,
                        (__int64)v9,
                        ((char *)v12 - (char *)v9) >> 1),
        !v17) )
  {
    if ( v15 != v10 && (*(_WORD *)v15 == 92 || *(_WORD *)v15 == 47) )
    {
      std::wstring::erase(Src, v14 >> 1);
LABEL_33:
      std::wstring::append(Src, v15, (v10 - v15) >> 1);
      return Src;
    }
    if ( v23 == v22 )
    {
      if ( v16 < 3 )
        goto LABEL_33;
    }
    else if ( *(v22 - 1) == 92 || *(v22 - 1) == 47 )
    {
      goto LABEL_33;
    }
    std::wstring::push_back(Src, 92LL);
    goto LABEL_33;
  }
  if ( Src != v4 )
  {
    if ( *((_QWORD *)v4 + 3) >= 8uLL )
      v4 = *(std::filesystem **)v4;
    v6 = v21;
LABEL_17:
    std::wstring::assign((char *)Src, v4, (unsigned __int64)v6);
  }
  return Src;
}
