/*
 * XREFs of ??_GHotKeyCallback@@UEAAPEAXI@Z @ 0x14000CA10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140006020 (--3@YAXPEAX_K@Z.c)
 *     ??1HotKeyCallback@@UEAA@XZ @ 0x14000C95C (--1HotKeyCallback@@UEAA@XZ.c)
 */

HotKeyCallback *__fastcall HotKeyCallback::`scalar deleting destructor'(HotKeyCallback *this, char a2)
{
  HotKeyCallback::~HotKeyCallback(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
