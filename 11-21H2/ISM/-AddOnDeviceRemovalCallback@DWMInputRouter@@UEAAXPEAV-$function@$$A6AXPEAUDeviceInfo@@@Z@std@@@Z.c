/*
 * XREFs of ?AddOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800493A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@?$vector@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@V?$allocator@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@2@@std@@QEAAPEAPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@1@QEAPEAV21@AEBQEAV21@@Z @ 0x1800439B0 (--$_Emplace_reallocate@AEBQEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@-$vector@PEAV-$function@.c)
 */

char *__fastcall DWMInputRouter::AddOnDeviceRemovalCallback(__int64 a1, __int64 a2)
{
  char *result; // rax
  _BYTE *v4; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = (char *)(a1 + 632);
  v4 = *(_BYTE **)(a1 + 640);
  if ( v4 == *(_BYTE **)(a1 + 648) )
    return std::vector<std::function<void (DeviceInfo *)> *,std::allocator<std::function<void (DeviceInfo *)> *>>::_Emplace_reallocate<std::function<void (DeviceInfo *)> * const &>(
             (__int64)result,
             v4,
             &v5);
  *(_QWORD *)v4 = a2;
  *(_QWORD *)(a1 + 640) += 8LL;
  return result;
}
