/*
 * XREFs of _dynamic_initializer_for__CPointerDeviceCache::s_deviceCache__ @ 0x180001370
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@QEAA@XZ @ 0x1800F0614 (--0-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEVICE_INFO@@@std@@@3@@st.c)
 */

int dynamic_initializer_for__CPointerDeviceCache::s_deviceCache__()
{
  std::map<void *,DEVICE_INFO>::map<void *,DEVICE_INFO>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__);
}
