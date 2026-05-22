/*
 * XREFs of ?_Change_array@?$vector@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@V?$allocator@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@std@@@std@@AEAAXQEAPEAUIInvalidatableDeviceObject@Composition@UI@Windows@@_K1@Z @ 0x18006466C
 * Callers:
 *     ??$_Emplace_reallocate@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@?$vector@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@V?$allocator@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAUIInvalidatableDeviceObject@Composition@UI@Windows@@QEAPEAU2345@$$QEAPEAU2345@@Z @ 0x180064578 (--$_Emplace_reallocate@PEAUIInvalidatableDeviceObject@Composition@UI@Windows@@@-$vector@PEAUIInv.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Composition::IInvalidatableDeviceObject *>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
