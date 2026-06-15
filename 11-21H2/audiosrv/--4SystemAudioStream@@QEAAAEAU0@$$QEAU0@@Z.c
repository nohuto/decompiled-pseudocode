/*
 * XREFs of ??4SystemAudioStream@@QEAAAEAU0@$$QEAU0@@Z @ 0x1800F7600
 * Callers:
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180040570 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z @ 0x1800F7FC0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DAB0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x1800E5F3C (-attach@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemAudioStream::operator=(__int64 a1, __int64 a2)
{
  void **v4; // rsi
  void **v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _OWORD *v25; // rcx
  _OWORD *v26; // rax

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
  wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach((__int64 *)(a1 + 40), v6);
  v7 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (_OWORD *)(a1 + 56);
  v10 = (_OWORD *)(a2 + 56);
  v11 = 2LL;
  v12 = 2LL;
  do
  {
    *v9 = *v10;
    v9[1] = v10[1];
    v9[2] = v10[2];
    v9[3] = v10[3];
    v9[4] = v10[4];
    v9[5] = v10[5];
    v9[6] = v10[6];
    v9 += 8;
    *(v9 - 1) = v10[7];
    v10 += 8;
    --v12;
  }
  while ( v12 );
  *v9 = *v10;
  v9[1] = v10[1];
  *((_QWORD *)v9 + 4) = *((_QWORD *)v10 + 4);
  v13 = *(_QWORD *)(a2 + 352);
  *(_QWORD *)(a2 + 352) = 0LL;
  v14 = *(_QWORD *)(a1 + 352);
  *(_QWORD *)(a1 + 352) = v13;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = (_OWORD *)(a1 + 360);
  v16 = (_OWORD *)(a2 + 360);
  v17 = 2LL;
  do
  {
    *v15 = *v16;
    v15[1] = v16[1];
    v15[2] = v16[2];
    v15[3] = v16[3];
    v15[4] = v16[4];
    v15[5] = v16[5];
    v15[6] = v16[6];
    v15 += 8;
    *(v15 - 1) = v16[7];
    v16 += 8;
    --v17;
  }
  while ( v17 );
  *v15 = *v16;
  v15[1] = v16[1];
  *((_QWORD *)v15 + 4) = *((_QWORD *)v16 + 4);
  v18 = *(_QWORD *)(a2 + 656);
  *(_QWORD *)(a2 + 656) = 0LL;
  v19 = *(_QWORD *)(a1 + 656);
  *(_QWORD *)(a1 + 656) = v18;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = (_OWORD *)(a1 + 664);
  v21 = (_OWORD *)(a2 + 664);
  v22 = 2LL;
  do
  {
    *v20 = *v21;
    v20[1] = v21[1];
    v20[2] = v21[2];
    v20[3] = v21[3];
    v20[4] = v21[4];
    v20[5] = v21[5];
    v20[6] = v21[6];
    v20 += 8;
    *(v20 - 1) = v21[7];
    v21 += 8;
    --v22;
  }
  while ( v22 );
  *v20 = *v21;
  v20[1] = v21[1];
  *((_QWORD *)v20 + 4) = *((_QWORD *)v21 + 4);
  *(_DWORD *)(a1 + 960) = *(_DWORD *)(a2 + 960);
  v23 = *(_QWORD *)(a2 + 968);
  *(_QWORD *)(a2 + 968) = 0LL;
  v24 = *(_QWORD *)(a1 + 968);
  *(_QWORD *)(a1 + 968) = v23;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v25 = (_OWORD *)(a1 + 976);
  v26 = (_OWORD *)(a2 + 976);
  do
  {
    *v25 = *v26;
    v25[1] = v26[1];
    v25[2] = v26[2];
    v25[3] = v26[3];
    v25[4] = v26[4];
    v25[5] = v26[5];
    v25[6] = v26[6];
    v25 += 8;
    *(v25 - 1) = v26[7];
    v26 += 8;
    --v11;
  }
  while ( v11 );
  *v25 = *v26;
  v25[1] = v26[1];
  *((_QWORD *)v25 + 4) = *((_QWORD *)v26 + 4);
  *(_DWORD *)(a1 + 1272) = *(_DWORD *)(a2 + 1272);
  *(_DWORD *)(a1 + 1276) = *(_DWORD *)(a2 + 1276);
  *(_DWORD *)(a1 + 1280) = *(_DWORD *)(a2 + 1280);
  return a1;
}
