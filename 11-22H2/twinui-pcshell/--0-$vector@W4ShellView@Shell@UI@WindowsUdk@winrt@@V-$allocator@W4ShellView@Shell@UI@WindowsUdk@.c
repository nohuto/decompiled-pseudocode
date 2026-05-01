/*
 * XREFs of ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180093ACC
 * Callers:
 *     ??0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA@AEBUShellAnimationCoordinator@23456@@Z @ 0x1800935D8 (--0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ??$?0AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@PEAX@std@@@1@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@1@@Z @ 0x180093A3C (--$-0AEBU-$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V-$vector@W4ShellVie.c)
 * Callees:
 *     ?_Buy_nonzero@?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180093B50 (-_Buy_nonzero@-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@UI@.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

__int64 *__fastcall std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>(
        __int64 *a1,
        __int64 a2)
{
  signed __int64 v4; // rbx
  __int64 v5; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2 )
  {
    std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::_Buy_nonzero();
    v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v5 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v4);
    a1[1] = v5 + 4 * (v4 >> 2);
  }
  return a1;
}
