/*
 * XREFs of ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x1801A4F1C
 * Callers:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A4870 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1801A50FC (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800907D4 (--0-$function@$$A6AXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=6
InfoMetadata::InputInfoMetadata *__fastcall InfoMetadata::InputInfoMetadata::InputInfoMetadata(
        InfoMetadata::InputInfoMetadata *this,
        const struct InfoMetadata::InputInfoMetadata *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, char *); // rcx

  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (__int64)this,
    (__int64)a2);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (__int64)this + 64,
    (__int64)a2 + 64);
  *((_QWORD *)this + 23) = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)a2 + 23);
  if ( v4 )
    *((_QWORD *)this + 23) = (**v4)(v4, (char *)this + 128);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (__int64)this + 192,
    (__int64)a2 + 192);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (__int64)this + 256,
    (__int64)a2 + 256);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (__int64)this + 320,
    (__int64)a2 + 320);
  return this;
}
