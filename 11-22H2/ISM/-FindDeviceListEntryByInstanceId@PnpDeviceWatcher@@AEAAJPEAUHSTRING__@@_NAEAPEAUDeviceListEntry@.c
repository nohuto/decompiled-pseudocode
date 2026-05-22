/*
 * XREFs of ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18001BF80
 * Callers:
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18001D058 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x180063A48 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800F8ED8 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
        PnpDeviceWatcher *this,
        HSTRING a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v8; // rdi
  char *i; // rbx
  int v10; // ebx
  bool v12; // r14
  bool v13; // si
  RefCountedObject *v14; // rbx
  __int128 v15; // xmm0
  char *v16; // rax
  char *v17; // rax
  char v18; // bp
  void *v19; // rax
  RefCountedObject *v20; // rcx
  char **v21; // rdx
  RefCountedObject *v22[2]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); i != v8; i = *(char **)i )
  {
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), a2) )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  if ( !a3 )
    return 1LL;
  v22[0] = 0LL;
  v10 = PnpDevice::MakeAndInitialize(a2, this, v22);
  if ( v10 < 0 )
  {
    if ( v22[0] )
      RefCountedObject::Release(v22[0]);
    return (unsigned int)v10;
  }
  v14 = v22[0];
  v15 = *(_OWORD *)((char *)v22[0] + 56);
  *(_OWORD *)v22 = v15;
  v16 = (char *)(v15 - 0x11D074D3745A17A0LL);
  if ( (_QWORD)v15 == 0x11D074D3745A17A0LL )
    v16 = (char *)v22[1] + 0x25A8F0365FFF014ALL;
  if ( !v16 )
    goto LABEL_25;
  *(_OWORD *)v22 = v15;
  v17 = (char *)(v15 - 0x4647CD8BE0CBF06CLL);
  if ( (_QWORD)v15 == 0x4647CD8BE0CBF06CLL )
    v17 = (char *)v22[1] - 0x74F9F0433B268ABBLL;
  if ( v17 )
    v18 = 0;
  else
LABEL_25:
    v18 = 1;
  v12 = *((_WORD *)v14 + 60) == 89 && *((_WORD *)v14 + 61) == 1;
  v13 = 0;
  if ( IsEdition(0x1820uLL) && *((_WORD *)v14 + 60) == 12 )
    v13 = *((_WORD *)v14 + 61) == 1;
  if ( !v18 || !v12 && !v13 )
  {
    RefCountedObject::Release(v14);
    return 1LL;
  }
  v19 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v19 )
  {
    *(_QWORD *)v19 = 0LL;
    *((_QWORD *)v19 + 1) = 0LL;
    *((_QWORD *)v19 + 3) = 0LL;
    *((_QWORD *)v19 + 2) = 0LL;
    v20 = (RefCountedObject *)*((_QWORD *)v19 + 2);
    *((_QWORD *)v19 + 2) = v14;
    *((_BYTE *)v19 + 24) = 0;
    v21 = (char **)*((_QWORD *)v8 + 1);
    if ( *v21 != v8 )
      __fastfail(3u);
    *(_QWORD *)v19 = v8;
    *((_QWORD *)v19 + 1) = v21;
    *v21 = (char *)v19;
    *((_QWORD *)v8 + 1) = v19;
    ++*((_QWORD *)v8 + 2);
    *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)v19;
    if ( v20 )
      RefCountedObject::Release(v20);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x197,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
      (const char *)0x8007000ELL,
      (int)v22[0]);
    RefCountedObject::Release(v14);
    return 2147942414LL;
  }
}
