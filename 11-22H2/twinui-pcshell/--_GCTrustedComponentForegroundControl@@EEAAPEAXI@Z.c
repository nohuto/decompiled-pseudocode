/*
 * XREFs of ??_GCTrustedComponentForegroundControl@@EEAAPEAXI@Z @ 0x18018A910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTrustedComponentForegroundControl@@EEAA@XZ @ 0x18018A94C (--1CTrustedComponentForegroundControl@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CTrustedComponentForegroundControl *__fastcall CTrustedComponentForegroundControl::`scalar deleting destructor'(
        CTrustedComponentForegroundControl *this,
        char a2)
{
  CTrustedComponentForegroundControl::~CTrustedComponentForegroundControl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
