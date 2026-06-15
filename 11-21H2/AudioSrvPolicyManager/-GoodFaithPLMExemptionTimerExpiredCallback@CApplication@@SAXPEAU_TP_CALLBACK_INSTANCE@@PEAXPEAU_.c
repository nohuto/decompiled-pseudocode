/*
 * XREFs of ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180017C30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

void __fastcall CApplication::GoodFaithPLMExemptionTimerExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        void *a2,
        struct _TP_TIMER *a3)
{
  int v3; // eax
  _QWORD v4[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4[1] = a2;
  v4[0] = off_180048068;
  v4[7] = v4;
  v3 = QueueGenericWorkItem(v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x51F,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v3);
}
