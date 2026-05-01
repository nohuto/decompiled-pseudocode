/*
 * XREFs of ?ArManagerAllocateState@@YAJPEAU_ACTIVITY_RESTARTER@@PEAU_TP_CALLBACK_ENVIRON_V3@@@Z @ 0x18004B0F8
 * Callers:
 *     ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18004B164 (-ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArManagerAllocateState(struct _ACTIVITY_RESTARTER *a1, struct _TP_CALLBACK_ENVIRON_V3 *a2)
{
  __int64 result; // rax

  result = HamConnectToServer(ArHamCallback, (char *)a1 + 80);
  if ( (int)result >= 0 )
  {
    result = TpAllocWork((char *)a1 + 64, ArCsStateChangeCallback, a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
