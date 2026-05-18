/*
 * XREFs of sub_180059FD0 @ 0x180059FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0 @ 0x18005BB18 (-GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 *     sub_1800733F4 @ 0x1800733F4 (sub_1800733F4.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180059FD0(__int64 a1, _QWORD *a2)
{
  unsigned int Id; // eax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r8d
  const char *v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF

  Id = Concurrency::details::UMSThreadProxy::GetId((Concurrency::details::UMSThreadProxy *)a1);
  v7 = Id;
  if ( Id == 1 )
  {
    if ( (*(_DWORD *)(v6 + 440) & 0x100) != 0 )
      v7 = (unsigned int)((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 280LL))(*v5) != 0) + 2;
    if ( (*(_DWORD *)(a1 + 440) & 0x200) != 0 )
    {
LABEL_13:
      v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(*(_QWORD *)*a2 + 152LL))(*a2, v5, v7);
      sub_18001246C(v19, v10);
      v11 = sub_1800734B8(v19[0], v20, 2LL);
      sub_18005D26C(a1, v11);
      v12 = sub_1800733F4(v19[0], v20, 2LL);
      sub_18005D0B8(a1, v12);
      v13 = v19[1];
      goto LABEL_14;
    }
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a2 + 32LL))(*a2, v20);
    sub_18005D26C(a1, v17);
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a2 + 40LL))(*a2, v20);
    sub_18005D0B8(a1, v18);
    return;
  }
  v7 = (unsigned int)(v8 - 1);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      if ( !*(_QWORD *)(a1 + 136) && !*(_QWORD *)(a1 + 152) )
      {
        v9 = (const char *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
          v9 = *(const char **)v9;
        sub_18001DB68(
          &stru_1801C8388,
          4,
          "Warning: camera '%s' not bound to any render target or depth buffer -- no pixels will be rendered",
          v9);
      }
      return;
    }
    goto LABEL_13;
  }
  v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
  sub_18001246C(v20, v14);
  v15 = v20[0];
  v16 = sub_18001246C(v19, (_QWORD *)(v20[0] + 456LL));
  sub_18005D26C(a1, v16);
  sub_18001246C(v19, (_QWORD *)(v15 + 472));
  sub_18005D0B8(a1, v19);
  v13 = v20[1];
LABEL_14:
  if ( v13 )
    sub_180010530(v13);
}
