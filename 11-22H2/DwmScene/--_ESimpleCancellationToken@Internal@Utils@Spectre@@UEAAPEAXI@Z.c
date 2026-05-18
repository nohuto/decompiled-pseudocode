/*
 * XREFs of ??_ESimpleCancellationToken@Internal@Utils@Spectre@@UEAAPEAXI@Z @ 0x1800DFFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SimpleCancellationToken@Internal@Utils@Spectre@@UEAA@XZ @ 0x1800DFEEC (--1SimpleCancellationToken@Internal@Utils@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Utils::Internal::SimpleCancellationToken::`vector deleting destructor'(void **this, char a2)
{
  Spectre::Utils::Internal::SimpleCancellationToken::~SimpleCancellationToken(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
