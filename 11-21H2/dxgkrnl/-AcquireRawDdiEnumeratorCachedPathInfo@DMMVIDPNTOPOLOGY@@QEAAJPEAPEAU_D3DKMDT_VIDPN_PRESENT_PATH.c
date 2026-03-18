/*
 * XREFs of ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A52EC
 * Callers:
 *     ?CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A6D10 (-CreateNewPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C006A5AC (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@Z @ 0x1C006A684 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireRawDdiEnumeratorCachedPathInfo(
        DMMVIDPNTOPOLOGY *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  void *Instance; // rax
  char *v7; // rax
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (char *)this;
  v4 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v9 = 0LL;
  Instance = (void *)Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(
                       0LL,
                       (__int64)a2,
                       a3,
                       a4);
  auto_ptr<Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>>::reset((void **)&v9, Instance);
  if ( v9 )
  {
    v7 = v9 + 16;
    *a2 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)(v9 + 16);
    *((_QWORD *)v7 + 1) = 0LL;
    *(_DWORD *)v7 = -1;
    *((_DWORD *)v7 + 1) = -1;
    *((_DWORD *)v7 + 5) = 0;
    *(_QWORD *)(v7 + 28) = 0LL;
    *(_QWORD *)(v7 + 36) = 0LL;
    *(_QWORD *)(v7 + 44) = 0LL;
    *(_QWORD *)(v7 + 52) = 0LL;
    *(_QWORD *)(v7 + 60) = 0LL;
    *(_QWORD *)(v7 + 68) = 0LL;
    *((_DWORD *)v7 + 84) = 0;
    *((_QWORD *)v7 + 43) = 0LL;
    *((_QWORD *)v7 + 44) = 0LL;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v4 = -1073741801;
  }
  operator delete(0LL);
  return v4;
}
