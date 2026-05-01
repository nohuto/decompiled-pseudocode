/*
 * XREFs of ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x180018834
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUHSTRING__@@IPEAU6@PEAIPEAE@Z @ 0x180016EFC (-IndexOfInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Co.c)
 *     ?HasKey@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180036F30 (-HasKey@ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@.c)
 *     ?Lookup@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z @ 0x180037030 (-Lookup@ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@.c)
 *     ?GetNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x180037D4C (-GetNode@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-.c)
 * Callees:
 *     memcmp_0 @ 0x18004CE64 (memcmp_0.c)
 */

__int64 __fastcall XWinRT::StringEquals::operator()(__int64 a1, HSTRING a2, HSTRING a3, bool *a4)
{
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v7; // rax
  bool v8; // cl
  UINT32 v10[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 length; // [rsp+40h] [rbp+8h] BYREF

  length = a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, v10);
  v7 = WindowsGetStringRawBuffer(a3, (UINT32 *)&length);
  v8 = v10[0] == (_DWORD)length && memcmp_0(StringRawBuffer, v7, 2LL * (unsigned int)length) == 0;
  *a4 = v8;
  return 0LL;
}
