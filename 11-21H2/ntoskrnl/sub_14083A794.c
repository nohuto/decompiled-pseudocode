/*
 * XREFs of sub_14083A794 @ 0x14083A794
 * Callers:
 *     sub_140838F24 @ 0x140838F24 (sub_140838F24.c)
 *     sub_140838FBC @ 0x140838FBC (sub_140838FBC.c)
 *     sub_1408390A0 @ 0x1408390A0 (sub_1408390A0.c)
 *     sub_140839118 @ 0x140839118 (sub_140839118.c)
 *     sub_140839180 @ 0x140839180 (sub_140839180.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_14083AAB8 @ 0x14083AAB8 (sub_14083AAB8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083A794(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KEVENT *Pool2; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KEVENT *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // edi
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx

  *(_DWORD *)a1 = 1935831617;
  *(_QWORD *)(a1 + 320) = 0LL;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1298297409LL);
  *(_QWORD *)(a1 + 8) = Pool2;
  if ( !Pool2 )
    goto LABEL_44;
  KeInitializeEvent(Pool2, SynchronizationEvent, 1u);
  v10 = ExAllocatePool2(256LL, 4096LL, 1096970817LL);
  *(_QWORD *)(a1 + 112) = v10;
  if ( !v10 )
    goto LABEL_44;
  *(_DWORD *)(a1 + 104) = 4096;
  v11 = ExAllocatePool2(256LL, 32LL, 1382183489LL);
  *(_QWORD *)(a1 + 40) = v11;
  if ( !v11 )
    goto LABEL_44;
  v12 = ExAllocatePool2(256LL, 32LL, 1382183489LL);
  *(_QWORD *)(a1 + 48) = v12;
  if ( !v12 )
    goto LABEL_44;
  v13 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v13 + 8) = v13;
  *(_QWORD *)v13 = v13;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_DWORD *)(v13 + 24) = 0;
  v14 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v14 + 8) = v14;
  *(_QWORD *)v14 = v14;
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_DWORD *)(v14 + 24) = 0;
  *(_BYTE *)(a1 + 296) = 0;
  v15 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1298297409LL);
  *(_QWORD *)(a1 + 304) = v15;
  if ( v15 )
  {
    KeInitializeEvent(v15, NotificationEvent, 1u);
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)(a1 + 24) = L"Root";
    *(_DWORD *)(a1 + 32) = a3;
    if ( !*(_QWORD *)(a1 + 152) )
      *(_QWORD *)(a1 + 152) = sub_140839900;
    if ( !*(_QWORD *)(a1 + 160) )
      *(_QWORD *)(a1 + 160) = sub_14090B860;
    if ( !*(_QWORD *)(a1 + 168) )
      *(_QWORD *)(a1 + 168) = sub_140839460;
    if ( !*(_QWORD *)(a1 + 176) )
      *(_QWORD *)(a1 + 176) = ArbRollbackAllocation;
    if ( !*(_QWORD *)(a1 + 208) )
      *(_QWORD *)(a1 + 208) = MmConfigureGraphicsPtes;
    if ( !*(_QWORD *)(a1 + 224) )
      *(_QWORD *)(a1 + 224) = FsRtlSyncVolumes;
    if ( !*(_QWORD *)(a1 + 232) )
      *(_QWORD *)(a1 + 232) = sub_1408447E0;
    if ( !*(_QWORD *)(a1 + 240) )
      *(_QWORD *)(a1 + 240) = sub_14083F2B0;
    if ( !*(_QWORD *)(a1 + 248) )
      *(_QWORD *)(a1 + 248) = sub_14083BC60;
    if ( !*(_QWORD *)(a1 + 256) )
      *(_QWORD *)(a1 + 256) = sub_140839FC0;
    if ( !*(_QWORD *)(a1 + 264) )
      *(_QWORD *)(a1 + 264) = sub_140839430;
    if ( !*(_QWORD *)(a1 + 272) )
      *(_QWORD *)(a1 + 272) = sub_14083B980;
    if ( !*(_QWORD *)(a1 + 184) )
      *(_QWORD *)(a1 + 184) = ArbBootAllocation;
    if ( !*(_QWORD *)(a1 + 200) )
      *(_QWORD *)(a1 + 200) = sub_14090B4C0;
    if ( !*(_QWORD *)(a1 + 192) )
      *(_QWORD *)(a1 + 192) = FsRtlSyncVolumes;
    if ( !*(_QWORD *)(a1 + 216) )
      *(_QWORD *)(a1 + 216) = sub_14090BA50;
    if ( !*(_QWORD *)(a1 + 280) )
      *(_QWORD *)(a1 + 280) = sub_14090B3B0;
    if ( !*(_QWORD *)(a1 + 288) )
      *(_QWORD *)(a1 + 288) = sub_1408394A0;
    v18 = sub_14083AAB8(a1, v16, v17, a6);
    if ( v18 >= 0 )
      return 0LL;
  }
  else
  {
LABEL_44:
    v18 = -1073741670;
  }
  v20 = *(void **)(a1 + 8);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = *(void **)(a1 + 304);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = *(void **)(a1 + 40);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  v23 = *(void **)(a1 + 48);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  v24 = *(void **)(a1 + 112);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  return (unsigned int)v18;
}
