/*
 * XREFs of ?_Buy_nonzero@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1806888B0
 * Callers:
 *     ??0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@AEBW4SnapAssistUsage@23456@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@6@@Z @ 0x1806887F8 (--0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x18076F9B0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180093BA4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

char *__fastcall std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Buy_nonzero(
        _QWORD *a1,
        unsigned __int64 a2)
{
  size_t size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  size_of = std::_Get_size_of_n<4>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[4 * a2];
  a1[2] = result;
  return result;
}
