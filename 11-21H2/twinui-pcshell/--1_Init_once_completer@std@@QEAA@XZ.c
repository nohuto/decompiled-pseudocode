/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x18006337C
 * Callers:
 *     ??$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_c676a23b08ff5d86622b6a68e8510924_@@@Z @ 0x18003A3F0 (--$call_once@V_lambda_c676a23b08ff5d86622b6a68e8510924_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 *     std::call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c___ @ 0x1800632D8 (std--call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c___.c)
 *     _std::call_once__lambda_c676a23b08ff5d86622b6a68e8510924____::_1_::dtor$0 @ 0x1802163E7 (_std--call_once__lambda_c676a23b08ff5d86622b6a68e8510924____--_1_--dtor$0.c)
 *     _std::call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c____::_1_::dtor$0 @ 0x180216EBA (_std--call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c____--_1_--dtor$0.c)
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x1804217F4 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSourc_ea_1804217F4.c)
 *     _XamlExplorerHost::SwitchItemDataSource::[WindowsInternal::ComposableShell::Desktop::IDesktopAppHost]::get_::_1_::dtor$3 @ 0x1804218EB (_XamlExplorerHost--SwitchItemDataSource--[WindowsInternal--ComposableShell--Desktop_ea_1804218EB.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    abort();
}
