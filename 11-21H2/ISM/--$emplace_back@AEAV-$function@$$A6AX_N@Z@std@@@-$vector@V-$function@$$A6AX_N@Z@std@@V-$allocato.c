/*
 * XREFs of ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x1800906D8
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180090964 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ??0?$function@$$A6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800907D4 (--0-$function@$$A6AXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$alloca.c)
 */

char *__fastcall std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
        __int64 *a1,
        __int64 a2)
{
  char *result; // rax

  if ( a1[1] == a1[2] )
    return std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(a1, a1[1], a2);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    a1[1],
    a2);
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 64);
  return result;
}
