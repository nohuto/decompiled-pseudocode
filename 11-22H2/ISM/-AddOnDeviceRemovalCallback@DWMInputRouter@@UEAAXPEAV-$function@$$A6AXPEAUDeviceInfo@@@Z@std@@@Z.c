/*
 * XREFs of ?AddOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x180055D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@?$vector@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@V?$allocator@PEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@2@@std@@QEAAPEAPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@1@QEAPEAV21@AEBQEAV21@@Z @ 0x180039EB4 (--$_Emplace_reallocate@AEBQEAV-$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@-$vector@PEAV-$function@.c)
 */

char *__fastcall DWMInputRouter::AddOnDeviceRemovalCallback(__int64 a1, char *a2)
{
  char *result; // rax
  _BYTE *v3; // rdx
  char *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  result = a2;
  v3 = *(_BYTE **)(a1 + 648);
  if ( v3 == *(_BYTE **)(a1 + 656) )
    return std::vector<std::function<void (DeviceInfo *)> *,std::allocator<std::function<void (DeviceInfo *)> *>>::_Emplace_reallocate<std::function<void (DeviceInfo *)> * const &>(
             a1 + 640,
             v3,
             &v4);
  *(_QWORD *)v3 = result;
  *(_QWORD *)(a1 + 648) += 8LL;
  return result;
}
