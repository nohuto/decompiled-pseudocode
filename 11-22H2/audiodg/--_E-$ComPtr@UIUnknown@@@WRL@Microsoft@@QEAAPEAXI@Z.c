/*
 * XREFs of ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x140037E2C
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140004F84 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x14003988C (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x140027E14 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140028128 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(char *a1)
{
  char *v1; // rbx

  v1 = a1 - 8;
  `eh vector destructor iterator'(
    a1,
    8LL,
    *((_QWORD *)a1 - 1),
    (void (*)(void *))Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>);
  operator delete[](v1);
  return v1;
}
