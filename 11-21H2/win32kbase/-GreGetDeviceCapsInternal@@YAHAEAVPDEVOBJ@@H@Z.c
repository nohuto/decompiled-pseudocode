/*
 * XREFs of ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C002E448
 * Callers:
 *     NtGdiGetDeviceCaps @ 0x1C002E300 (NtGdiGetDeviceCaps.c)
 *     GreGetDeviceCaps @ 0x1C00642D0 (GreGetDeviceCaps.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002EB00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     EngMulDiv @ 0x1C006E450 (EngMulDiv.c)
 *     IsGetColorManagementCapsSupported @ 0x1C0078F64 (IsGetColorManagementCapsSupported.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0078F90 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetDeviceCapsInternal(struct PDEVOBJ *a1, int a2)
{
  unsigned int *v2; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  _QWORD *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v14; // ebp
  __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  __int64 v26; // rcx

  v2 = (unsigned int *)(*(_QWORD *)a1 + 2104LL);
  v5 = 0;
  v6 = 18;
  if ( a2 <= 36 )
  {
    if ( a2 == 36 )
      return 1;
    if ( a2 > 16 )
    {
      if ( a2 != 18 )
      {
        switch ( a2 )
        {
          case 20:
            return 0;
          case 24:
            return *(unsigned int *)(*(_QWORD *)a1 + 2136LL);
          case 22:
            return PDEVOBJ::cFonts(a1);
          case 26:
            return 0;
          case 28:
            return 511;
          case 30:
            return 254;
          case 32:
            return 255;
          case 34:
            v23 = *(_DWORD *)(*(_QWORD *)a1 + 2152LL);
            v24 = v2[12] | 0x4000;
            if ( !v2[1] )
              v24 = v23;
            return v24 | 0x1800u;
        }
        goto LABEL_114;
      }
      v25 = *(_DWORD *)(*(_QWORD *)a1 + 2136LL);
      if ( v25 != -1 )
        return (unsigned int)(5 * v25);
    }
    else if ( a2 != 16 )
    {
      if ( a2 <= 6 )
      {
        switch ( a2 )
        {
          case 6:
            v18 = *(_DWORD *)(*(_QWORD *)a1 + 2116LL);
            break;
          case -2147483648:
            return *(unsigned int *)(*(_QWORD *)a1 + 2112LL);
          case -2147483646:
            return *(unsigned int *)(*(_QWORD *)a1 + 2116LL);
          case 0:
            return *v2;
          case 2:
            return *(unsigned int *)(*(_QWORD *)a1 + 2108LL);
          case 4:
            v18 = *(_DWORD *)(*(_QWORD *)a1 + 2112LL);
            break;
          default:
            goto LABEL_114;
        }
        return (v18 + 500) / 0x3E8u;
      }
      switch ( a2 )
      {
        case 8:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2120LL);
          break;
        case 10:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2124LL);
          break;
        case 12:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2128LL);
          if ( v5 == 15 )
            return 16;
          return v5;
        case 14:
          return *(unsigned int *)(*(_QWORD *)a1 + 2132LL);
        default:
          goto LABEL_114;
      }
      goto LABEL_12;
    }
    return (unsigned int)-1;
  }
  if ( a2 > 110 )
  {
    switch ( a2 )
    {
      case 'o':
        return *(unsigned int *)(*(_QWORD *)a1 + 2204LL);
      case 'p':
        return *(unsigned int *)(*(_QWORD *)a1 + 2192LL);
      case 'q':
        return *(unsigned int *)(*(_QWORD *)a1 + 2196LL);
      case 't':
        return *(unsigned int *)(*(_QWORD *)a1 + 2352LL);
      case 'u':
        return *(unsigned int *)(*(_QWORD *)a1 + 2124LL);
      case 'v':
        return *(unsigned int *)(*(_QWORD *)a1 + 2120LL);
      case 'w':
        return *(unsigned int *)(*(_QWORD *)a1 + 2356LL);
      case 'x':
        return *(unsigned int *)(*(_QWORD *)a1 + 2408LL);
    }
    if ( a2 == 121 && (int)IsGetColorManagementCapsSupported() >= 0 && qword_1C029AFD0 )
      qword_1C029AFD0(*(_QWORD *)a1);
    goto LABEL_114;
  }
  if ( a2 == 110 )
    return *(unsigned int *)(*(_QWORD *)a1 + 2200LL);
  if ( a2 != 90 )
  {
    if ( a2 > 90 )
    {
      switch ( a2 )
      {
        case '^':
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v22 = *(_QWORD *)(*(_QWORD *)a1 + 2552LL);
          if ( ((v22 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
          {
            v5 = (*(_DWORD *)(v22 + 160) & 8) << 11;
            if ( (*(_DWORD *)(v22 + 160) & 0x2000000) != 0 )
              v5 |= 0x8000u;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          return v5;
        case 'h':
          return *(unsigned int *)(*(_QWORD *)a1 + 2208LL);
        case 'j':
          return 20;
        case 'l':
          return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 2156LL)
                              + *(_DWORD *)(*(_QWORD *)a1 + 2160LL)
                              + *(_DWORD *)(*(_QWORD *)a1 + 2164LL));
      }
    }
    else
    {
      switch ( a2 )
      {
        case '(':
          return *(unsigned int *)(*(_QWORD *)a1 + 2168LL);
        case '*':
          return *(unsigned int *)(*(_QWORD *)a1 + 2172LL);
        case '&':
          return *(unsigned int *)(*(_QWORD *)a1 + 2140LL);
        case ',':
          return *(unsigned int *)(*(_QWORD *)a1 + 2176LL);
        case 'X':
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2144LL);
          goto LABEL_12;
      }
    }
LABEL_114:
    v5 = 0;
    if ( a2 != 8 && a2 != 10 && a2 != 88 && a2 != 90 )
      return v5;
    goto LABEL_12;
  }
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 2148LL);
LABEL_12:
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) != 0 )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v12 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v12 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v12 + 340) )
        {
          v6 = *(_DWORD *)(v12 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10, v11);
          if ( CurrentProcessWin32Process )
            v6 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
    v14 = (v6 >> 8) & 0x1FF;
    if ( !v14 )
    {
      v14 = v2[11];
      v16 = PsGetCurrentProcessWin32Process(v9, v8, v10, v11);
      if ( v16 )
      {
        v17 = *(unsigned __int16 *)(v16 + 284);
        if ( (_WORD)v17 )
          v14 = v17;
      }
    }
    if ( ((a2 - 88) & 0xFFFFFFFD) == 0 )
      return v14;
    if ( (v6 & 0xF) == 2 )
      return v5;
    v19 = *(_QWORD *)a1;
    v20 = *(_DWORD *)(*(_QWORD *)a1 + 2432LL);
    if ( !v20
      && ((*(_DWORD *)(v19 + 40) & 0x20000) == 0
       || (v26 = *(_QWORD *)(*(_QWORD *)(v19 + 1768) + 40LL)) == 0
       || (*(_DWORD *)(v26 + 40) & 1) == 0
       || (v20 = *(_DWORD *)(v26 + 2432)) == 0) )
    {
      v20 = 100;
    }
    return (unsigned int)EngMulDiv(v5, v14, (96 * v20 + 50) / 0x64u);
  }
  return v5;
}
