/*
 * XREFs of ?CommitToKernel@CDevice@DirectComposition@@AEAAJ_NPEAX@Z @ 0x180027090
 * Callers:
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ @ 0x1800356CC (-CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z @ 0x1800F1CD8 (-FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CommitToKernel(DirectComposition::CDevice *this, char a2, void *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // r12
  __int64 v13; // r14
  bool v14; // r15
  __int64 v15; // rcx
  char v16; // al
  __int64 v18; // rcx
  int v19; // r15d
  void *v20; // rcx
  char v21; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v22[3]; // [rsp+51h] [rbp-47h] BYREF
  int v23; // [rsp+54h] [rbp-44h] BYREF
  unsigned int v24[2]; // [rsp+58h] [rbp-40h] BYREF
  int v25; // [rsp+60h] [rbp-38h]
  int v26; // [rsp+64h] [rbp-34h]
  __int64 v27; // [rsp+68h] [rbp-30h]
  char v28; // [rsp+B8h] [rbp+20h] BYREF

  v23 = 0;
  v28 = 0;
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  if ( *((_DWORD *)this + 46) )
  {
    v18 = *((_QWORD *)this + 12);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
    v24[0] = 0;
    v21 = 0;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, char *))(**((_QWORD **)this + 20) + 16LL))(
            *((_QWORD *)this + 20),
            (unsigned int)(*((_DWORD *)this + 44) - *((_DWORD *)this + 45)),
            v24,
            &v21);
    if ( v24[0] != *((_DWORD *)this + 46) )
    {
      DirectComposition::CDevice::FailFastForKernelBatchFailure(this, v24[0]);
      JUMPOUT(0x1800273C6LL);
    }
    v20 = (void *)*((_QWORD *)this + 24);
    if ( v20 )
    {
      operator delete(v20);
      *((_QWORD *)this + 24) = 0LL;
    }
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = *((_DWORD *)this + 44);
    if ( v21 )
      DirectComposition::CDevice::CheckForDelayedDestructionObjects(this);
    if ( v19 < 0 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  v7 = 0LL;
  *(_QWORD *)v24 = 0LL;
  v8 = 0;
  v21 = 0;
  v9 = *((_QWORD *)this + 11);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *, char *))(*(_QWORD *)v9 + 1064LL))(v9, v24, &v21);
    v7 = *(_QWORD *)v24;
    v8 = v21;
  }
  v10 = 0LL;
  v25 = 0;
  if ( a2 )
  {
    v10 = 1LL;
    v25 = 1;
  }
  if ( v8 )
  {
    v10 = (unsigned int)v10 | 2;
    v25 = v10;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *, char *, __int64, void *, __int64, _QWORD, _DWORD))(**((_QWORD **)this + 20) + 24LL))(
          *((_QWORD *)this + 20),
          &v23,
          &v28,
          v10,
          a3,
          v7,
          0LL,
          0);
  v26 = v11;
  v12 = *((_QWORD *)this + 88);
  v13 = *((_QWORD *)this + 87);
  v14 = (v12 - v13) >> 3 != 0;
  while ( 1 )
  {
    v27 = v13;
    if ( v13 == v12 )
      break;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v13);
    v13 += 8LL;
  }
  *((_QWORD *)this + 88) = *((_QWORD *)this + 87);
  if ( v11 >= 0 && v14 )
  {
    v22[0] = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, int *, _BYTE *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 20) + 24LL))(
            *((_QWORD *)this + 20),
            &v23,
            v22,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
    v26 = v11;
    v16 = v28;
    if ( v22[0] )
      v16 = 1;
    v28 = v16;
  }
  v15 = *((_QWORD *)this + 11);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 1072LL))(v15);
  if ( v11 >= 0 )
  {
    *((_DWORD *)this + 104) = v23 + 1;
    *((_QWORD *)this + 80) = 0LL;
    if ( v28 )
      DirectComposition::CDevice::CheckForDelayedDestructionObjects(this);
  }
  return (unsigned int)v11;
}
