/*
 * XREFs of sub_180061A10 @ 0x180061A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0 @ 0x180063C78 (-GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 *     sub_18007EDF4 @ 0x18007EDF4 (sub_18007EDF4.c)
 *     sub_18007EEFC @ 0x18007EEFC (sub_18007EEFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180061A10(__int64 a1, _QWORD *a2)
{
  unsigned int Id; // eax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r8d
  const char *v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v28[16]; // [rsp+70h] [rbp-10h] BYREF

  Id = Concurrency::details::UMSThreadProxy::GetId((Concurrency::details::UMSThreadProxy *)a1);
  v7 = Id;
  if ( Id == 1 )
  {
    if ( (*(_DWORD *)(v6 + 440) & 0x100) != 0 )
      v7 = (unsigned int)((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 280LL))(*v5) != 0) + 2;
    if ( (*(_DWORD *)(a1 + 440) & 0x200) != 0 )
      goto LABEL_13;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 32LL))(*a2, v28);
    sub_18006558C(a1, v21);
    v22 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v28);
    sub_180065394(a1, v22);
    return;
  }
  v7 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v7 )
  {
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
    v16 = v15[1];
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v16 = v15[1];
    }
    v17 = (_QWORD *)*v15;
    v25[0] = v17;
    v25[1] = v16;
    v18 = v17 + 57;
    v19 = v17[58];
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v19 = v17[58];
      v17 = (_QWORD *)v25[0];
    }
    v23[0] = *v18;
    v23[1] = v19;
    sub_18006558C(a1, v23);
    v20 = v17[60];
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v20 = v17[60];
    }
    v24[0] = v17[59];
    v24[1] = v20;
    sub_180065394(a1, v24);
    v14 = v25;
    goto LABEL_16;
  }
  if ( (_DWORD)v7 == 1 )
  {
LABEL_13:
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(*(_QWORD *)*a2 + 152LL))(*a2, v5, v7);
    v11 = v10[1];
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = v10[1];
    }
    v26[0] = *v10;
    v26[1] = v11;
    v12 = sub_18007EEFC(v26[0], v27, 2LL);
    sub_18006558C(a1, v12);
    v13 = sub_18007EDF4(v26[0], v28, 2LL);
    sub_180065394(a1, v13);
    v14 = v26;
LABEL_16:
    sub_180010910((__int64)v14);
    return;
  }
  if ( !*(_QWORD *)(a1 + 136) && !*(_QWORD *)(a1 + 152) )
  {
    v9 = (const char *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v9 = *(const char **)v9;
    sub_18001F2B4(
      &stru_1801EA388,
      4,
      "Warning: camera '%s' not bound to any render target or depth buffer -- no pixels will be rendered",
      v9);
  }
}
