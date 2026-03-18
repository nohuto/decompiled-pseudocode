/*
 * XREFs of DrvDbCreateDatabaseNode @ 0x1408274C4
 * Callers:
 *     DrvDbOpenContext @ 0x140827238 (DrvDbOpenContext.c)
 *     DrvDbRegisterDatabase @ 0x1408273E0 (DrvDbRegisterDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140859460 (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14081D0F0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A30510 (DrvDbDestroyDatabaseNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall DrvDbCreateDatabaseNode(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        int a4,
        PCWSTR SourceString,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  int v10; // ebx
  __int64 v12; // rdi
  wchar_t *Pool2; // rbp
  __int64 v14; // rax
  __int64 v15; // r8
  struct _ERESOURCE *v16; // rax
  int v17; // ebx
  __int64 *v18; // rcx
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 *v24; // rdx
  __int64 dwFlags; // [rsp+20h] [rbp-78h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-70h]
  int v27; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle[8]; // [rsp+58h] [rbp-40h] BYREF

  v10 = a4;
  Handle[0] = 0LL;
  v27 = 0;
  v12 = 0LL;
  *a9 = 0LL;
  if ( (a6 & 0x30) == 0x30
    || (a6 & 1) != 0 && *(_QWORD *)(a1 + 32)
    || (a6 & 0x20) != 0 && (v21 = *(_QWORD *)(a1 + 40)) != 0 && v21 != *(_QWORD *)(a1 + 32) )
  {
    return (unsigned int)-1073741811;
  }
  if ( SourceString )
  {
    Pool2 = (wchar_t *)SourceString;
    goto LABEL_7;
  }
  v22 = -1LL;
  do
    ++v22;
  while ( a2[v22] );
  v23 = (unsigned int)(2 * v22 + 68);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v23, 1111770192LL);
  if ( !Pool2 )
  {
LABEL_40:
    v17 = -1073741801;
    goto LABEL_23;
  }
  v17 = RtlStringCchPrintfExW(
          Pool2,
          v23 >> 1,
          0LL,
          0LL,
          0x800u,
          L"%ws\\%ws\\%ws",
          L"\\REGISTRY\\MACHINE",
          a2,
          L"DriverDatabase");
  if ( v17 >= 0 )
  {
    v10 = a4;
LABEL_7:
    v14 = ExAllocatePool2(256LL, 168LL, 1111770192LL);
    v12 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 68) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(v14 + 32) = a3;
      *(_QWORD *)(v14 + 80) = a7;
      *(_QWORD *)(v14 + 88) = a8;
      *(_DWORD *)(v14 + 72) = 0x10000;
      *(_DWORD *)(v14 + 64) = a6;
      *(_DWORD *)(v14 + 40) = v10;
      if ( RtlCreateUnicodeString((PUNICODE_STRING)(v14 + 16), a2)
        && RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 48), Pool2)
        && (v16 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1111770192LL), (*(_QWORD *)(v12 + 152) = v16) != 0LL) )
      {
        v17 = ExInitializeResourceLite(v16);
        if ( v17 >= 0 )
        {
          if ( (a6 & 0x20) == 0 )
          {
            v18 = *(__int64 **)(a1 + 24);
            if ( *v18 != a1 + 16 )
              __fastfail(3u);
            *(_QWORD *)v12 = a1 + 16;
            *(_QWORD *)(v12 + 8) = v18;
            *v18 = v12;
            *(_QWORD *)(a1 + 24) = v12;
          }
          if ( (a6 & 0x10) == 0
            || (v24 = *(__int64 **)(a1 + 40)) == 0LL
            || (LOBYTE(pszFormat) = 1,
                LODWORD(dwFlags) = 0x2000000,
                v17 = DrvDbOpenObjectRegKey((__int64 *)a1, v24, 1u, a2, dwFlags, pszFormat, Handle, &v27, 0LL),
                v17 >= 0)
            && (v27 != 1
             || (v17 = DrvDbSetDriverDatabaseMappedProperty(
                         a1,
                         a2,
                         Handle[0],
                         (__int64)&DEVPKEY_DriverDatabase_RegistryPath,
                         0x12u,
                         *(const WCHAR **)(v12 + 56),
                         (unsigned int)*(unsigned __int16 *)(v12 + 48) + 2),
                 v17 >= 0)) )
          {
            if ( (a6 & 0x20) != 0 )
              *(_QWORD *)(a1 + 40) = v12;
            if ( (a6 & 1) != 0 )
            {
              v19 = *(_QWORD *)(a1 + 40) == 0LL;
              *(_QWORD *)(a1 + 32) = v12;
              if ( v19 )
                *(_QWORD *)(a1 + 40) = v12;
            }
            *a9 = v12;
            v12 = 0LL;
          }
        }
        else
        {
          ExFreePoolWithTag(*(PVOID *)(v12 + 152), 0);
          *(_QWORD *)(v12 + 152) = 0LL;
        }
      }
      else
      {
        v17 = -1073741670;
      }
      goto LABEL_23;
    }
    goto LABEL_40;
  }
LABEL_23:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 80) = 0LL;
    DrvDbDestroyDatabaseNode(a1, v12, v15);
  }
  if ( Pool2 && Pool2 != SourceString )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v17;
}
