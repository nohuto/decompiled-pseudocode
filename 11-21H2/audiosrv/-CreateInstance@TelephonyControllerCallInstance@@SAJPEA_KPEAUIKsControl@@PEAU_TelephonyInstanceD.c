/*
 * XREFs of ?CreateInstance@TelephonyControllerCallInstance@@SAJPEA_KPEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x18006A444
 * Callers:
 *     ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180160220 (-CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyContr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ @ 0x18004C2F0 (--1-$CComPtrBase@VPhoneTopology@@@ATL@@QEAA@XZ.c)
 *     ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x18016252C (-ResetState@TelephonyControllerCallInstance@@AEAAJXZ.c)
 *     ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1801626F0 (-VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyControllerCallInstance::CreateInstance(
        unsigned __int64 *a1,
        struct IUnknown *a2,
        struct _TelephonyInstanceData *a3,
        struct ITelephonyControllerCallInstance **a4)
{
  unsigned int v8; // ebx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  int v11; // eax
  struct IUnknown **v12; // r10
  _DWORD *v14; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v14 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v9 = operator new(0x38uLL);
    v10 = v9;
    v14 = v9;
    if ( !v9 )
    {
      v14 = 0LL;
      v8 = -2147024882;
      goto LABEL_14;
    }
    v9[4] = 1;
    *(_QWORD *)v9 = &TelephonyControllerCallInstance::`vftable'{for `ITelephonyControllerCallInstance'};
    *((_QWORD *)v9 + 1) = &TelephonyControllerCallInstance::`vftable'{for `CUnknown'};
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    v14 = v9;
    if ( a2 && a3 )
    {
      v9[12] = *((_DWORD *)a3 + 1);
      v11 = TelephonyControllerCallInstance::VerifyAndSetCallType((TelephonyControllerCallInstance *)v9, a3);
      if ( v11 >= 0 )
      {
        v10[11] = v10[10];
        *((_QWORD *)v10 + 3) = *a1;
        if ( *v12 != a2 )
          ATL::AtlComPtrAssign(v12, a2);
        v11 = TelephonyControllerCallInstance::ResetState((TelephonyControllerCallInstance *)v10);
        if ( v11 >= 0 )
        {
          v14 = 0LL;
          *a4 = (struct ITelephonyControllerCallInstance *)v10;
          goto LABEL_14;
        }
      }
    }
    else
    {
      v11 = -2147467261;
    }
    v8 = v11;
  }
  else
  {
    v8 = -2147467261;
  }
LABEL_14:
  ATL::CComPtrBase<PhoneTopology>::~CComPtrBase<PhoneTopology>((__int64 *)&v14);
  return v8;
}
