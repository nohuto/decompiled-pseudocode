/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14001118C
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x14000FED8 (-GetHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetNext@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@AEAPEAU__POSITION@@@Z @ 0x140011684 (-GetNext@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z @ 0x140011778 (-CreateConnection@CConnectionInstance@@QEAAJPEAVCInPlaceBuffer@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x14001373C (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z @ 0x140013BB4 (-CanDoInPlace@CConnectionInstance@@QEAAHPEAV1@@Z.c)
 *     ?CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z @ 0x140023AF8 (-CreateConnectionBuffer@CConnectionInstance@@QEAAJPEA_K0@Z.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140025024 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14005C034 (--1-$com_ptr_t@VCInPlaceBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::CreateAPOConnections(struct IUnknown **this)
{
  CPipeInstance *v1; // r14
  struct IUnknown **v2; // rbx
  char v3; // si
  struct IUnknown *v4; // rdi
  struct IUnknown *v5; // rax
  __int64 **Prev; // rax
  CConnectionInstance *v7; // r15
  struct CConnectionInstance *v8; // rdx
  int Connection; // r15d
  CConnectionInstance **Next; // rax
  int v11; // eax
  unsigned int v12; // ebx
  struct IUnknown *v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown **v20; // [rsp+78h] [rbp+48h] BYREF
  struct IUnknown *v21; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp+58h] BYREF

  v1 = (CPipeInstance *)this;
  v2 = 0LL;
  v20 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 3) )
    v4 = this[9];
  else
    v4 = this[8];
  v21 = v4;
  while ( v4 )
  {
    if ( *((_DWORD *)v1 + 3) )
    {
      Prev = (__int64 **)ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                           this,
                           &v21);
      v4 = v21;
    }
    else
    {
      v5 = v4;
      v4 = (struct IUnknown *)v4->lpVtbl;
      v21 = v4;
      Prev = (__int64 **)&v5[2];
    }
    v19 = **Prev;
    v7 = *(CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                    v19,
                                    &v19);
    if ( v4 )
      v8 = *(struct CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetHead(&v4[2].lpVtbl->QueryInterface);
    else
      v8 = 0LL;
    if ( (unsigned int)CConnectionInstance::CanDoInPlace(v7, v8) )
    {
      if ( !v2 )
      {
        v11 = CConnectionInstance::CreateConnectionBuffer(v7, &v22, &v17);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB29,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v11,
            v17);
LABEL_37:
          wil::com_ptr_t<CInPlaceBuffer,wil::err_returncode_policy>::~com_ptr_t<CInPlaceBuffer,wil::err_returncode_policy>(&v20);
          return v12;
        }
        v2 = (struct IUnknown **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
        v20 = v2;
        if ( !v2 )
        {
          v20 = 0LL;
          v12 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB2E,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)0x8007000ELL,
            v17);
          (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)v1 + 30) + 48LL))(*((_QWORD *)v1 + 30), v22);
          goto LABEL_37;
        }
        v13 = (struct IUnknown *)*((_QWORD *)v1 + 30);
        v14 = v22;
        v2[3] = 0LL;
        v2[1] = (struct IUnknown *)v14;
        *v2 = (struct IUnknown *)v17;
        *((_DWORD *)v2 + 4) = 1;
        if ( v13 )
          ATL::AtlComPtrAssign(v2 + 3, v13);
        v20 = v2;
        v3 = 1;
      }
    }
    else if ( v2 )
    {
      v3 = 0;
    }
    Connection = CConnectionInstance::CreateConnection(v7, (struct CInPlaceBuffer *)v2);
    if ( Connection < 0 )
    {
      v16 = 2879LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)Connection,
        v17);
      v12 = Connection;
      goto LABEL_37;
    }
    if ( !v3 )
    {
      this = v2;
      v2 = 0LL;
      v20 = 0LL;
      if ( this )
        CInPlaceBuffer::Release((CInPlaceBuffer *)this);
    }
    while ( v19 )
    {
      Next = (CConnectionInstance **)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetNext(
                                       this,
                                       &v19);
      Connection = CConnectionInstance::CreateConnection(*Next, 0LL);
      if ( Connection < 0 )
      {
        v16 = 2891LL;
        goto LABEL_36;
      }
    }
  }
  if ( v2 )
    CInPlaceBuffer::Release((CInPlaceBuffer *)v2);
  return 0LL;
}
