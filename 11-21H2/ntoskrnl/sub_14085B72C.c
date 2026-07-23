/*
 * XREFs of sub_14085B72C @ 0x14085B72C
 * Callers:
 *     sub_14085B800 @ 0x14085B800 (sub_14085B800.c)
 * Callees:
 *     sub_14085BA10 @ 0x14085BA10 (sub_14085BA10.c)
 */

__int64 sub_14085B72C()
{
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF
  int v2; // [rsp+50h] [rbp-10h]
  int v3; // [rsp+54h] [rbp-Ch]

  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v3 = 0;
  Info.Name = (PCUNICODE_STRING)L"24";
  Info.CounterCount = 6;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)qword_140037328;
  Info.Callback = (PPCW_CALLBACK)sub_140A36BE0;
  Info.CallbackContext = (PVOID)1;
  Info.Version = 512;
  v2 = 1;
  sub_14085BA10(&qword_140D00A50, &Info);
  *(&Info.Version + 1) = 0;
  *(&Info.CounterCount + 1) = 0;
  v3 = 0;
  Info.Name = (PCUNICODE_STRING)L"BD";
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)qword_140037300;
  Info.CounterCount = 5;
  Info.Callback = (PPCW_CALLBACK)sub_140A36BE0;
  Info.CallbackContext = (PVOID)2;
  Info.Version = 512;
  v2 = 1;
  return sub_14085BA10(&Registration, &Info);
}
