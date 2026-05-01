/*
 * XREFs of ??$swap@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@$0A@@std@@YAXAEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18042CF50
 * Callers:
 *     ?Swap@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAAXAEAV12@@Z @ 0x180439184 (-Swap@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18042F230 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall std::swap<Microsoft::WRL::ComPtr<IUnknown>,0>(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( &v5 != a1 )
  {
    v3 = *a1;
    *a1 = 0LL;
    v5 = v3;
  }
  ((void (*)(void))Microsoft::WRL::ComPtr<IUnknown>::operator=)();
  Microsoft::WRL::ComPtr<IUnknown>::operator=(a2, &v5);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
}
