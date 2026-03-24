/*
 * XREFs of KeyboardClassRead @ 0x1C0001AE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001480 (WPP_RECORDER_SF_qq.c)
 *     KeyboardClassReadCopyData @ 0x1C0005278 (KeyboardClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KeyboardClassRead(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // r14
  unsigned int v6; // eax
  NTSTATUS v7; // edi
  unsigned int v8; // esi
  char v9; // r15
  KIRQL v10; // r12
  __int64 **v11; // rdx
  __int64 *v12; // rcx
  __int64 *v14; // rdx
  __int64 **v15; // rax
  unsigned int CopyData; // eax
  __int64 v17; // rdx
  __int64 RemlockSize; // [rsp+20h] [rbp-48h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v4 = *(_QWORD *)(v2 + 184);
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_DWORD *)(v4 + 8);
  if ( !v6 )
  {
    v7 = 0;
    *(_DWORD *)(v2 + 48) = 0;
LABEL_33:
    *(_QWORD *)(v2 + 56) = 0LL;
    goto LABEL_34;
  }
  if ( v6 != 12 * (v6 / 0xCuLL) )
  {
    v7 = -1073741789;
LABEL_32:
    *(_DWORD *)(v2 + 48) = v7;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v5 + 363) )
  {
    v7 = -1073741667;
    goto LABEL_32;
  }
  if ( DriverEntry != *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(*(_QWORD *)(v4 + 48) + 32LL) )
  {
    v7 = -1073741727;
    goto LABEL_32;
  }
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, File, 1u, 0x20u);
  v8 = 259;
  if ( v7 >= 0 )
    v7 = 259;
  *(_DWORD *)(v2 + 48) = v7;
  *(_QWORD *)(v2 + 56) = 0LL;
  if ( v7 == 259 )
  {
    v9 = 0;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 160));
    if ( *(_DWORD *)(v5 + 84) )
    {
      CopyData = KeyboardClassReadCopyData(v5, v2);
      *(_DWORD *)(v2 + 48) = CopyData;
      v8 = CopyData;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 160), v10);
      goto LABEL_30;
    }
    v11 = *(__int64 ***)(v5 + 176);
    v12 = (__int64 *)(v2 + 168);
    if ( *v11 == (__int64 *)(v5 + 168) )
    {
      *v12 = v5 + 168;
      *(_QWORD *)(v2 + 176) = v11;
      *v11 = v12;
      *(_QWORD *)(v5 + 176) = v12;
      _InterlockedExchange64((volatile __int64 *)(v2 + 104), (__int64)KeyboardClassCancel);
      if ( !*(_BYTE *)(v2 + 68) )
      {
LABEL_14:
        *(_BYTE *)(*(_QWORD *)(v2 + 184) + 3LL) |= 1u;
        goto LABEL_15;
      }
      if ( !_InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, 3u, 0x30u, RemlockSize);
        goto LABEL_14;
      }
      v14 = (__int64 *)*v12;
      if ( *(__int64 **)(*v12 + 8) == v12 )
      {
        v15 = *(__int64 ***)(v2 + 176);
        if ( *v15 == v12 )
        {
          *v15 = v14;
          v8 = -1073741536;
          v14[1] = (__int64)v15;
          *(_DWORD *)(v2 + 48) = -1073741536;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, 3u, 0x2Fu, RemlockSize);
          v9 = 1;
LABEL_15:
          KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 160), v10);
          if ( !v9 )
            return v8;
LABEL_30:
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, 0x20u);
          IofCompleteRequest((PIRP)v2, 0);
          return v8;
        }
      }
    }
    __fastfail(3u);
  }
LABEL_34:
  IofCompleteRequest((PIRP)v2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v17, 3LL);
  }
  return (unsigned int)v7;
}
