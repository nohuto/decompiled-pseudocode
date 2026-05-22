/*
 * XREFs of ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA?A_TAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x1800B98C8
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B99FC (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x18003F524 (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( a1[1] == a1[2] )
    return std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(a1, a1[1], a2);
  std::function<void (bool)>::function<void (bool)>(a1[1], a2);
  result = a1[1];
  a1[1] = result + 64;
  return result;
}
