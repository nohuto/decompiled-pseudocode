/*
 * XREFs of ??_ECommandListState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009FA40
 * Callers:
 *     ??_ECommandListState@Engine@Spectre@@WBCBI@EAAPEAXI@Z @ 0x18009F900 (--_ECommandListState@Engine@Spectre@@WBCBI@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WCECI@EAAPEAXI@Z @ 0x18009F920 (--_ECommandListState@Engine@Spectre@@WCECI@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WCFOI@EAAPEAXI@Z @ 0x18009F940 (--_ECommandListState@Engine@Spectre@@WCFOI@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WCGDA@EAAPEAXI@Z @ 0x18009F960 (--_ECommandListState@Engine@Spectre@@WCGDA@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WCGHI@EAAPEAXI@Z @ 0x18009F980 (--_ECommandListState@Engine@Spectre@@WCGHI@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WDIII@EAAPEAXI@Z @ 0x18009F9A0 (--_ECommandListState@Engine@Spectre@@WDIII@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WDIMI@EAAPEAXI@Z @ 0x18009F9C0 (--_ECommandListState@Engine@Spectre@@WDIMI@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WDJCA@EAAPEAXI@Z @ 0x18009F9E0 (--_ECommandListState@Engine@Spectre@@WDJCA@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WEA@EAAPEAXI@Z @ 0x18009FA00 (--_ECommandListState@Engine@Spectre@@WEA@EAAPEAXI@Z.c)
 *     ??_ECommandListState@Engine@Spectre@@WEII@EAAPEAXI@Z @ 0x18009FA20 (--_ECommandListState@Engine@Spectre@@WEII@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::CommandListState *__fastcall Spectre::Engine::CommandListState::`vector deleting destructor'(
        Spectre::Engine::CommandListState *this,
        char a2)
{
  Spectre::Engine::CommandListState::~CommandListState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
