/*
 * XREFs of ??0InputInfoValidator@@QEAA@XZ @ 0x1801C2744
 * Callers:
 *     ??$make_unique@VInputInfoValidator@@$$V$0A@@std@@YA?AV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@0@XZ @ 0x1800F6958 (--$make_unique@VInputInfoValidator@@$$V$0A@@std@@YA-AV-$unique_ptr@VInputInfoValidator@@U-$defau.c)
 *     ?Initialize@TouchProcessor@@IEAAJXZ @ 0x1801F8028 (-Initialize@TouchProcessor@@IEAAJXZ.c)
 * Callees:
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18016A4C0 (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
InputInfoValidator *__fastcall InputInfoValidator::InputInfoValidator(InputInfoValidator *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &InputInfoValidator::`vftable';
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>((__int64)this + 16);
  return this;
}
