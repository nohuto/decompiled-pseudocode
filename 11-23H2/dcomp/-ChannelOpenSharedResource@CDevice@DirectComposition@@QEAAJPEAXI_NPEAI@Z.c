/*
 * XREFs of ?ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z @ 0x18005B708
 * Callers:
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ @ 0x1800356CC (-CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ.c)
 *     ?AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z @ 0x180058970 (-AllocateHandle@CHandleAllocator@DirectComposition@@QEAAJPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z @ 0x1800F1CD8 (-FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::ChannelOpenSharedResource(
        DirectComposition::CDevice *this,
        void *a2,
        int a3,
        int a4,
        unsigned int *a5)
{
  char *v5; // rsi
  int v6; // r14d
  int v10; // edi
  _DWORD *v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rdx
  void *v17; // rcx
  bool v18; // zf
  void *v20[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+8h] BYREF

  v5 = (char *)this + 200;
  v6 = (unsigned __int8)a4;
  v10 = DirectComposition::CHandleAllocator::AllocateHandle(
          (DirectComposition::CDevice *)((char *)this + 200),
          &v21,
          a3,
          a4);
  if ( v10 >= 0 )
  {
    DirectComposition::CDevice::BeginKernelCommand(this, 0x18u, v20, 0);
    v11 = v20[0];
    v12 = v21;
    *(_DWORD *)v20[0] = 2;
    v11[1] = v12;
    *((_QWORD *)v11 + 1) = a2;
    v11[4] = a3;
    v11[5] = v6;
    v13 = *((_QWORD *)this + 12);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
    v14 = *((_QWORD *)this + 20);
    v15 = *((_DWORD *)this + 44);
    LODWORD(v20[0]) = 0;
    v16 = (unsigned int)(v15 - *((_DWORD *)this + 45));
    LOBYTE(v21) = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, void **, unsigned int *))(*(_QWORD *)v14 + 16LL))(
            v14,
            v16,
            v20,
            &v21);
    if ( LODWORD(v20[0]) != *((_DWORD *)this + 46) )
    {
      DirectComposition::CDevice::FailFastForKernelBatchFailure(this, (unsigned int)v20[0]);
      JUMPOUT(0x18005B84BLL);
    }
    v17 = (void *)*((_QWORD *)this + 24);
    if ( v17 )
    {
      operator delete(v17);
      *((_QWORD *)this + 24) = 0LL;
    }
    *((_DWORD *)this + 46) = 0;
    v18 = (_BYTE)v21 == 0;
    *((_DWORD *)this + 45) = *((_DWORD *)this + 44);
    if ( !v18 )
      DirectComposition::CDevice::CheckForDelayedDestructionObjects(this);
    if ( v10 < 0 )
    {
      *(_DWORD *)(*(_QWORD *)v5 + 4 * ((unsigned __int64)(v12 - 1) >> 5)) &= ~(1 << ((v12 - 1) & 0x1F));
      --*((_DWORD *)v5 + 40);
    }
    else
    {
      *a5 = v12;
    }
  }
  return (unsigned int)v10;
}
