/*
 * XREFs of ??_EViewEventArgsForWindowingSettings@@UEAAPEAXI@Z @ 0x1803DFCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ViewEventArgsForWindowingSettings@@UEAA@XZ @ 0x1803DF2EC (--1ViewEventArgsForWindowingSettings@@UEAA@XZ.c)
 */

ViewEventArgsForWindowingSettings *__fastcall ViewEventArgsForWindowingSettings::`vector deleting destructor'(
        ViewEventArgsForWindowingSettings *this,
        char a2)
{
  ViewEventArgsForWindowingSettings::~ViewEventArgsForWindowingSettings(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
