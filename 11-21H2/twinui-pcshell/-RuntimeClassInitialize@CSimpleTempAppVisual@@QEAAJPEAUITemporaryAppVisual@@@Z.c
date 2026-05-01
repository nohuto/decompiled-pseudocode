/*
 * XREFs of ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z @ 0x18053A5F8
 * Callers:
 *     ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEAPEAUITemporaryAppVisual@@@Z @ 0x180539F7C (--$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsof.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSimpleTempAppVisual::RuntimeClassInitialize(
        CSimpleTempAppVisual *this,
        struct ITemporaryAppVisual *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  int v6; // ecx
  __int64 v7; // rax
  void (__fastcall *v8)(struct ITemporaryAppVisual *, GUID *, __int64 *); // rdi
  __int64 *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct ITemporaryAppVisual *, __int64, char *))(*(_QWORD *)a2 + 24LL))(
    a2,
    1LL,
    (char *)this + 48);
  (*(void (__fastcall **)(struct ITemporaryAppVisual *, _QWORD, char *))(*(_QWORD *)a2 + 24LL))(
    a2,
    0LL,
    (char *)this + 64);
  v4 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 32LL))(a2);
  v5 = 0LL;
  *((_DWORD *)this + 4) = v4;
  v6 = 7;
  if ( v4 == 7 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 56LL))(a2);
    v6 = *((_DWORD *)this + 4);
  }
  *((_QWORD *)this + 4) = v7;
  if ( v6 != 1 )
    v5 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 64LL))(a2);
  *((_QWORD *)this + 5) = v5;
  v8 = *(void (__fastcall **)(struct ITemporaryAppVisual *, GUID *, __int64 *))(*(_QWORD *)a2 + 48LL);
  v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)this + 24, &v11);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v9);
  v8(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9);
  return 0LL;
}
