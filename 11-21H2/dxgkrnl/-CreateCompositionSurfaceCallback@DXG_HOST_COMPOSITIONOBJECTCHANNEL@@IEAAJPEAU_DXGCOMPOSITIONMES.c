/*
 * XREFs of ?CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DF1F4
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02E0840 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x1C0077B14 (-Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CreateCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_CREATECOMPOSITIONSURFACE_RETURN *a3,
        __int64 a4)
{
  struct CompositionSurfaceObject *v6; // rdi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  HANDLE v16; // rdi
  __int64 CurrentProcess; // rax
  int v18; // eax
  int v19; // eax
  struct _KPROCESS *v20; // rdx
  struct CompositionSurfaceObject *v22; // [rsp+50h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-51h] BYREF
  HANDLE v24; // [rsp+60h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES v25; // [rsp+68h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-11h] BYREF
  char v27; // [rsp+C8h] [rbp+1Fh]

  v25.SecurityDescriptor = (PVOID)*((_QWORD *)this + 6);
  v24 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v25.Length = 48LL;
  v22 = 0LL;
  v6 = 0LL;
  memset(&v25.RootDirectory, 0, 24);
  v25.SecurityQualityOfService = 0LL;
  v7 = CompositionSurfaceObject::Create(0LL, &v25, 3u, a4, &v24);
  LODWORD(v9) = v7;
  if ( v7 >= 0 )
  {
    v10 = CompositionSurfaceObject::ResolveHandle(v24, 2u, v8, &v22);
    v9 = v10;
    if ( v10 >= 0
      && (v15 = *((_QWORD *)this + 4),
          v16 = v24,
          CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14),
          v18 = ObDuplicateObject(CurrentProcess, v16, v15, &Handle, 0, 0, 6, 1),
          v9 = v18,
          v18 >= 0) )
    {
      v6 = v22;
      v19 = (*(__int64 (__fastcall **)(_QWORD, struct CompositionSurfaceObject *, __int64))(**((_QWORD **)this + 1)
                                                                                          + 56LL))(
              *((_QWORD *)this + 1),
              v22,
              17LL);
      if ( v19 )
      {
        *((_DWORD *)a3 + 3) = v19;
        v6 = 0LL;
        *((_QWORD *)a3 + 2) = Handle;
        goto LABEL_12;
      }
      LODWORD(v9) = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"AllocateHandle failed. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(3LL, v9);
      v6 = v22;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v7);
  }
  if ( Handle )
  {
    v20 = (struct _KPROCESS *)*((_QWORD *)this + 4);
    v27 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v20);
    ObCloseHandle(Handle, 1);
    if ( v27 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_12:
  if ( v24 )
    ObCloseHandle(v24, 1);
  if ( v6 )
    DxgkCompositionObject::Release(v6);
  *((_DWORD *)a3 + 1) = v9;
  return (unsigned int)v9;
}
