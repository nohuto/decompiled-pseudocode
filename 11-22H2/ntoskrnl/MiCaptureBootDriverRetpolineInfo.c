/*
 * XREFs of MiCaptureBootDriverRetpolineInfo @ 0x140830F70
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140B5FD1C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140214B80 (RtlImageNtHeaderEx.c)
 *     MiCreateRetpolineRelocationInformation @ 0x1406A7128 (MiCreateRetpolineRelocationInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406A723C (MiCaptureRetpolineRelocationTables.c)
 *     LdrCaptureDynamicRelocationTableHeader @ 0x1406A7AD4 (LdrCaptureDynamicRelocationTableHeader.c)
 *     MiFreeImageRetpolineContext @ 0x1406A88E0 (MiFreeImageRetpolineContext.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4B48 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall MiCaptureBootDriverRetpolineInfo(PVOID BaseOfImage, ULONG64 Size, _QWORD *a3)
{
  __int64 v5; // r14
  int RetpolineRelocationInformation; // ebx
  _DWORD *Config; // rax
  unsigned __int64 v8; // rcx
  int v9; // esi
  PIMAGE_NT_HEADERS v10; // r15
  char v12; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp+48h] BYREF

  LODWORD(v15) = 0;
  OutHeaders = 0LL;
  v13 = 0LL;
  v5 = (unsigned int)Size;
  memset(v14, 0, sizeof(v14));
  RetpolineRelocationInformation = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &OutHeaders);
  if ( RetpolineRelocationInformation >= 0 )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
    if ( Config && (int)*Config >= 228 )
    {
      v8 = *((_QWORD *)Config + 15);
      v9 = 0;
      if ( v8 && v8 >= (unsigned __int64)BaseOfImage && v8 < (unsigned __int64)BaseOfImage + v5 - 8 )
        v9 = v8 - (_DWORD)BaseOfImage;
      v10 = OutHeaders;
      RetpolineRelocationInformation = LdrCaptureDynamicRelocationTableHeader(
                                         (char *)BaseOfImage,
                                         (unsigned int)v5,
                                         (__int64)Config,
                                         *Config,
                                         0LL,
                                         OutHeaders->OptionalHeader.Magic,
                                         &v15,
                                         &v13);
      if ( RetpolineRelocationInformation >= 0 )
      {
        RetpolineRelocationInformation = MiCaptureRetpolineRelocationTables(
                                           (char *)BaseOfImage,
                                           v5,
                                           v10->OptionalHeader.SizeOfHeaders,
                                           v15,
                                           &v13,
                                           v12,
                                           (__int64 *)v14);
        if ( RetpolineRelocationInformation >= 0 )
        {
          RetpolineRelocationInformation = MiCreateRetpolineRelocationInformation((__int64)v14, v9, v5, a3);
          MiFreeImageRetpolineContext(v14);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)RetpolineRelocationInformation;
}
