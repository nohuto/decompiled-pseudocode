/*
 * XREFs of PiDrvDbQuerySyncNodesUpdated @ 0x140970D90
 * Callers:
 *     PpDevCfgInit @ 0x140B43330 (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5480 (RtlGetPersistedStateLocation.c)
 *     _RegRtlQueryValue @ 0x1406CE918 (_RegRtlQueryValue.c)
 *     _PnpGetObjectProperty @ 0x1406D02A0 (_PnpGetObjectProperty.c)
 *     _PnpCtxRegCreateTree @ 0x140797E74 (_PnpCtxRegCreateTree.c)
 *     _RegRtlSetValue @ 0x1407D4F54 (_RegRtlSetValue.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDrvDbQuerySyncNodesUpdated(char a1, char *a2)
{
  char v3; // r12
  __int64 BufferLengthIn; // rsi
  NTSTATUS PersistedStateLocation; // eax
  int Tree; // ebx
  WCHAR *TargetPath; // rdi
  __int64 i; // rsi
  const WCHAR *v11; // rdx
  int v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+64h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h]
  __int64 Source2; // [rsp+70h] [rbp-10h] BYREF
  __int64 Source1; // [rsp+78h] [rbp-8h] BYREF
  ULONG BufferLengthOut; // [rsp+D0h] [rbp+50h] BYREF
  int v18; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0;
  Handle = 0LL;
  Source1 = 0LL;
  Source2 = 0LL;
  BufferLengthIn = 520LL;
  v18 = 0;
  v12 = 0;
  v13 = 0;
  for ( BufferLengthOut = 0; ; BufferLengthIn = BufferLengthOut )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(256LL, BufferLengthIn, 1650749520LL);
    if ( !TargetPath )
    {
      Tree = -1073741670;
      goto LABEL_7;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"DriverDatabaseUpdates",
                               0LL,
                               L"\\Registry\\Machine\\System\\DriverDatabase\\Updates",
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    Tree = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    ExFreePoolWithTag(TargetPath, 0);
    TargetPath = 0LL;
    if ( BufferLengthOut <= (unsigned int)BufferLengthIn )
    {
      Tree = -1073741595;
      goto LABEL_7;
    }
  }
  if ( PersistedStateLocation >= 0 )
  {
    Tree = PnpCtxRegCreateTree(0LL, 0LL, (__int64)TargetPath, 0LL, 131103, 0LL);
    if ( Tree >= 0 )
    {
      for ( i = PiDrvDbNodeList; (__int64 *)i != &PiDrvDbNodeList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 4) == 0 || !PnpBootMode )
        {
          if ( (int)PnpGetObjectProperty(
                      *(__int64 *)&PiPnpRtlCtx,
                      *(_QWORD *)(i + 24),
                      7LL,
                      *(_QWORD *)(i + 72),
                      0LL,
                      (__int64)DEVPKEY_DriverDatabase_LastUpdateDate,
                      (__int64)&v18,
                      (__int64)&Source1,
                      8,
                      (__int64)&v12,
                      0) >= 0
            && v18 == 16
            && v12 == 8 )
          {
            v11 = *(const WCHAR **)(i + 24);
            BufferLengthOut = 8;
            Tree = RegRtlQueryValue(Handle, v11, &v13, &Source2, &BufferLengthOut);
            if ( Tree < 0 || v13 != 3 || BufferLengthOut != 8 )
            {
              Tree = 0;
              Source2 = 0LL;
            }
            if ( RtlCompareMemory(&Source1, &Source2, 8uLL) != 8 )
            {
              v3 = 1;
              if ( !a1 )
                break;
              Tree = RegRtlSetValue(Handle, *(const WCHAR **)(i + 24), 3u, &Source1, 8u);
              if ( Tree < 0 )
                goto LABEL_7;
            }
          }
          else
          {
            Tree = 0;
          }
        }
      }
      if ( a2 )
        *a2 = v3;
    }
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  return (unsigned int)Tree;
}
