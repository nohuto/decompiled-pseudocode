/*
 * XREFs of sub_1402F8AE0 @ 0x1402F8AE0
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 * Callees:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_14030F6D0 @ 0x14030F6D0 (sub_14030F6D0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

__int64 __fastcall sub_1402F8AE0(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3, _QWORD *a4, int a5)
{
  __int64 v9; // rax
  int v10; // r8d
  struct _KTHREAD *CurrentThread; // r9
  unsigned int v12; // eax
  ULONG v13; // ecx
  int v14; // eax
  ULONG v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // edi
  PETHREAD Thread; // rcx
  ULONG Flags; // eax
  PETHREAD v22; // rax
  struct _KTHREAD *v23; // rax
  __int64 v24; // rbx
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF

  if ( !a3 )
  {
    if ( dword_140D05010 )
      sub_1405C5EC8((_DWORD)a4 - 48);
    sub_14030F6D0(a4 - 6);
  }
  v9 = a4[26];
  v10 = 2;
  if ( !v9 || !*(_DWORD *)(v9 + 80) )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = (*((_DWORD *)CurrentThread + 344) >> 9) & 7;
    if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 1124LL) & 0x100000) != 0 )
    {
      v12 = 0;
    }
    else if ( v12 >= 2 )
    {
LABEL_8:
      v13 = Irp->Flags & 0xFFF1FFFF;
      v14 = (v12 << 17) + 0x20000;
      goto LABEL_9;
    }
    if ( CurrentThread == KeGetCurrentThread() && *((_DWORD *)CurrentThread + 360) )
      v12 = 2;
    goto LABEL_8;
  }
  v13 = Irp->Flags & 0xFFF1FFFF;
  Irp->Flags = v13;
  v14 = *(_DWORD *)(v9 + 80) << 17;
LABEL_9:
  v15 = v13 | v14;
  Irp->Flags = v15;
  v16 = (v15 >> 17) & 7;
  if ( !v16 || (v10 = v16 - 1, v16 - 1 >= 2) || (v22 = Irp->Tail.Overlay.Thread) == 0LL || !*((_DWORD *)v22 + 360) )
  {
    if ( v10 < 2 )
    {
      if ( Irp->RequestorMode
        || (Thread = Irp->Tail.Overlay.Thread) != 0LL
        && ((*((_DWORD *)Thread + 29) & 0x400) != 0 || (*((_DWORD *)Thread + 345) & 0x80u) != 0) )
      {
        if ( a5 )
        {
          if ( a5 == 1 )
            ++dword_140C46D88;
        }
        else
        {
          ++dword_140C46D8C;
        }
      }
      else
      {
        Flags = Irp->Flags;
        ++dword_140C46D84;
        Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
      }
    }
  }
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v17 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v17 & 2) != 0 )
  {
    v25 = *(_OWORD *)(v17 + 24);
    v23 = KeGetCurrentThread();
    v24 = *((_QWORD *)v23 + 190);
    *((_QWORD *)v23 + 190) = &v25;
    v18 = IofCallDriver(DeviceObject, Irp);
    *((_QWORD *)KeGetCurrentThread() + 190) = v24;
  }
  else
  {
    v18 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a3 )
    ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
  return v18;
}
