/*
 * XREFs of ?VisualRemoveAllChildren@CChannel@@UEAAJI@Z @ 0x18002C3B0
 * Callers:
 *     ?VisualTargetSetRoot@CChannel@@UEAAJII@Z @ 0x18002B6D0 (-VisualTargetSetRoot@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18002DA48 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18002DC5C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x18002DDDC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18002E020 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801D0090 (-QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CChannel::VisualRemoveAllChildren(CChannel *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rdx
  int v9[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  void *v11; // [rsp+40h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    v11 = 0LL;
    v7 = CChannel::QueryResourceInterface(this, a2, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 144LL))(v11);
      v5 = v7;
      if ( v7 >= 0 )
      {
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
        return 0LL;
      }
      v8 = 1395LL;
    }
    else
    {
      v8 = 1394LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v7,
      v9[0]);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  }
  else
  {
    CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
    CChannel::CheckHandle(this, a2, 196LL);
    LODWORD(v11) = 392;
    HIDWORD(v11) = a2;
    v4 = CChannel::SendCommand(this, &v11, 8u);
    v5 = v4;
    if ( v4 >= 0 )
    {
      CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v4,
      v9[0]);
    CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  }
  return v5;
}
