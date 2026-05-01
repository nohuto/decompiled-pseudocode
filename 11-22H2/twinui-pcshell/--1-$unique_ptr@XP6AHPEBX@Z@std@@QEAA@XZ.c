/*
 * XREFs of ??1?$unique_ptr@XP6AHPEBX@Z@std@@QEAA@XZ @ 0x18070E9F8
 * Callers:
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180279750 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 *     _Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x180279C65 (_Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_--_1_--dtor$2.c)
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x180716AB0 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     _Util::FileMappingHelpers::ReadBufferFromSharedMemory_::_1_::dtor$6 @ 0x180716FB7 (_Util--FileMappingHelpers--ReadBufferFromSharedMemory_--_1_--dtor$6.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<void,int (*)(void const *)>::~unique_ptr<void,int (*)(void const *)>(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))a1)();
  return result;
}
