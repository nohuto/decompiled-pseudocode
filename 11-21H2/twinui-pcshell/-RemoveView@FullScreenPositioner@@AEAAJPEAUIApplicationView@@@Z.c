/*
 * XREFs of ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18017671C
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180075710 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x18031F110 (-ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

__int64 __fastcall FullScreenPositioner::RemoveView(FullScreenPositioner *this, struct IUnknown *a2)
{
  __int64 i; // rbx

  for ( i = (__int64)(*((_QWORD *)this + 32) - *((_QWORD *)this + 31)) >> 3; i; --i )
  {
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(*((_QWORD *)this + 31) + 8 * i - 8), a2) )
    {
      memmove_0(
        (void *)(*((_QWORD *)this + 31) + 8 * i - 8),
        (const void *)(*((_QWORD *)this + 31) + 8 * i),
        *((_QWORD *)this + 32) - (*((_QWORD *)this + 31) + 8 * i));
      *((_QWORD *)this + 32) -= 8LL;
      return 0LL;
    }
  }
  return 0LL;
}
