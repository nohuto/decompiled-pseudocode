/*
 * XREFs of ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18012F4C0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea_____lambda_8eaa9d9bc48e0c760b532341ceadabea___ @ 0x18012F5E0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341_ea_18012F5E0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v5; // edi
  void *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+28h] BYREF
  int v13; // [rsp+88h] [rbp+30h] BYREF
  int v14; // [rsp+90h] [rbp+38h] BYREF
  APTTYPE pAptType; // [rsp+98h] [rbp+40h] BYREF

  v14 = a3;
  v13 = a2;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  v11[0] = &v13;
  v11[1] = a1;
  v11[2] = &v14;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v5 = 0;
  else
    v5 = 4;
  v12 = 0;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea_____lambda_8eaa9d9bc48e0c760b532341ceadabea___(
           v6,
           &v12,
           v11);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(v5, 32LL, CurrentThreadId, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v12;
  return (unsigned int)v8;
}
