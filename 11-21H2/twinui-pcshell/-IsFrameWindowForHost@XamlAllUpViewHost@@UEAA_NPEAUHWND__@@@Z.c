/*
 * XREFs of ?IsFrameWindowForHost@XamlAllUpViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x1804369F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall XamlAllUpViewHost::IsFrameWindowForHost(XamlAllUpViewHost *this, HWND a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  char v5; // si
  int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  HWND v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (XamlAllUpViewHost *)120));
  v5 = 1;
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v7 = *((_QWORD *)this + 26);
  v8 = *((_QWORD *)this + 27);
  while ( v7 != v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)v7 + 48LL);
    if ( v9 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64, HWND *))(*(_QWORD *)v9 + 40LL))(v9, &v11);
      if ( v11 == a2 )
        goto LABEL_7;
    }
    v7 += 8LL;
  }
  v5 = 0;
LABEL_7:
  if ( v6 >= 0 )
    LeaveCriticalSection(v4);
  return v5;
}
