/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C011190C
 * Callers:
 *     EditionParseDesktop @ 0x1C0079050 (EditionParseDesktop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     DesktopAlloc @ 0x1C00C2D40 (DesktopAlloc.c)
 *     CreateDesktopHeap @ 0x1C0111C58 (CreateDesktopHeap.c)
 *     GetDesktopHeapSize @ 0x1C0111D80 (GetDesktopHeapSize.c)
 */

__int64 __fastcall xxxCreateDesktopEx2(
        struct tagWINDOWSTATION *a1,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5,
        void **a6)
{
  unsigned __int16 v9; // si
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  __int64 result; // rax
  PVOID v15; // rax
  unsigned int DesktopHeapSize; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 DesktopHeap; // rax
  PVOID v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  PVOID v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // [rsp+40h] [rbp-20h]
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h] BYREF

  Object = 0LL;
  v31 = 0;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(a1, 8LL, a2) )
    return v31;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12, v11);
  if ( (*((_DWORD *)a1 + 16) & 2) != 0 && PsGetProcessId(CurrentProcess) != (HANDLE)gpidLogon )
  {
    v33 = 0LL;
    GetProcessLuid(0LL, &v33);
    if ( v33 == *((_QWORD *)a1 + 22) )
      return 3221226091LL;
  }
  result = CreateDesktopObObject(a4, a1, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      v9 = 3;
    }
    else
    {
      v15 = (PVOID)*((_QWORD *)a1 + 2);
      if ( v15 )
      {
        if ( gspdeskDisconnect )
        {
          if ( v15 == gspdeskDisconnect )
            v10 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      else
      {
        v9 = 1;
      }
    }
    if ( a5 )
      DesktopHeapSize = a5 << 10;
    else
      DesktopHeapSize = GetDesktopHeapSize(v9);
    CurrentThread = KeGetCurrentThread();
    if ( DesktopHeapSize < 0x2000 )
      DesktopHeapSize = 0x2000;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
    *(_DWORD *)(ThreadWin32Thread + 1256) |= 0x40u;
    DesktopHeap = CreateDesktopHeap((char *)Object + 128, DesktopHeapSize);
    *((_QWORD *)Object + 15) = DesktopHeap;
    if ( *((_QWORD *)Object + 15) )
    {
      *((_DWORD *)Object + 34) = DesktopHeapSize;
      v20 = DesktopAlloc((__int64)Object, 0x48u);
      if ( v20 )
      {
        v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_DWORD *)(v21 + 1256) &= ~0x40u;
        v22 = (_QWORD *)Win32AllocPoolZInit(256LL, 1684763477LL);
        if ( v22 )
        {
          *v22 = v20;
          *((_QWORD *)Object + 1) = v22;
          v23 = (char *)Object + 168;
          v24 = ++gdwDesktopId;
          *((_QWORD *)Object + 22) = (char *)Object + 168;
          *v23 = v23;
          v25 = (char *)Object + 304;
          *((_QWORD *)Object + 39) = (char *)Object + 304;
          *v25 = v25;
          if ( v24 == 0xFFFFFFFFLL )
          {
            gdwDesktopId = 1LL;
            LODWORD(v24) = 1;
          }
          ***((_QWORD ***)Object + 1) = (unsigned int)v24 | ((gCookie ^ (unsigned __int64)Object) << 32);
          v26 = *((_QWORD *)Object + 16);
          *((_QWORD *)Object + 2) = v26;
          *((_QWORD *)Object + 3) = v26 + DesktopHeapSize;
          LockObjectAssignment((char *)Object + 40, a1);
          if ( !*((_QWORD *)a1 + 2) )
          {
            if ( (*((_DWORD *)a1 + 16) & 4) == 0 )
              LockObjectAssignment(&grpdeskLogon, Object);
            LockObjectAssignment(*(_QWORD *)(*((_QWORD *)a1 + 7) + 8LL) + 24LL, Object);
          }
          LockObjectAssignment((char *)Object + 32, *((_QWORD *)a1 + 2));
          LockObjectAssignment((char *)a1 + 16, Object);
          p_RemainingDesiredAccess = &a2->RemainingDesiredAccess;
          RemainingDesiredAccess = a2->RemainingDesiredAccess;
          if ( (RemainingDesiredAccess & 0x2000000) != 0 )
            *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
          RtlMapGenericMask(&a2->RemainingDesiredAccess, DesktopMapping);
          v29 = Object;
          *p_RemainingDesiredAccess &= DesktopMapping->GenericAll | 0x1000000;
          *a6 = v29;
          if ( v10 )
            LockObjectAssignment(grpdeskIODefault, v29);
          return 0LL;
        }
        RtlFreeHeap(*((PVOID *)Object + 16), 0, v20);
      }
    }
    else if ( (*gpsi & 0x100) != 0 )
    {
      _InterlockedAnd(gpsi, 0xFFFFFEFF);
      UserLogError(2147483892LL);
    }
    v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_DWORD *)(v30 + 1256) &= ~0x40u;
    v31 = -1073741801;
    ObfDereferenceObject(Object);
    return v31;
  }
  return result;
}
