/*
 * XREFs of ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18009D640
 * Callers:
 *     ??$?0$0IA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IA@G@Z @ 0x18008FB10 (--$-0$0IA@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IA@G@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180186BAC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1803E5A3C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ??$?0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z @ 0x18040B97C (--$-0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1804279F0 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x1804407E0 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x1804761FC (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x180547A78 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18039E804 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HStringReference::AddOne(unsigned int a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  result = a1 + 1;
  if ( (unsigned int)result < a1 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    JUMPOUT(0x1802F4C12LL);
  }
  return result;
}
