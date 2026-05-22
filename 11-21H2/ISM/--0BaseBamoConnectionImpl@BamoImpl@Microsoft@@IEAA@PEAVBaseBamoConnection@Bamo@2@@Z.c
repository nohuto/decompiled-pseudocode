/*
 * XREFs of ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18002CE64
 * Callers:
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18002C4D0 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x18002C5CC (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x18002CC2C (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18002CD44 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ @ 0x180097A28 (--0BamoConnection@MPCManagerBamo_AutoBamos@@IEAA@XZ.c)
 *     ??0BamoConnection@ISMBamos_AutoBamos@@IEAA@XZ @ 0x1801049EC (--0BamoConnection@ISMBamos_AutoBamos@@IEAA@XZ.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088EA0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=12
Microsoft::BamoImpl::BaseBamoConnectionImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v10; // [rsp+38h] [rbp+10h]

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0x10000;
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v10 = operator new(0x28uLL);
  v10[2] = 1;
  *(_QWORD *)v10 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_QWORD *)v10 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  *((_QWORD *)v10 + 3) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationBouncer'};
  *((_QWORD *)v10 + 4) = this;
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = v10;
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, v3, v4, v5);
  v7 = *((_QWORD *)this + 13);
  if ( !v7 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0xDF,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v5);
  *((_QWORD *)this + 12) = v7;
  return this;
}
