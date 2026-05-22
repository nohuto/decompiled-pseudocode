/*
 * XREFs of ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801DC604
 * Callers:
 *     ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x1801DD9C0 (--_EMPCSixDofProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800BE6A0 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::~MPCSixDofProcessor(MPCSixDofProcessor *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rdi
  std::_Ref_count_base *v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v12)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rdx

  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 10816);
  v3 = (_QWORD *)*((_QWORD *)this + 520);
  if ( v3 )
  {
    v4 = (std::_Ref_count_base *)v3[3];
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    operator delete(v3);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 519);
  if ( v5 )
  {
    v6 = (std::_Ref_count_base *)v5[3];
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    operator delete(v5);
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 518);
  if ( v7 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v2, v7);
  v8 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 517);
  if ( v8 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v2, v8);
  v9 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 516);
  if ( v9 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v2, v9);
  v10 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 515);
  if ( v10 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v2, v10);
  v11 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 514);
  if ( v11 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v2, v11);
  v12 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 513);
  if ( v12 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v2, v12);
  v13 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 512);
  if ( v13 )
    std::default_delete<MPCButtonHoldHelper>::operator()(v2, v13);
  *((_DWORD *)this + 915) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
}
