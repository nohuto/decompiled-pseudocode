/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180094A94
 * Callers:
 *     ??$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@$$QEAV?$shared_ptr@VInputAppViewCoodinatorHandler@@@1@@Z @ 0x180094B70 (--$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@VInputAppViewCoodinato.c)
 *     ??$_Try_emplace@W4ShellView@Shell@UI@WindowsUdk@winrt@@$$V@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18050AB48 (--$_Try_emplace@W4ShellView@Shell@UI@WindowsUdk@winrt@@$$V@-$map@W4ShellView@Shell@UI@WindowsUdk.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@2@@Z @ 0x180082BE8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801F0340 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>>::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx

  ++a1[1];
  v3 = a3;
  v4 = (_QWORD *)*a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 == v4 )
  {
    *v4 = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
    return v3;
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    *v6 = a3;
    if ( v6 == (_QWORD *)*v4 )
      *v4 = a3;
  }
  else
  {
    v6[2] = a3;
    if ( v6 == (_QWORD *)v4[2] )
      v4[2] = a3;
  }
  v7 = *(_QWORD *)(a3 + 8);
  v8 = a3;
  while ( !*(_BYTE *)(v7 + 24) )
  {
    v10 = *(_QWORD *)(v8 + 8);
    v11 = *(__int64 **)(v10 + 8);
    v12 = *v11;
    if ( v10 == *v11 )
    {
      v12 = v11[2];
      if ( !*(_BYTE *)(v12 + 24) )
      {
LABEL_11:
        *(_BYTE *)(v10 + 24) = 1;
        *(_BYTE *)(v12 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
        v8 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
        goto LABEL_12;
      }
      if ( v8 == *(_QWORD *)(v10 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>>::_Lrotate(
          (__int64)a1,
          *(_QWORD *)(v8 + 8));
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL),
        a3,
        v3);
    }
    else
    {
      if ( !*(_BYTE *)(v12 + 24) )
        goto LABEL_11;
      if ( v8 == *(_QWORD *)v10 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          a1,
          *(_QWORD *)(v8 + 8),
          a3,
          v3);
      *(_BYTE *)(*(_QWORD *)(v8 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>>::_Lrotate(
        (__int64)a1,
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL));
    }
LABEL_12:
    v7 = *(_QWORD *)(v8 + 8);
  }
  *(_BYTE *)(v4[1] + 24LL) = 1;
  return v3;
}
