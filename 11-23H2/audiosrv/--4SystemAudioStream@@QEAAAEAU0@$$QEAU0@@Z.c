/*
 * XREFs of ??4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z @ 0x180104B3C
 * Callers:
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180014440 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@PEBG@Z @ 0x1801054E0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042E84 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemAudioStream::operator=(__int64 a1, __int64 a2)
{
  void **v4; // rsi
  void **v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  _OWORD *v26; // rcx
  _OWORD *v27; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v4 = (void **)(a2 + 24);
  v5 = (void **)(a1 + 24);
  if ( v5 != (void **)(a2 + 24) )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v5,
      *v4);
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  v7 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (_OWORD *)(a1 + 56);
  v11 = (_OWORD *)(a2 + 56);
  v12 = 2LL;
  v13 = 2LL;
  do
  {
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    v10[3] = v11[3];
    v10[4] = v11[4];
    v10[5] = v11[5];
    v10[6] = v11[6];
    v10 += 8;
    *(v10 - 1) = v11[7];
    v11 += 8;
    --v13;
  }
  while ( v13 );
  *v10 = *v11;
  v10[1] = v11[1];
  *((_QWORD *)v10 + 4) = *((_QWORD *)v11 + 4);
  v14 = *(_QWORD *)(a2 + 352);
  *(_QWORD *)(a2 + 352) = 0LL;
  v15 = *(_QWORD *)(a1 + 352);
  *(_QWORD *)(a1 + 352) = v14;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (_OWORD *)(a1 + 360);
  v17 = (_OWORD *)(a2 + 360);
  v18 = 2LL;
  do
  {
    *v16 = *v17;
    v16[1] = v17[1];
    v16[2] = v17[2];
    v16[3] = v17[3];
    v16[4] = v17[4];
    v16[5] = v17[5];
    v16[6] = v17[6];
    v16 += 8;
    *(v16 - 1) = v17[7];
    v17 += 8;
    --v18;
  }
  while ( v18 );
  *v16 = *v17;
  v16[1] = v17[1];
  *((_QWORD *)v16 + 4) = *((_QWORD *)v17 + 4);
  v19 = *(_QWORD *)(a2 + 656);
  *(_QWORD *)(a2 + 656) = 0LL;
  v20 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 656) = v19;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = (_OWORD *)(a1 + 664);
  v22 = (_OWORD *)(a2 + 664);
  v23 = 2LL;
  do
  {
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    v21[5] = v22[5];
    v21[6] = v22[6];
    v21 += 8;
    *(v21 - 1) = v22[7];
    v22 += 8;
    --v23;
  }
  while ( v23 );
  *v21 = *v22;
  v21[1] = v22[1];
  *((_QWORD *)v21 + 4) = *((_QWORD *)v22 + 4);
  *(_DWORD *)(a1 + 960) = *(_DWORD *)(a2 + 960);
  v24 = *(_QWORD *)(a2 + 968);
  *(_QWORD *)(a2 + 968) = 0LL;
  v25 = *(_QWORD *)(a1 + 968);
  *(_QWORD *)(a1 + 968) = v24;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  v26 = (_OWORD *)(a1 + 976);
  v27 = (_OWORD *)(a2 + 976);
  do
  {
    *v26 = *v27;
    v26[1] = v27[1];
    v26[2] = v27[2];
    v26[3] = v27[3];
    v26[4] = v27[4];
    v26[5] = v27[5];
    v26[6] = v27[6];
    v26 += 8;
    *(v26 - 1) = v27[7];
    v27 += 8;
    --v12;
  }
  while ( v12 );
  *v26 = *v27;
  v26[1] = v27[1];
  *((_QWORD *)v26 + 4) = *((_QWORD *)v27 + 4);
  *(_DWORD *)(a1 + 1272) = *(_DWORD *)(a2 + 1272);
  *(_DWORD *)(a1 + 1276) = *(_DWORD *)(a2 + 1276);
  *(_DWORD *)(a1 + 1280) = *(_DWORD *)(a2 + 1280);
  *(_DWORD *)(a1 + 1284) = *(_DWORD *)(a2 + 1284);
  return a1;
}
