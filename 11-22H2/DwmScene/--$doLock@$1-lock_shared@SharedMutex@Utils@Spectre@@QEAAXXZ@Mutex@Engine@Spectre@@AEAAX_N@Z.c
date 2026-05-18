/*
 * XREFs of ??$doLock@$1?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029B5C
 * Callers:
 *     ?lock_shared@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4FC (-lock_shared@Mutex@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$emplace_back@PEAVMutex@Engine@Spectre@@AEA_N@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@QEAA?A_T$$QEAPEAVMutex@Engine@Spectre@@AEA_N@Z @ 0x180029DBC (--$emplace_back@PEAVMutex@Engine@Spectre@@AEA_N@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@st.c)
 *     ??0EngineAccessDeniedException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180029E4C (--0EngineAccessDeniedException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 *     ?GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@XZ @ 0x18002A13C (-GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV-$vector@U-$pair@PEBVMutex@Engine@S.c)
 *     ?this_thread_owns@Mutex@Engine@Spectre@@QEBA_NXZ @ 0x18002A538 (-this_thread_owns@Mutex@Engine@Spectre@@QEBA_NXZ.c)
 *     ?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0E04 (-lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::Mutex::doLock<&public: void Spectre::Utils::SharedMutex::lock_shared(void)>(
        Spectre::Utils::SharedMutex *this)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 MutexesLockedByCurrentThread; // rax
  _BYTE v6[8]; // [rsp+30h] [rbp-98h] BYREF
  Spectre::Utils::SharedMutex *v7; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v6[0] = 0;
  if ( Spectre::Engine::Mutex::this_thread_owns(this) )
  {
    std::string::string(
      v9,
      (__int64)"Mutex::doLock() -- detected recursive lock attempt on non-recursive mutex -- throwing exception to avoid deadlock");
    v2 = std::string::string(
           v8,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\concurrency.cpp");
    Spectre::Engine::EngineAccessDeniedException::EngineAccessDeniedException(pExceptionObject, v2, v3, v9);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  Spectre::Utils::SharedMutex::lock_shared(this);
  MutexesLockedByCurrentThread = Spectre::Engine::Mutex::GetMutexesLockedByCurrentThread();
  v7 = this;
  return std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::emplace_back<Spectre::Engine::Mutex *,bool &>(
           MutexesLockedByCurrentThread,
           &v7,
           v6);
}
