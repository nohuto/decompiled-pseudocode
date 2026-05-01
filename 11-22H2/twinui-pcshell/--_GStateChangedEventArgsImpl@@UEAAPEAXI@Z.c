/*
 * XREFs of ??_GStateChangedEventArgsImpl@@UEAAPEAXI@Z @ 0x18061C3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1StateChangedEventArgsImpl@@UEAA@XZ @ 0x180447340 (--1StateChangedEventArgsImpl@@UEAA@XZ.c)
 */

HSTRING *__fastcall StateChangedEventArgsImpl::`scalar deleting destructor'(HSTRING *this, char a2)
{
  StateChangedEventArgsImpl::~StateChangedEventArgsImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
