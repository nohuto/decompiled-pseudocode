/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1C0095E60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0093F40 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0095FF0 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x1C023CD70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@_ea_1C023CD70.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v6; // ebx
  __int64 i; // rdi
  __int64 v8; // r8
  ULONG64 v9; // rdx
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  __int64 v13; // xmm0_8
  __int64 v14; // r12
  PVOID v15; // r15
  int v17; // r8d
  int v18; // r9d
  int v19; // [rsp+B0h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-E0h] BYREF
  int v21; // [rsp+C0h] [rbp-D8h] BYREF
  int v22; // [rsp+C4h] [rbp-D4h] BYREF
  int v23; // [rsp+C8h] [rbp-D0h] BYREF
  int v24; // [rsp+CCh] [rbp-CCh] BYREF
  int v25; // [rsp+D0h] [rbp-C8h] BYREF
  int v26; // [rsp+D4h] [rbp-C4h] BYREF
  int v27; // [rsp+D8h] [rbp-C0h] BYREF
  int v28; // [rsp+DCh] [rbp-BCh] BYREF
  int v29; // [rsp+E0h] [rbp-B8h] BYREF
  int v30; // [rsp+E4h] [rbp-B4h] BYREF
  int v31; // [rsp+E8h] [rbp-B0h] BYREF
  int v32; // [rsp+ECh] [rbp-ACh] BYREF
  int v33; // [rsp+F0h] [rbp-A8h] BYREF
  int v34; // [rsp+F4h] [rbp-A4h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-A0h] BYREF
  _OWORD v36[6]; // [rsp+100h] [rbp-98h] BYREF

  v4 = a2;
  if ( UserIsCurrentProcessDwm(a1, a2, a3, a4) )
  {
    v6 = 0;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v19 = i;
      if ( v6 < 0 || (unsigned int)i >= v4 )
        break;
      memset(&v36[1], 0, 0x48uLL);
      v9 = a1 + 72 * i;
      if ( v9 + 72 < v9 || v9 + 72 > MmUserProbeAddress )
        v9 = MmUserProbeAddress;
      v10 = *(_OWORD *)(v9 + 16);
      v11 = *(_OWORD *)(v9 + 32);
      v12 = *(_OWORD *)(v9 + 48);
      v13 = *(_QWORD *)(v9 + 64);
      v36[1] = *(_OWORD *)v9;
      v36[2] = v10;
      v36[3] = v11;
      v36[4] = v12;
      *(_QWORD *)&v36[5] = v13;
      Object = 0LL;
      LOBYTE(v8) = 1;
      v14 = *(_QWORD *)&v36[1];
      v6 = CompositionInputObject::ResolveHandle(*(void **)&v36[1], 2LL, v8, (struct CompositionInputObject **)&Object);
      if ( v6 >= 0 )
      {
        v15 = Object;
        CompositionInputObject::UpdateTransform(
          (CompositionInputObject *)Object,
          (const struct tagINPUT_TRANSFORM *)((char *)&v36[1] + 8));
        if ( (unsigned int)dword_1C028EE70 > 5 && tlgKeywordOn((__int64)&dword_1C028EE70, 4LL) )
        {
          v19 = DWORD1(v36[5]);
          v21 = v36[5];
          v22 = HIDWORD(v36[4]);
          v23 = DWORD2(v36[4]);
          v24 = DWORD1(v36[4]);
          v25 = v36[4];
          v26 = HIDWORD(v36[3]);
          v27 = DWORD2(v36[3]);
          v28 = DWORD1(v36[3]);
          v29 = v36[3];
          v30 = HIDWORD(v36[2]);
          v31 = DWORD2(v36[2]);
          v32 = DWORD1(v36[2]);
          v33 = v36[2];
          v34 = HIDWORD(v36[1]);
          LODWORD(Object) = DWORD2(v36[1]);
          v35 = v14;
          *(_QWORD *)&v36[0] = v15;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C028EE70,
            (unsigned int)&unk_1C0264D78,
            v17,
            v18,
            (__int64)v36,
            (__int64)&v35,
            (__int64)&Object,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v27,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v19);
        }
        ObfDereferenceObject(v15);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
