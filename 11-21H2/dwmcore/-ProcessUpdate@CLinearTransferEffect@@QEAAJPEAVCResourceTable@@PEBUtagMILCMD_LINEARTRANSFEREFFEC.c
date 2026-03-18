/*
 * XREFs of ?ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARTRANSFEREFFECT@@@Z @ 0x180206890
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::ProcessUpdate(
        CLinearTransferEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEARTRANSFEREFFECT *a3)
{
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 41) = *((_DWORD *)a3 + 3);
  *((_BYTE *)this + 168) = *((_BYTE *)a3 + 16);
  *((_DWORD *)this + 43) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 6);
  *((_BYTE *)this + 180) = *((_BYTE *)a3 + 28);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 47) = *((_DWORD *)a3 + 9);
  *((_BYTE *)this + 192) = *((_BYTE *)a3 + 40);
  *((_DWORD *)this + 49) = *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 12);
  *((_BYTE *)this + 204) = *((_BYTE *)a3 + 52);
  *((_BYTE *)this + 205) = *((_BYTE *)a3 + 53);
  (*(void (__fastcall **)(CLinearTransferEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return 0LL;
}
