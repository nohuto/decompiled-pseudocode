/*
 * XREFs of ??_EAsyncPVPrincipal@@UEAAPEAXI@Z @ 0x18018DDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1AsyncPVPrincipal@@UEAA@XZ @ 0x18018DCCC (--1AsyncPVPrincipal@@UEAA@XZ.c)
 */

AsyncPVPrincipal *__fastcall AsyncPVPrincipal::`vector deleting destructor'(
        AsyncPVPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  AsyncPVPrincipal::~AsyncPVPrincipal(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
