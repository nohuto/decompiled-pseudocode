/*
 * XREFs of ??_GGamepadInterceptionHelper@@UEAAPEAXI@Z @ 0x18006A5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1GamepadInterceptionHelper@@UEAA@XZ @ 0x18006A330 (--1GamepadInterceptionHelper@@UEAA@XZ.c)
 */

GamepadInterceptionHelper *__fastcall GamepadInterceptionHelper::`scalar deleting destructor'(
        GamepadInterceptionHelper *this,
        char a2)
{
  GamepadInterceptionHelper::~GamepadInterceptionHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
