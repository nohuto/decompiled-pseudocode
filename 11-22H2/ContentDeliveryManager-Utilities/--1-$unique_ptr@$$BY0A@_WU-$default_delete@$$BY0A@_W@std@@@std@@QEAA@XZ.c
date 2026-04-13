/*
 * XREFs of ??1?$unique_ptr@$$BY0A@_WU?$default_delete@$$BY0A@_W@std@@@std@@QEAA@XZ @ 0x1800D0318
 * Callers:
 *     _CreativeFramework::CommonHelper::StringUtils::StringFormat_::_1_::dtor$0 @ 0x1800DD5E8 (_CreativeFramework--CommonHelper--StringUtils--StringFormat_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<wchar_t [0]>::~unique_ptr<wchar_t [0]>(void **a1)
{
  operator delete[](*a1);
}
