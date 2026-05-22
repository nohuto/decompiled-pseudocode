/*
 * XREFs of ??_GShellGesturesProcessor@@UEAAPEAXI@Z @ 0x18019A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
ShellGesturesProcessor *__fastcall ShellGesturesProcessor::`scalar deleting destructor'(
        ShellGesturesProcessor *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release((RefCountedObject *)(v4 + 8));
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
