/*
 * XREFs of ?Release@Tag@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x18061FB6C
 * Callers:
 *     ??1?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x18061BBD4 (--1-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation.c)
 *     ??1Iterator@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x18061BE10 (--1Iterator@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collections@F.c)
 *     ??1View@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x18061BEAC (--1View@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Found.c)
 *     ?ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ @ 0x18061C570 (-ChangeVersion@TagManager@SecureVersionTag@XWinRT@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall XWinRT::SecureVersionTag::Tag::Release(XWinRT::SecureVersionTag::Tag *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v1 )
    operator delete(this);
  return v1;
}
