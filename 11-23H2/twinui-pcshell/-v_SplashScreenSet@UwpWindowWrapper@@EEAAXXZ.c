/*
 * XREFs of ?v_SplashScreenSet@UwpWindowWrapper@@EEAAXXZ @ 0x18018DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x18018DE8C (-SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 */

void __fastcall UwpWindowWrapper::v_SplashScreenSet(UwpWindowWrapper *this)
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_OWORD *)((char *)this + 708);
  UwpWindowWrapper::SetImageLocationNoLock((char *)this - 8, &v1);
}
