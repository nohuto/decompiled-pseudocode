/*
 * XREFs of ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180090B34
 * Callers:
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x180090AC8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ??$?_0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAAAEAV012@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x1806411E8 (--$-_0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAAAEAV012@AE.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x1806429B8 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x180643870 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180645480 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 * Callees:
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180090C68 (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z @ 0x180090CB8 (-_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180090DA0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x1802D21B6 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x1803DD0F4 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 */

std::filesystem *__fastcall std::filesystem::path::operator/=(std::filesystem *Src, std::filesystem *a2)
{
  std::filesystem *v3; // rcx
  std::filesystem *v4; // rbx
  std::filesystem *v5; // rcx
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // r9
  const unsigned __int16 *v8; // rax
  const unsigned __int16 *v9; // rcx
  std::filesystem *v10; // r11
  std::filesystem *v11; // r13
  const unsigned __int16 *v12; // rsi
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // rax
  __int64 v15; // r11
  __int64 v16; // rbp
  const unsigned __int16 *v17; // r15
  __int64 v18; // r14
  const unsigned __int16 *v20; // [rsp+68h] [rbp+10h]
  const unsigned __int16 *v21; // [rsp+70h] [rbp+18h]
  const unsigned __int16 *root_name_end; // [rsp+78h] [rbp+20h]

  v3 = a2;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v3 = *(std::filesystem **)a2;
  v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 2);
  if ( std::filesystem::_Has_drive_letter_prefix(v3, (const unsigned __int16 *const)v3 + (_QWORD)v20, v20) )
  {
    if ( 2 * (__int64)v20 < 6 || *((_WORD *)v5 + 2) != 92 && *((_WORD *)v5 + 2) != 47 )
    {
LABEL_5:
      v10 = Src;
      if ( *((_QWORD *)Src + 3) >= 8uLL )
        v10 = *(std::filesystem **)Src;
      v11 = v4;
      v21 = (const unsigned __int16 *)((char *)v10 + 2 * *((_QWORD *)Src + 2));
      if ( *((_QWORD *)v4 + 3) >= 8uLL )
        v11 = *(std::filesystem **)v4;
      v12 = (const unsigned __int16 *)((char *)v11 + 2 * (_QWORD)v20);
      root_name_end = std::filesystem::_Find_root_name_end(
                        v10,
                        (const unsigned __int16 *const)v10 + *((_QWORD *)Src + 2),
                        v6);
      v14 = std::filesystem::_Find_root_name_end(v11, v12, v13);
      v16 = (__int64)root_name_end - v15;
      v17 = v14;
      v18 = ((__int64)root_name_end - v15) >> 1;
      if ( v11 != (std::filesystem *)v14
        && (unsigned int)std::_Traits_compare<std::char_traits<unsigned short>>(
                           v15,
                           v16 >> 1,
                           v11,
                           ((char *)v14 - (char *)v11) >> 1) )
      {
        if ( Src != v4 )
        {
          if ( *((_QWORD *)v4 + 3) >= 8uLL )
            v4 = *(std::filesystem **)v4;
LABEL_32:
          std::wstring::assign(Src, v4);
          return Src;
        }
        return Src;
      }
      if ( v17 != v12 && (*v17 == 92 || *v17 == 47) )
      {
        std::wstring::erase(Src, v16 >> 1);
      }
      else
      {
        if ( root_name_end == v21 )
        {
          if ( v18 < 3 )
            goto LABEL_17;
        }
        else if ( *(v21 - 1) == 92 || *(v21 - 1) == 47 )
        {
          goto LABEL_17;
        }
        std::wstring::push_back(Src, 92LL);
      }
LABEL_17:
      std::wstring::append(Src);
      return Src;
    }
  }
  else
  {
    v8 = std::filesystem::_Find_root_name_end(v5, v7, v6);
    if ( v9 == v8 )
      goto LABEL_5;
  }
  if ( Src != v4 )
  {
    if ( *((_QWORD *)v4 + 3) >= 8uLL )
      v4 = *(std::filesystem **)v4;
    goto LABEL_32;
  }
  return Src;
}
