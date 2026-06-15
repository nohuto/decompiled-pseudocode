/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140015E90
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140009F28 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z @ 0x140016088 (-CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z.c)
 *     ?CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z @ 0x1400161B8 (-CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x14002A658 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x14002BD58 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14002D2BC (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x14005A04C (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::CreateAPOConnections(CPipeInstance *this)
{
  CPipeInstance *v1; // r13
  unsigned __int64 *v2; // rbx
  char v3; // r15
  __int64 *v4; // rdi
  __int64 *v5; // rax
  __int64 ***Prev; // rax
  __int64 *v7; // rax
  __int64 v8; // rbp
  CConnectionInstance *v9; // r14
  __int64 v10; // rdx
  struct CConnectionInstance *v11; // rdx
  int Connection; // eax
  unsigned int v13; // esi
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  CConnectionInstance **Next; // rax
  int v19; // eax
  unsigned __int64 v20[11]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 *v22; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 *v23; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  v1 = this;
  v2 = 0LL;
  v23 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 3) )
    v4 = (__int64 *)*((_QWORD *)this + 9);
  else
    v4 = (__int64 *)*((_QWORD *)this + 8);
  v22 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v1 + 3) )
      {
        Prev = (__int64 ***)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                              this,
                              &v22);
        v4 = v22;
      }
      else
      {
        v5 = v4;
        v4 = (__int64 *)*v4;
        v22 = v4;
        Prev = (__int64 ***)(v5 + 2);
      }
      v7 = **Prev;
      if ( !v7 )
        ATL::AtlThrowImpl(-2147467259);
      v8 = *v7;
      v24 = *v7;
      v9 = (CConnectionInstance *)v7[2];
      if ( v4 )
      {
        v10 = *(_QWORD *)v4[2];
        if ( !v10 )
          ATL::AtlThrowImpl(-2147467259);
        v11 = *(struct CConnectionInstance **)(v10 + 16);
      }
      else
      {
        v11 = 0LL;
      }
      if ( (unsigned int)CConnectionInstance::CanDoInPlace(v9, v11) )
      {
        if ( !v2 )
        {
          v15 = CConnectionInstance::CreateConnectionBuffer(v9, &v25, v20);
          v13 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB05,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
              (const char *)(unsigned int)v15,
              v20[0]);
            goto LABEL_20;
          }
          v2 = (unsigned __int64 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
          v23 = v2;
          if ( !v2 )
          {
            v2 = 0LL;
            v23 = 0LL;
            v13 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB0A,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
              (const char *)0x8007000ELL,
              v20[0]);
            (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)v1 + 30) + 48LL))(
              *((_QWORD *)v1 + 30),
              v25);
            goto LABEL_20;
          }
          v16 = *((_QWORD *)v1 + 30);
          v17 = v25;
          v2[3] = 0LL;
          v2[1] = v17;
          *v2 = v20[0];
          *((_DWORD *)v2 + 4) = 1;
          ATL::CComPtr<IDeviceGraphObjectCache>::operator=((__int64 *)v2 + 3, v16);
          v23 = v2;
          v3 = 1;
        }
      }
      else if ( v2 )
      {
        v3 = 0;
      }
      Connection = CConnectionInstance::CreateConnection(v9, (struct CInPlaceBuffer *)v2);
      v13 = Connection;
      if ( Connection < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB1B,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)Connection,
          v20[0]);
        goto LABEL_20;
      }
      if ( !v3 )
      {
        this = (CPipeInstance *)v2;
        v2 = 0LL;
        v23 = 0LL;
        if ( this )
          CInPlaceBuffer::Release(this);
      }
      if ( v8 )
        break;
LABEL_18:
      if ( !v4 )
        goto LABEL_19;
    }
    while ( 1 )
    {
      Next = (CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                       this,
                                       &v24);
      v19 = CConnectionInstance::CreateConnection(*Next, 0LL);
      v13 = v19;
      if ( v19 < 0 )
        break;
      if ( !v24 )
        goto LABEL_18;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB27,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v19,
      v20[0]);
  }
  else
  {
LABEL_19:
    v13 = 0;
  }
LABEL_20:
  if ( v2 )
    CInPlaceBuffer::Release((CInPlaceBuffer *)v2);
  return v13;
}
