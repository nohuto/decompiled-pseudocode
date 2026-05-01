/*
 * XREFs of ??_GStubImmersiveApplication@@UEAAPEAXI@Z @ 0x18050D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

StubImmersiveApplication *__fastcall StubImmersiveApplication::`scalar deleting destructor'(
        StubImmersiveApplication *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    CoTaskMemFree(v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
