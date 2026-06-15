/*
 * XREFs of ?UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18002A6A4
 * Callers:
 *     ?UnregisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18002A760 (-UnregisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?FreeNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800144C4 (-FreeNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::UnregisterAppVolumePolicyChange(
        CApplication *this,
        struct IAudioAppVolumePolicyChange *a2)
{
  unsigned int v4; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  _QWORD **i; // rdx
  _QWORD **v7; // r9
  _QWORD **v8; // rax
  _QWORD *v9; // rax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = -2147023728;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11 = v5;
  for ( i = (_QWORD **)*((_QWORD *)this + 15); i; i = (_QWORD **)*i )
  {
    if ( i[2] == (_QWORD *)a2 )
    {
      v7 = i + 1;
      v8 = (_QWORD **)*i;
      if ( i == *((_QWORD ***)this + 15) )
        *((_QWORD *)this + 15) = v8;
      else
        **v7 = v8;
      v9 = *v7;
      if ( i == *((_QWORD ***)this + 16) )
        *((_QWORD *)this + 16) = v9;
      else
        (*i)[1] = v9;
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::FreeNode((__int64)this + 120, i);
      v4 = 0;
      break;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return v4;
}
