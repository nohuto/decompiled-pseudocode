/*
 * XREFs of sub_14069C1E0 @ 0x14069C1E0
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14069C7C0 @ 0x14069C7C0 (sub_14069C7C0.c)
 *     sub_14069C820 @ 0x14069C820 (sub_14069C820.c)
 */

__int64 __fastcall sub_14069C1E0(__int64 a1, __int64 a2, int a3)
{
  char v3; // si
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbx
  __int64 ProcessServerSilo; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v12; // di
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  struct _KTHREAD *v32; // rax
  bool v33; // zf
  _QWORD *v35; // rax
  struct _KTHREAD *v36; // rax
  __int128 v37; // [rsp+28h] [rbp-50h]
  __int128 v38; // [rsp+38h] [rbp-40h]
  __int64 v39; // [rsp+48h] [rbp-30h]
  __int64 v40; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0;
  v40 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( (a3 & 0xFFFFFFFE) != 0 || a1 && *((_QWORD *)KeGetCurrentThread() + 23) != a1 )
    return 3221225485LL;
  v7 = sub_14069C820(0LL, &v40);
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    v9 = sub_140204738(ProcessServerSilo);
  }
  else
  {
    v9 = sub_140347DB0();
  }
  v10 = v9;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v10 + 15), 0LL);
  if ( v7 )
  {
    v12 = 1;
  }
  else
  {
    v35 = (_QWORD *)(a1 + 1416);
    if ( !a1 )
      v35 = v10;
    v7 = *v35 & 0xFFFFFFFFFFFFFFF0uLL;
    v12 = 0;
  }
  if ( v7 )
  {
    v13 = 0LL;
    if ( (v3 & 1) == 0 )
      v13 = *(_QWORD *)(v7 + 24);
    v14 = *(_DWORD *)(v7 + 256);
    LODWORD(v37) = v14;
    v15 = 1;
    v16 = 2;
    do
    {
      *((_BYTE *)&v37 + v16 + 2) = *(_BYTE *)(v16 - 2 + v7 + 260);
      if ( (v14 & v15) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 2) = *(_BYTE *)(v16 - 2 + v13 + 260);
        LODWORD(v37) = v15 & *(_DWORD *)(v13 + 256) | v37;
      }
      v17 = 2 * v15;
      *((_BYTE *)&v37 + v16 + 3) = *(_BYTE *)(v16 - 1 + v7 + 260);
      if ( (v14 & v17) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 3) = *(_BYTE *)(v16 - 1 + v13 + 260);
        LODWORD(v37) = v17 & *(_DWORD *)(v13 + 256) | v37;
      }
      v18 = 2 * v17;
      *((_BYTE *)&v37 + v16 + 4) = *(_BYTE *)(v16 + v7 + 260);
      if ( (v14 & v18) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 4) = *(_BYTE *)(v16 + v13 + 260);
        LODWORD(v37) = v18 & *(_DWORD *)(v13 + 256) | v37;
      }
      v19 = 2 * v18;
      *((_BYTE *)&v37 + v16 + 5) = *(_BYTE *)(v16 + 1 + v7 + 260);
      if ( (v14 & v19) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 5) = *(_BYTE *)(v16 + 1 + v13 + 260);
        LODWORD(v37) = v19 & *(_DWORD *)(v13 + 256) | v37;
      }
      v20 = 2 * v19;
      *((_BYTE *)&v37 + v16 + 6) = *(_BYTE *)(v16 + 2 + v7 + 260);
      if ( (v14 & v20) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 6) = *(_BYTE *)(v16 + 2 + v13 + 260);
        LODWORD(v37) = v20 & *(_DWORD *)(v13 + 256) | v37;
      }
      v21 = 2 * v20;
      *((_BYTE *)&v37 + v16 + 7) = *(_BYTE *)(v16 + 3 + v7 + 260);
      if ( (v14 & v21) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 7) = *(_BYTE *)(v16 + 3 + v13 + 260);
        LODWORD(v37) = v21 & *(_DWORD *)(v13 + 256) | v37;
      }
      v22 = 2 * v21;
      *((_BYTE *)&v37 + v16 + 8) = *(_BYTE *)(v16 + 4 + v7 + 260);
      if ( (v14 & v22) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 8) = *(_BYTE *)(v16 + 4 + v13 + 260);
        LODWORD(v37) = v22 & *(_DWORD *)(v13 + 256) | v37;
      }
      v23 = 2 * v22;
      *((_BYTE *)&v37 + v16 + 9) = *(_BYTE *)(v16 + 5 + v7 + 260);
      if ( (v14 & v23) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 9) = *(_BYTE *)(v16 + 5 + v13 + 260);
        LODWORD(v37) = v23 & *(_DWORD *)(v13 + 256) | v37;
      }
      v24 = 2 * v23;
      *((_BYTE *)&v37 + v16 + 10) = *(_BYTE *)(v16 + 6 + v7 + 260);
      if ( (v14 & v24) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 10) = *(_BYTE *)(v16 + 6 + v13 + 260);
        LODWORD(v37) = v24 & *(_DWORD *)(v13 + 256) | v37;
      }
      v25 = 2 * v24;
      *((_BYTE *)&v37 + v16 + 11) = *(_BYTE *)(v16 + 7 + v7 + 260);
      if ( (v14 & v25) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 11) = *(_BYTE *)(v16 + 7 + v13 + 260);
        LODWORD(v37) = v25 & *(_DWORD *)(v13 + 256) | v37;
      }
      v26 = 2 * v25;
      *((_BYTE *)&v37 + v16 + 12) = *(_BYTE *)(v16 + 8 + v7 + 260);
      if ( (v14 & v26) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 12) = *(_BYTE *)(v16 + 8 + v13 + 260);
        LODWORD(v37) = v26 & *(_DWORD *)(v13 + 256) | v37;
      }
      v27 = 2 * v26;
      *((_BYTE *)&v37 + v16 + 13) = *(_BYTE *)(v16 + 9 + v7 + 260);
      if ( (v14 & v27) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 13) = *(_BYTE *)(v16 + 9 + v13 + 260);
        LODWORD(v37) = v27 & *(_DWORD *)(v13 + 256) | v37;
      }
      v28 = 2 * v27;
      *((_BYTE *)&v37 + v16 + 14) = *(_BYTE *)(v16 + 10 + v7 + 260);
      if ( (v14 & v28) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 14) = *(_BYTE *)(v16 + 10 + v13 + 260);
        LODWORD(v37) = v28 & *(_DWORD *)(v13 + 256) | v37;
      }
      v29 = 2 * v28;
      *((_BYTE *)&v37 + v16 + 15) = *(_BYTE *)(v16 + 11 + v7 + 260);
      if ( (v14 & v29) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 15) = *(_BYTE *)(v16 + 11 + v13 + 260);
        LODWORD(v37) = v29 & *(_DWORD *)(v13 + 256) | v37;
      }
      v30 = 2 * v29;
      *((_BYTE *)&v37 + v16 + 16) = *(_BYTE *)(v16 + 12 + v7 + 260);
      if ( (v14 & v30) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 16) = *(_BYTE *)(v16 + 12 + v13 + 260);
        LODWORD(v37) = v30 & *(_DWORD *)(v13 + 256) | v37;
      }
      v31 = 2 * v30;
      *((_BYTE *)&v37 + v16 + 17) = *(_BYTE *)(v16 + 13 + v7 + 260);
      if ( (v14 & v31) == 0 && v13 )
      {
        *((_BYTE *)&v37 + v16 + 17) = *(_BYTE *)(v16 + 13 + v13 + 260);
        LODWORD(v37) = v31 & *(_DWORD *)(v13 + 256) | v37;
      }
      v15 = 2 * v31;
      v16 += 16;
    }
    while ( v16 - 2 < 0x20 );
    if ( _InterlockedCompareExchange64(v10 + 15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10 + 15);
    sub_1402AFC00((ULONG_PTR)(v10 + 15));
    v32 = KeGetCurrentThread();
    v33 = (*((_WORD *)v32 + 243))++ == 0xFFFF;
    if ( v33 && *((struct _KTHREAD **)v32 + 19) != (struct _KTHREAD *)((char *)v32 + 152) )
      KiCheckForKernelApcDelivery();
    if ( v12 == 1 )
      sub_14069C7C0((PVOID)v7);
    *(_OWORD *)a2 = v37;
    *(_OWORD *)(a2 + 16) = v38;
    *(_DWORD *)(a2 + 32) = v39;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v10 + 15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10 + 15);
    sub_1402AFC00((ULONG_PTR)(v10 + 15));
    v36 = KeGetCurrentThread();
    v33 = (*((_WORD *)v36 + 243))++ == 0xFFFF;
    if ( v33 && *((struct _KTHREAD **)v36 + 19) != (struct _KTHREAD *)((char *)v36 + 152) )
      KiCheckForKernelApcDelivery();
    return (unsigned int)-1073741807;
  }
  return v6;
}
