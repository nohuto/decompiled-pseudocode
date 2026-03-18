/*
 * XREFs of NtNotifyPresentToCompositionSurface @ 0x1C0001F10
 * Callers:
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C02E0EA4 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall NtNotifyPresentToCompositionSurface(void *a1, unsigned __int64 a2)
{
  NTSTATUS v4; // esi
  __int64 v5; // r14
  _DWORD *v6; // rdx
  _OWORD *v7; // rcx
  _OWORD *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int64 *v13; // r14
  char v14; // r8
  _QWORD *v15; // r13
  char *v16; // r15
  int v17; // r8d
  char *v18; // r13
  char *i; // rax
  int v20; // ebx
  int v21; // esi
  _QWORD *v22; // rbx
  char *v23; // rcx
  _OWORD *v25; // rax
  _OWORD *v26; // rcx
  __int64 v27; // r9
  int v28; // [rsp+20h] [rbp-8B8h]
  PVOID Object; // [rsp+28h] [rbp-8B0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-8A8h]
  void *v31; // [rsp+38h] [rbp-8A0h]
  _BYTE v32[1072]; // [rsp+40h] [rbp-898h] BYREF
  _QWORD v33[134]; // [rsp+470h] [rbp-468h] BYREF

  v31 = a1;
  v4 = 0;
  memset(v33, 0, 1064);
  Object = 0LL;
  v5 = 0LL;
  v30 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    {
      v6 = (_DWORD *)a2;
      if ( a2 + 4 < a2 || a2 + 4 > MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      if ( *v6 != 2 )
        v4 = -1073741811;
      v7 = (_OWORD *)(a2 + 16);
      if ( a2 + 1080 < a2 + 16 || a2 + 1080 > MmUserProbeAddress )
        v7 = (_OWORD *)MmUserProbeAddress;
      v8 = v32;
      v9 = 8LL;
      v10 = 8LL;
      do
      {
        *v8 = *v7;
        v8[1] = v7[1];
        v8[2] = v7[2];
        v8[3] = v7[3];
        v8[4] = v7[4];
        v8[5] = v7[5];
        v8[6] = v7[6];
        v8 += 8;
        *(v8 - 1) = v7[7];
        v7 += 8;
        --v10;
      }
      while ( v10 );
      *v8 = *v7;
      v8[1] = v7[1];
      *((_QWORD *)v8 + 4) = *((_QWORD *)v7 + 4);
      v11 = v33;
      v12 = v32;
      do
      {
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v11[4] = v12[4];
        v11[5] = v12[5];
        v11[6] = v12[6];
        v11 += 8;
        *(v11 - 1) = v12[7];
        v12 += 8;
        --v9;
      }
      while ( v9 );
      *v11 = *v12;
      v11[1] = v12[1];
      *((_QWORD *)v11 + 4) = *((_QWORD *)v12 + 4);
      v13 = (__int64 *)(a2 + 8);
      if ( a2 + 16 < a2 + 8 || a2 + 16 > MmUserProbeAddress )
        v13 = (__int64 *)MmUserProbeAddress;
      v5 = *v13;
      v30 = v5;
    }
    else
    {
      v25 = (_OWORD *)(a2 + 16);
      v26 = v33;
      v27 = 8LL;
      do
      {
        *v26 = *v25;
        v26[1] = v25[1];
        v26[2] = v25[2];
        v26[3] = v25[3];
        v26[4] = v25[4];
        v26[5] = v25[5];
        v26[6] = v25[6];
        v26 += 8;
        *(v26 - 1) = v25[7];
        v25 += 8;
        --v27;
      }
      while ( v27 );
      *v26 = *v25;
      v26[1] = v25[1];
      *((_QWORD *)v26 + 4) = *((_QWORD *)v25 + 4);
      v5 = *(_QWORD *)(a2 + 8);
      v30 = v5;
      v4 = *(_DWORD *)a2 != 2 ? 0xC000000D : 0;
    }
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    v4 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v14, (struct CompositionSurfaceObject **)&Object);
    v15 = Object;
    if ( v4 >= 0 )
    {
      v16 = 0LL;
      v4 = ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
      if ( v4 >= 0 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v15 + 6, 0LL);
        v15[7] = KeGetCurrentThread();
        v4 = 0;
        v15 = Object;
        v16 = (char *)Object + 40;
        v5 = v30;
      }
      v28 = v4;
      if ( v4 >= 0 )
      {
        v17 = -1073741275;
        v18 = 0LL;
        if ( *((_DWORD *)v16 + 22) )
        {
          for ( i = (char *)*((_QWORD *)v16 + 9); i != v16 + 72; i = *(char **)i )
          {
            if ( *((_QWORD *)i - 1) == v5 )
            {
              v18 = i - 24;
              v17 = 0;
              break;
            }
          }
        }
        if ( v17 < 0
          || (v20 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18),
              (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 24LL))(v18),
              v20 != 2)
          || !v18[40] )
        {
          v4 = -1073741811;
          v28 = -1073741811;
        }
        if ( v4 >= 0 )
        {
          v21 = 0;
          v22 = 0LL;
          if ( *((_DWORD *)v16 + 22) && *(_BYTE *)(*((_QWORD *)v16 + 9) - 24LL + 40) )
            v22 = (_QWORD *)(*((_QWORD *)v16 + 9) - 24LL);
          if ( v22 && v22[2] == v5 && (*(unsigned int (__fastcall **)(_QWORD *))(*v22 + 8LL))(v22) == 2 )
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v22 + 56LL))(v22, v33);
          else
            v21 = -1073741811;
          v28 = v21;
        }
        v23 = v16 + 8;
        if ( KeGetCurrentThread() == *((struct _KTHREAD **)v16 + 2) )
        {
          *((_QWORD *)v16 + 2) = 0LL;
          ExReleasePushLockExclusiveEx(v23, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v23, 0LL);
        }
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v16 - 40);
        v4 = v28;
        v15 = Object;
      }
      ObfDereferenceObject(v15);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
