/*
 * XREFs of ??_EResultException@wil@@UAEPAXI@Z @ 0x10002EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResultException@wil@@UAE@XZ @ 0x10002F10 (--1ResultException@wil@@UAE@XZ.c)
 */

wil::ResultException *__thiscall wil::ResultException::`vector deleting destructor'(
        wil::ResultException *this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
