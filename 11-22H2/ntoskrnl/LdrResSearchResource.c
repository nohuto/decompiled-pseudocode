/*
 * XREFs of LdrResSearchResource @ 0x14075A150
 * Callers:
 *     AslpFileGetVersionBlock @ 0x140759B0C (AslpFileGetVersionBlock.c)
 *     PspLocateInPEManifest @ 0x1407A2F50 (PspLocateInPEManifest.c)
 *     PopEtGetProcessVersionInfo @ 0x1407B18D4 (PopEtGetProcessVersionInfo.c)
 *     LdrResFindResource @ 0x1407DD540 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x1407EA1F0 (LdrResFindResourceDirectory.c)
 *     SeRegisterElamCertResources @ 0x140813200 (SeRegisterElamCertResources.c)
 *     RtlLoadString @ 0x1409BA370 (RtlLoadString.c)
 *     KeHwPolicyLocateResource @ 0x140B63F00 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F77DC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x1402F7FA8 (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x14037140C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14038AD54 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     LdrpResGetMappingSize @ 0x14075A518 (LdrpResGetMappingSize.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        unsigned int **a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  void *v10; // r14
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v13; // edi
  __int64 result; // rax
  bool v15; // zf
  int v16; // eax
  int v17; // esi
  unsigned __int16 v18; // ax
  __int64 v19; // r12
  ULONG64 v20; // [rsp+58h] [rbp-80h] BYREF
  PVOID ResourceDllBase; // [rsp+60h] [rbp-78h] BYREF
  unsigned int **v22; // [rsp+68h] [rbp-70h]
  __int64 v23; // [rsp+70h] [rbp-68h]
  unsigned __int64 v24[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-50h]

  v22 = a5;
  v23 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v12 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v12 = a4;
  v13 = v12 | 0x1000;
  if ( (v12 & 0x2000) != 0 )
    v13 = v12;
  if ( (v13 & 0xFFF00000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v13 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v13 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_22;
  }
  if ( (v13 & 0x41) == 0 )
    return 3221225714LL;
LABEL_22:
  if ( (v13 & 0x100) != 0 )
  {
    v15 = (v13 & 0xE00) == 0;
  }
  else
  {
    v16 = v13 & 0xC00;
    if ( (v13 & 0x200) == 0 )
    {
      if ( v16 == 3072 )
        return (unsigned int)-1073741582;
      goto LABEL_29;
    }
    v15 = v16 == 0;
  }
  if ( !v15 )
    return (unsigned int)-1073741582;
LABEL_29:
  if ( (v13 & 0x8000) != 0 && (~(_WORD)v13 & 0x810) != 0 || (v13 & 0x3000) == 0x3000 || (v13 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v20 = 0LL;
  if ( (v13 & 0x20000) != 0 )
  {
    if ( (v13 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v20 = *a6;
  }
  if ( (v13 & 0x80000) != 0 )
  {
    if ( (v13 & 0x300) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v20 = *a6;
  }
  memmove(v24, a2, 8LL * a3);
  v17 = 3;
  if ( a3 <= 3 )
    v17 = a3;
  if ( v17 == 3 )
  {
    if ( v25 >= 0x10000 )
    {
      if ( *(_WORD *)v25 )
      {
        v18 = DownLevelLanguageNameToLangID((const void *)v25, 2);
        LODWORD(ResourceDllBase) = v18;
      }
      else
      {
        v18 = 0;
        LODWORD(ResourceDllBase) = 0;
      }
      v25 = v18;
      goto LABEL_57;
    }
    if ( v25 && ((v25 & 0x3FF) == 0 || v25 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v25, 0LL, 0, 2)) )
      return (unsigned int)-1073741811;
  }
LABEL_57:
  if ( (v13 & 0x300) == 0 )
    goto LABEL_63;
  v10 = (void *)a1;
  if ( (v13 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
  }
  result = LdrpResGetMappingSize(v10, &v20, v13);
  if ( (int)result >= 0 || (v13 & 0x1000) == 0 )
  {
LABEL_63:
    v19 = v23;
    v11 = LdrpResSearchResourceMappedFile(v10, v20, v13, v24, v17, v22, a6, a7, v23);
    if ( v11 == -1073741686 && ((v24[0] - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
    {
      ResourceDllBase = 0LL;
      if ( LdrLoadAlternateResourceModuleEx(v10, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) >= 0 )
      {
        v20 = 0LL;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, &v20, v13) >= 0 )
          return (unsigned int)LdrpResSearchResourceMappedFile(
                                 ResourceDllBase,
                                 v20,
                                 v13 | 0x1000000,
                                 v24,
                                 v17,
                                 v22,
                                 a6,
                                 a7,
                                 v19);
      }
    }
    return v11;
  }
  return result;
}
