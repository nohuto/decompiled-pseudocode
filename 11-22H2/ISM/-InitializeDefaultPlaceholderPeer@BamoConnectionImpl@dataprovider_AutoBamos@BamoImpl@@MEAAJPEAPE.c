/*
 * XREFs of ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18011E880
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1800C17A8 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::InitializeDefaultPlaceholderPeer(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  Microsoft::BamoImpl::BamoImplObject **v4; // rax
  const char *v5; // r9
  Microsoft::BamoImpl::BamoImplObject **v6; // rbx
  __int64 result; // rax
  struct Microsoft::Bamo::BaseBamoPeer *v8; // [rsp+50h] [rbp+18h]

  v8 = (struct Microsoft::Bamo::BaseBamoPeer *)operator new(0x68uLL);
  *(_QWORD *)v8 = &ISMBamos_AutoBamos::BamoPeer::`vftable';
  *((_DWORD *)v8 + 4) = 1;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_WORD *)v8 + 28) = 0;
  *((_QWORD *)v8 + 8) = 0LL;
  *((_QWORD *)v8 + 9) = 0LL;
  *((_QWORD *)v8 + 3) = v8;
  *((_QWORD *)v8 + 10) = 0LL;
  *((_QWORD *)v8 + 11) = 0LL;
  *((_QWORD *)v8 + 12) = 0LL;
  *((_QWORD *)v8 + 1) = &BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::`vftable';
  v4 = (Microsoft::BamoImpl::BamoImplObject **)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)v8 + 8LL))(v8);
  v5 = (const char *)*((unsigned int *)this + 9);
  v6 = v4;
  *((_DWORD *)this + 9) = (_DWORD)v5 + 1;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v4, this, 0LL, v5, (unsigned int)v5);
  result = 0LL;
  *((_BYTE *)v6 + 48) = 1;
  *a2 = v8;
  return result;
}
