/*
 * XREFs of ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800CFBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800CF7E0 (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800CFDE4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800D1D1C (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcClientConnection(_QWORD *a1, struct ISIPCServer *a2, int a3)
{
  char *v3; // rdi
  char *i; // rax
  _QWORD *v8; // rax
  char **v9; // rbx
  struct LampArrayEndpoint *v10; // r14
  char **v11; // rax
  __int64 ***v12; // rdi
  __int64 **j; // rbx
  __int64 **k; // rbx

  v3 = (char *)(a1 + 9);
  for ( i = (char *)a1[9]; i != v3; i = *(char **)i )
  {
    if ( *((_DWORD *)i + 6) == a3 )
      return;
  }
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = (char **)v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v10 = (struct LampArrayEndpoint *)(v8 + 2);
    v8[1] = 0LL;
    v8[3] = 0LL;
    v8[2] = 0LL;
    if ( (*(int (__fastcall **)(struct ISIPCServer *, _QWORD, void *, _QWORD *, _QWORD *))(*(_QWORD *)a2 + 24LL))(
           a2,
           *((unsigned int *)a1 + 16),
           &LampArrayRawInputProvider::OnSipcEndpointStatus,
           a1,
           v8 + 2) < 0 )
    {
      LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'((LampArrayRawInputProvider::LampArrayClientListEntry *)v9);
    }
    else
    {
      *((_DWORD *)v9 + 6) = a3;
      v11 = (char **)*((_QWORD *)v3 + 1);
      if ( *v11 != v3 )
        __fastfail(3u);
      *v9 = v3;
      v9[1] = (char *)v11;
      *v11 = (char *)v9;
      ++*((_QWORD *)v3 + 2);
      *((_QWORD *)v3 + 1) = v9;
      v12 = (__int64 ***)(a1 + 6);
      for ( j = (__int64 **)a1[6]; j != (__int64 **)v12; j = (__int64 **)*j )
        LampArrayDevice::AddViewClient((LampArrayDevice *)j[2], v10);
      if ( a3 == *((_DWORD *)a1 + 10) )
      {
        for ( k = *v12; k != (__int64 **)v12; k = (__int64 **)*k )
          LampArrayRawInputProvider::SetActiveViewClient(
            (LampArrayRawInputProvider *)a1,
            (struct LampArrayDevice *)k[2],
            v10);
      }
    }
  }
}
