/*
 * XREFs of ??_EAppSizeConstraintsCache@@UEAAPEAXI@Z @ 0x18017AF00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

AppSizeConstraintsCache *__fastcall AppSizeConstraintsCache::`vector deleting destructor'(
        AppSizeConstraintsCache *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
