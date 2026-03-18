/*
 * XREFs of zzzDwmStartRedirection @ 0x1C0098F14
 * Callers:
 *     NtUserDwmKernelStartup @ 0x1C0121980 (NtUserDwmKernelStartup.c)
 * Callees:
 *     CreateOrGetRedirectionBitmap @ 0x1C001F528 (CreateOrGetRedirectionBitmap.c)
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 *     DwmAsyncDesktopFree @ 0x1C0098654 (DwmAsyncDesktopFree.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C00986F4 (DwmNotifyChildrenAddRemove.c)
 *     DwmAsyncDesktopCreate @ 0x1C0099104 (DwmAsyncDesktopCreate.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     _GetProcessWindowStation @ 0x1C00CEC40 (_GetProcessWindowStation.c)
 *     GreDwmStartup @ 0x1C00D3840 (GreDwmStartup.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     GreDwmShutdown @ 0x1C011FFD8 (GreDwmShutdown.c)
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 */

__int64 zzzDwmStartRedirection()
{
  __int64 ProcessWindowStation; // rdi
  int RedirectionBitmap; // r14d
  __int64 i; // rsi
  void *v3; // rax
  __int64 j; // rbx
  void *v5; // rbx
  __int64 k; // rsi
  __int64 v8; // rbx
  void *v9; // rax
  __int64 v10; // rdx
  __int64 m; // rbx
  __int64 v12; // rdx
  _OWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+48h] [rbp-8h]
  HSURF v16; // [rsp+80h] [rbp+30h] BYREF

  v16 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() || (*(_DWORD *)(ProcessWindowStation + 64) & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    RedirectionBitmap = CreateOrGetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 1, 0, &v16);
    if ( RedirectionBitmap >= 0 )
    {
      *(_QWORD *)(ProcessWindowStation + 120) = v16;
      if ( grpdeskRitInput )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v3 = (void *)ReferenceDwmApiPort();
          DwmAsyncDesktopCreate(v3);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 1);
        }
      }
      if ( gfade[2] )
        StopFade();
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
      if ( (unsigned int)GreDwmStartup(*(_QWORD *)(gpDispInfo + 40LL)) )
      {
        zzzEnableDwmPointerSupport(1u, 0);
        if ( grpdeskRitInput )
        {
          for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              for ( k = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); k; k = *(_QWORD *)(k + 32) )
              {
                zzzDecomposeDesktop((struct tagDESKTOP *)k);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k, 0);
                v8 = ***(_QWORD ***)(k + 8);
                v9 = (void *)ReferenceDwmApiPort();
                DwmAsyncDesktopFree(v9, v8);
              }
              v10 = *(_QWORD *)(ProcessWindowStation + 120);
              if ( v10 )
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v10, 1LL);
              GreDwmShutdown(*(_QWORD *)(gpDispInfo + 40LL));
              bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
              break;
            }
          }
        }
        v5 = (void *)ReferenceDwmApiPort();
        if ( v5 )
        {
          v15 = 1073741896;
          v14 = 0LL;
          memset(v13, 0, sizeof(v13));
          LODWORD(v13[0]) = 2883588;
          WORD2(v13[0]) = 0x8000;
          LpcRequestPort(v5, v13);
          ObfDereferenceObject(v5);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 64) |= 0x200u;
      }
      else
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
        if ( grpdeskRitInput )
        {
          for ( m = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m, 0);
        }
        v12 = *(_QWORD *)(ProcessWindowStation + 120);
        if ( v12 )
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), v12, 1LL);
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
