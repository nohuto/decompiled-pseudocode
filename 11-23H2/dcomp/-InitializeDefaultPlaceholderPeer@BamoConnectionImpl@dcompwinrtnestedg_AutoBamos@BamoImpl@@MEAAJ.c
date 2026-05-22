/*
 * XREFs of ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18016C8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x18016C718 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 */

__int64 __fastcall BamoImpl::dcompwinrtnestedg_AutoBamos::BamoConnectionImpl::InitializeDefaultPlaceholderPeer(
        BamoImpl::dcompwinrtnestedg_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  struct Microsoft::Bamo::BaseBamoPeer *v4; // rax
  const char *v5; // r9
  struct Microsoft::Bamo::BaseBamoPeer *v6; // rdi
  Microsoft::BamoImpl::BamoImplObject **v7; // rax
  Microsoft::BamoImpl::BamoImplObject **v8; // rbx
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct Microsoft::Bamo::BaseBamoPeer *)operator new(0x68uLL);
  v6 = v4;
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      5465LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\objfre\\amd64\\dcompwinrtnestedg.bamo.h",
      v5);
  *(_QWORD *)v4 = &dcompwinrtnestedg_AutoBamos::BamoPeer::`vftable';
  *((_DWORD *)v4 + 4) = 1;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = v4;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_WORD *)v4 + 28) = 0;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 9) = 0LL;
  *((_QWORD *)v4 + 10) = 0LL;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_QWORD *)v4 + 1) = &BamoImpl::dcompwinrtnestedg_AutoBamos::BamoPeerImpl::`vftable';
  v7 = (Microsoft::BamoImpl::BamoImplObject **)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)v4 + 8LL))(v4);
  v10 = *((_DWORD *)this + 9);
  v8 = v7;
  *((_DWORD *)this + 9) = v10 + 1;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v7, (volatile signed __int32 **)this, 0, v10, v10);
  result = 0LL;
  *((_BYTE *)v8 + 48) = 1;
  *a2 = v6;
  return result;
}
