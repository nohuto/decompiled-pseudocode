/*
 * XREFs of ??RStringHash@XWinRT@@QEBAJPEAUHSTRING__@@PEAI@Z @ 0x18061C0CC
 * Callers:
 *     ?GetNode@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x18061E05C (-GetNode@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHas.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::StringHash::operator()(__int64 a1, HSTRING a2, int *a3)
{
  PCWSTR StringRawBuffer; // rax
  int v5; // r9d
  unsigned __int64 i; // rdx
  int v7; // ecx
  __int64 length; // [rsp+30h] [rbp+8h] BYREF

  length = a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, (UINT32 *)&length);
  v5 = -2128831035;
  for ( i = 0LL; i < 2 * (unsigned __int64)(unsigned int)length; v5 = 16777619 * (v5 ^ v7) )
    v7 = *((unsigned __int8 *)StringRawBuffer + i++);
  *a3 = v5;
  return 0LL;
}
