/*
 * XREFs of ??RStringHash@XWinRT@@QEBAJPEAUHSTRING__@@PEAI@Z @ 0x1800363E8
 * Callers:
 *     ?GetNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@5@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@7895@U?$DefaultLifetimeTraits@PEAUICompositionAnimationBase@Composition@UI@Windows@@@7895@U?$HashMapOptions@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@5@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UICompositionAnimationBase@Composition@UI@Windows@@@detail@XWinRT@@@4@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x180036364 (-GetNode@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UICompositionAnimationBase@Composition@UI@W.c)
 *     ?GetNode@?$XHashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@UKeyTraits@?$HashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@6@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@89Foundation@6@U?$DefaultLifetimeTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@89Foundation@6@U?$HashMapOptions@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@6@$0A@$00$0A@@89Foundation@6@@Internal@Collections@Foundation@6@V?$CElementTraits@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@@XWinRT@@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x18018DC2C (-GetNode@-$XHashMap@PEAUHSTRING__@@W4SceneAttributeSemantic@Scenes@Composition@UI@Windows@@UKeyT.c)
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
