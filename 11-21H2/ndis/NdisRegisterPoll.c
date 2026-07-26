/*
 * XREFs of NdisRegisterPoll @ 0x1C01349C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0022160 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX0PEAU_NDIS_POLL_DATA@@@Z@wil@@YA?AV?$unique_ptr@VNdisPoll@@U?$default_delete@VNdisPoll@@@wistd@@@wistd@@AEAPEAX0AEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX1PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1C00C0438 (--$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6A.c)
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1C00C04BC (--_GNdisPoll@@QEAAPEAXI@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x1C0134D14 (-Initialize@NdisPoll@@QEAAJXZ.c)
 */

__int64 __fastcall NdisRegisterPoll(_BYTE *a1, void *a2, ULONG_PTR a3, NdisPoll **a4)
{
  KIRQL CurrentIrql; // al
  NdisPoll *v8; // rbx
  int v10; // eax
  unsigned int v11; // edi
  PVOID P; // [rsp+40h] [rbp-38h] BYREF
  void *v13; // [rsp+80h] [rbp+8h] BYREF
  void *v14; // [rsp+88h] [rbp+10h] BYREF

  v14 = a2;
  v13 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    ndisBugCheckEx(0x2EuLL, 1uLL, CurrentIrql, 0LL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_b07d896841303d6dd5e4c2ea1f7441a9_Traceguids,
      a1);
  *a4 = 0LL;
  if ( *(_BYTE *)a3 != 0x80
    || *(_BYTE *)(a3 + 1) != 1
    || *(_WORD *)(a3 + 2) < 0x18u
    || !*(_QWORD *)(a3 + 8)
    || !*(_QWORD *)(a3 + 16) )
  {
    ndisBugCheckEx(0x34uLL, 1uLL, 3uLL, a3);
  }
  if ( *a1 != 17 )
    ndisBugCheckEx(0x34uLL, 1uLL, 1uLL, (ULONG_PTR)a1);
  wil::make_unique_nothrow<NdisPoll,void * &,void * &,void (*const &)(void *,_NDIS_POLL_NOTIFICATION *),void (*const &)(void *,_NDIS_POLL_DATA *)>(
    (NdisPoll **)&P,
    &v13,
    &v14,
    (void (**)(void *, struct _NDIS_POLL_NOTIFICATION *))(a3 + 8),
    (void (**)(void *, struct _NDIS_POLL_DATA *))(a3 + 16));
  v8 = (NdisPoll *)P;
  if ( P )
  {
    v10 = NdisPoll::Initialize((NdisPoll *)P);
    if ( v10 )
    {
      v11 = NdisConvertNtStatusToNdisStatus(v10);
      NdisPoll::`scalar deleting destructor'(v8, 1);
      return v11;
    }
    else
    {
      *a4 = v8;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_b07d896841303d6dd5e4c2ea1f7441a9_Traceguids,
          (char)a1,
          v8);
      return 0LL;
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        (_WORD)P + 11,
        (struct _GUID *)&WPP_b07d896841303d6dd5e4c2ea1f7441a9_Traceguids);
    return 3221225626LL;
  }
}
