/*
 * XREFs of ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x180194F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180194F7C (--1XamlLauncherState@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

XamlLauncherState *__fastcall XamlLauncherState::`vector deleting destructor'(XamlLauncherState *this, char a2)
{
  XamlLauncherState::~XamlLauncherState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x470uLL);
  return this;
}
