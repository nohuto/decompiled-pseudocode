/*
 * XREFs of ?PmGetDeviceParameterBinaryCallback@@YAJPEAGKPEAXK11@Z @ 0x1C0026850
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C000B740 (memmove.c)
 */

__int64 __fastcall PmGetDeviceParameterBinaryCallback(
        unsigned __int16 *a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6)
{
  unsigned int v7; // ebx
  size_t v8; // rsi
  void *Pool2; // rax
  void *v10; // rdi

  v7 = 0;
  v8 = a4;
  Pool2 = (void *)ExAllocatePool2(66LL, a4, 1112108368LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a3, v8);
    *a5 = v8;
    *a6 = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
