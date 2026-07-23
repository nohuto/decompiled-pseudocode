/*
 * XREFs of sub_14085B800 @ 0x14085B800
 * Callers:
 *     <none>
 * Callees:
 *     PsIsDiskCountersEnabled @ 0x1403D9790 (PsIsDiskCountersEnabled.c)
 *     sub_14085B72C @ 0x14085B72C (sub_14085B72C.c)
 *     sub_14085BA10 @ 0x14085BA10 (sub_14085BA10.c)
 *     PcwUnregister @ 0x140A02AC0 (PcwUnregister.c)
 */

void __fastcall sub_14085B800(int a1)
{
  int v1; // ecx
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF
  __int64 v3; // [rsp+50h] [rbp-10h]

  *(&Info.Version + 1) = 0;
  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      if ( Registration )
      {
        PcwUnregister(Registration);
        Registration = 0LL;
      }
      if ( qword_140D00A50 )
      {
        PcwUnregister(qword_140D00A50);
        qword_140D00A50 = 0LL;
      }
      if ( qword_140D00A68 )
      {
        PcwUnregister(qword_140D00A68);
        qword_140D00A68 = 0LL;
      }
      if ( qword_140D00A40 )
      {
        PcwUnregister(qword_140D00A40);
        qword_140D00A40 = 0LL;
      }
      if ( qword_140D00A60 )
      {
        PcwUnregister(qword_140D00A60);
        qword_140D00A60 = 0LL;
      }
      if ( qword_140D00A38 )
      {
        PcwUnregister(qword_140D00A38);
        qword_140D00A38 = 0LL;
      }
      if ( qword_140D00A48 )
      {
        PcwUnregister(qword_140D00A48);
        qword_140D00A48 = 0LL;
      }
      if ( qword_140D00A30 )
      {
        PcwUnregister(qword_140D00A30);
        qword_140D00A30 = 0LL;
      }
    }
  }
  else
  {
    sub_14085B72C();
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (PCUNICODE_STRING)&qword_140009A10;
    *(_QWORD *)&Info.CounterCount = 42LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)qword_1400375A0;
    Info.Callback = (PPCW_CALLBACK)sub_140960D50;
    v3 = 0LL;
    Info.CallbackContext = 0LL;
    sub_14085BA10(&qword_140D00A68, &Info);
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (PCUNICODE_STRING)L"&(";
    *(_QWORD *)&Info.CounterCount = 42LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)qword_1400375A0;
    v3 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_140960E60;
    Info.CallbackContext = 0LL;
    sub_14085BA10(&qword_140D00A40, &Info);
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (PCUNICODE_STRING)L"*,";
    *(_QWORD *)&Info.CounterCount = 35LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)qword_140037480;
    v3 = 1LL;
    Info.Callback = (PPCW_CALLBACK)sub_1406D0CB0;
    Info.CallbackContext = 0LL;
    sub_14085BA10(&qword_140D00A60, &Info);
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (PCUNICODE_STRING)&qword_1400099E0;
    *(_QWORD *)&Info.CounterCount = 30LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)qword_140037390;
    v3 = 1LL;
    Info.Callback = (PPCW_CALLBACK)sub_1409F5F90;
    Info.CallbackContext = 0LL;
    sub_14085BA10(&qword_140D00A38, &Info);
    if ( PsIsDiskCountersEnabled() )
    {
      *(_QWORD *)&Info.Version = 512LL;
      Info.Name = (PCUNICODE_STRING)L"02";
      *(_QWORD *)&Info.CounterCount = 2LL;
      Info.Counters = (PPCW_COUNTER_DESCRIPTOR)qword_140037378;
      v3 = 0LL;
      Info.Callback = (PPCW_CALLBACK)sub_14092EC30;
      Info.CallbackContext = 0LL;
      sub_14085BA10(&qword_140D00A48, &Info);
    }
    *(_QWORD *)&Info.Version = 512LL;
    Info.Name = (PCUNICODE_STRING)L"02";
    *(_QWORD *)&Info.CounterCount = 4LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)qword_140037358;
    v3 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_140990360;
    Info.CallbackContext = 0LL;
    sub_14085BA10(&qword_140D00A30, &Info);
  }
}
