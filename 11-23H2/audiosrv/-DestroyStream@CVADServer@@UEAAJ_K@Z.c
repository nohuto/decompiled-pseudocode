/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180013400
 * Callers:
 *     AudioServerDestroyStream @ 0x1800128C0 (AudioServerDestroyStream.c)
 * Callees:
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x180017948 (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@VEffectPack@@@std@@QEAA@XZ @ 0x1800CBDA8 (--1-$shared_ptr@VEffectPack@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct CAudioStream **v5; // r14
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  __int64 v11; // rdx
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  *(_OWORD *)v12 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 448));
  std::shared_ptr<std::function<void (void)>>::operator=(v12, (char *)this + 488);
  if ( this != (CVADServer *)-448LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 448));
  std::shared_ptr<CPowerReference>::reset(v12);
  if ( *((_DWORD *)this + 40) )
  {
    v5 = (struct CAudioStream **)((char *)this + 168);
    if ( *((_QWORD *)this + 21) )
    {
      v6 = CVADServer::ValidateStreamHandle(this, a2);
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( v6 == -2005139336 )
        {
          std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(v12);
          if ( v2 )
            LeaveCriticalSection(v2);
          return 2289827960LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x767,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v6,
            (int)v12[0]);
          std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(v12);
          if ( v2 )
            LeaveCriticalSection(v2);
          return v7;
        }
      }
      else
      {
        if ( *((_BYTE *)this + 164) )
        {
          (*(void (__fastcall **)(_QWORD, struct CAudioStream *))(**((_QWORD **)this + 18) + 232LL))(
            *((_QWORD *)this + 18),
            *v5);
          *((_BYTE *)this + 164) = 0;
        }
        CAudioSession::RemoveStream(*((CAudioSession **)this + 18), *v5, 1);
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(
          (char *)this + 168,
          v8);
        v9 = v12[1];
        *((_DWORD *)this + 40) = 0;
        if ( v9 )
          std::_Ref_count_base::_Decref(v9);
        if ( v2 )
          LeaveCriticalSection(v2);
        return 0LL;
      }
    }
    v11 = 1894LL;
  }
  else
  {
    v11 = 1893LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x88890001LL,
    (int)v12[0]);
  std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(v12);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 2290679809LL;
}
