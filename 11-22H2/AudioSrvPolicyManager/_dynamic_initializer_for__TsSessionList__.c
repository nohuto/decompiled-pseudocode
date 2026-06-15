/*
 * XREFs of _dynamic_initializer_for__TsSessionList__ @ 0x180002240
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unordered_map@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180014F48 (--0-$unordered_map@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@U-$hash@.c)
 */

int dynamic_initializer_for__TsSessionList__()
{
  std::unordered_map<unsigned long,std::unique_ptr<TSSession>>::unordered_map<unsigned long,std::unique_ptr<TSSession>>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__TsSessionList__);
}
