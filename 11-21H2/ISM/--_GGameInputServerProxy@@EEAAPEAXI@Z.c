/*
 * XREFs of ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x1800FC1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x1800FC01C (--1GameInputServerProxy@@EEAA@XZ.c)
 */

GameInputServerProxy *__fastcall GameInputServerProxy::`scalar deleting destructor'(
        GameInputServerProxy *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  GameInputServerProxy::~GameInputServerProxy(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
