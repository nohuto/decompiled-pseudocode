/*
 * XREFs of ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002F774
 * Callers:
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x1800241B4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x1800A0BBC (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ??$?0$0IC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IC@_W@Z @ 0x1800AB754 (--$-0$0IC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0IC@_W@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEB_WI@Z @ 0x1800AC678 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEB_WI@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003B094 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HStringReference::AddOne(unsigned int a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  result = a1 + 1;
  if ( (unsigned int)result < a1 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    __debugbreak();
  }
  return result;
}
