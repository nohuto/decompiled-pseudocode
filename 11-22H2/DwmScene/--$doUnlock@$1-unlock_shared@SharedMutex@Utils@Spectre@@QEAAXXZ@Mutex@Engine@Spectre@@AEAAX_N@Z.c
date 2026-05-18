/*
 * XREFs of ??$doUnlock@$1?unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029CEC
 * Callers:
 *     ?unlock_shared@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5B8 (-unlock_shared@Mutex@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineAccessDeniedException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180029E4C (--0EngineAccessDeniedException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 *     ?FindThisMutex@Mutex@Engine@Spectre@@AEBA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@std@@@std@@@std@@_N@Z @ 0x180029F98 (-FindThisMutex@Mutex@Engine@Spectre@@AEBA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 *     ?GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@XZ @ 0x18002A13C (-GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV-$vector@U-$pair@PEBVMutex@Engine@S.c)
 *     ?erase@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@std@@@std@@@2@@Z @ 0x18002A4B8 (-erase@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@std@@V-$allocator@U-$pair@PEBVMutex@Engine@.c)
 *     ?this_thread_owns@Mutex@Engine@Spectre@@QEBA_NXZ @ 0x18002A538 (-this_thread_owns@Mutex@Engine@Spectre@@QEBA_NXZ.c)
 *     ?unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0EB0 (-unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::Mutex::doUnlock<&public: void Spectre::Utils::SharedMutex::unlock_shared(void)>(
        Spectre::Utils::SharedMutex *this)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 MutexesLockedByCurrentThread; // rbx
  _QWORD *ThisMutex; // rax
  _BYTE v6[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  if ( !Spectre::Engine::Mutex::this_thread_owns(this) )
  {
    std::string::string(
      v9,
      (__int64)"Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v2 = std::string::string(
           v8,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\concurrency.cpp");
    Spectre::Engine::EngineAccessDeniedException::EngineAccessDeniedException(pExceptionObject, v2, v3, v9);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  MutexesLockedByCurrentThread = Spectre::Engine::Mutex::GetMutexesLockedByCurrentThread();
  ThisMutex = (_QWORD *)Spectre::Engine::Mutex::FindThisMutex(this, v6, 0LL);
  std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::erase(MutexesLockedByCurrentThread, v7, *ThisMutex);
  Spectre::Utils::SharedMutex::unlock_shared(this);
}
