/*
 * XREFs of ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18002F77C
 * Callers:
 *     ??0DiagnosticCallbacksManager@@QEAA@XZ @ 0x18002F264 (--0DiagnosticCallbacksManager@@QEAA@XZ.c)
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x18002F6AC (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180027F40 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180198AAC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

Microsoft::BamoImpl::BaseBamoConnectionImpl *__fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  *((_DWORD *)this + 8) = 0;
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
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 9) = 0x10000;
  *((_DWORD *)this + 10) = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v3 = operator new(0x28uLL);
  if ( v3 )
  {
    v3[2] = 1;
    *(_QWORD *)v3 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
    *((_QWORD *)v3 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
    *((_QWORD *)v3 + 3) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationBouncer'};
    *((_QWORD *)v3 + 4) = this;
  }
  else
  {
    v3 = 0LL;
  }
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = v3;
  if ( v7 )
  {
    Microsoft::BamoImpl::BamoImplObject::Release(v7, v4, v5, v6);
    v3 = (_DWORD *)*((_QWORD *)this + 13);
  }
  if ( !v3 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0xDF,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v6);
  *((_QWORD *)this + 12) = v3;
  return this;
}
