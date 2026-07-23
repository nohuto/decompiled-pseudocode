/*
 * XREFs of IopInitializeCrashDump @ 0x140832F88
 * Callers:
 *     IoConfigureCrashDump @ 0x140550024 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14083489C (IoInitializeCrashDump.c)
 *     IopInitCrashDumpRegCallback @ 0x140B5D550 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IopReadDumpRegistry @ 0x140395BE4 (IopReadDumpRegistry.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140395D24 (SecureDump_GetSecureDumpSettings.c)
 *     IopLoadCrashdumpDriver @ 0x140396450 (IopLoadCrashdumpDriver.c)
 *     IopInitializeRemovePagesArray @ 0x140396810 (IopInitializeRemovePagesArray.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140553338 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140553558 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140834278 (FsRtlIssueFileNotificationFsctl.c)
 */

char __fastcall IopInitializeCrashDump(__int64 a1, __int128 *a2)
{
  int CrashdumpDriver; // eax
  int v6; // eax
  void *v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-30h] BYREF
  char v10; // [rsp+60h] [rbp-10h]
  __int16 v11; // [rsp+61h] [rbp-Fh]
  char v12; // [rsp+63h] [rbp-Dh]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  *(_QWORD *)&v8 = 0LL;
  DWORD2(v8) = 0;
  if ( !ForceDumpDisabled && AllowCrashDump )
  {
    IopReadDumpRegistry(a1, &Object);
    if ( CrashdmpImageEntry && CrashdmpDumpBlock && CrashdmpInitialized || !(_DWORD)Object )
      return 1;
    if ( CrashdmpImageEntry || (CrashdumpDriver = IopLoadCrashdumpDriver(), CrashdumpDriver >= 0) )
    {
      if ( (int)SecureDump_GetSecureDumpSettings((__int64)&v8) >= 0 )
      {
        if ( !(_BYTE)v8
          || qword_140C6ACA8
          && (v9[3] = *(_QWORD *)((char *)&v8 + 4),
              v10 = BYTE1(v8),
              v9[1] = SecureDump_Get_SecureDumpHeader,
              v9[2] = SecureDump_Encrypt_DmpData,
              v9[0] = 40LL,
              v11 = 0,
              v12 = 0,
              (int)qword_140C6ACA8(v9) >= 0) )
        {
          v8 = *a2;
          v6 = ((__int64 (__fastcall *)(__int64, __int64 *, __int128 *))qword_140C6AC48)(a1, &CrashdmpDumpBlock, &v8);
          if ( v6 >= 0 )
          {
            CrashdmpInitialized = 1;
            v7 = *(void **)(CrashdmpDumpBlock + 1352);
            if ( !v7 )
            {
              if ( !a1 )
              {
LABEL_16:
                if ( *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
                {
                  if ( UseRemovePagesArray )
                    IopInitializeRemovePagesArray();
                }
                return 1;
              }
              v7 = (void *)a1;
            }
            Object = 0LL;
            if ( ObReferenceObjectByHandle(v7, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
            {
              FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)Object);
              ObfDereferenceObject(Object);
            }
            goto LABEL_16;
          }
          CrashdmpDumpBlock = 0LL;
          IopDumpTraceInitializeCrashDumpFailure(v6);
        }
      }
    }
    else
    {
      IopDumpTraceLoadCrashDumpDriverFailure(CrashdumpDriver);
    }
  }
  return 0;
}
