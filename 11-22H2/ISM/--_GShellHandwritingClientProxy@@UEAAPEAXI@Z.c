/*
 * XREFs of ??_GShellHandwritingClientProxy@@UEAAPEAXI@Z @ 0x1800750A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1ShellHandwritingClientProxy@@UEAA@XZ @ 0x180075078 (--1ShellHandwritingClientProxy@@UEAA@XZ.c)
 */

ShellHandwritingClientProxy *__fastcall ShellHandwritingClientProxy::`scalar deleting destructor'(
        ShellHandwritingClientProxy *this,
        char a2)
{
  ShellHandwritingClientProxy::~ShellHandwritingClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
