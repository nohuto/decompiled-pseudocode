/*
 * XREFs of ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18000AEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1801119B4 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeClientNotification(CVolumeStrip *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // r8
  _DWORD *i; // rdx
  bool v7; // zf
  _DWORD *j; // rcx
  _QWORD *v10; // rcx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17LL,
      &WPP_3a53c1b98d243e7fdf5f1bbdfd5ff184_Traceguids,
      (char *)this - 8,
      a2);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection(v4);
  v5 = *(_QWORD **)&v4[1].LockCount;
  for ( i = &v4[1].DebugInfo->Type; i != (_DWORD *)v5; i += 2 )
  {
    if ( *i == a2 )
    {
      v7 = i[1]-- == 1;
      if ( v7 )
        break;
    }
  }
  if ( i != (_DWORD *)v5 )
  {
    for ( j = i + 2; j != (_DWORD *)v5; j += 2 )
    {
      if ( *j == a2 )
      {
        v7 = j[1]-- == 1;
        if ( v7 )
          continue;
      }
      *(_QWORD *)i = *(_QWORD *)j;
      i += 2;
    }
    if ( i != (_DWORD *)v5 )
    {
      v10 = *(_QWORD **)&v4[1].LockCount;
      while ( v5 != v10 )
      {
        *(_QWORD *)i = *v5;
        i += 2;
        ++v5;
      }
      *(_QWORD *)&v4[1].LockCount = i;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
