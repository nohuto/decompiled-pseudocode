/*
 * XREFs of vInitFontsDirectoryNameInformation @ 0x1C00D3540
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C000D638 (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0014850 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 */

int vInitFontsDirectoryNameInformation()
{
  __int64 v0; // rax
  struct _STRING *v1; // rax
  __int64 v2; // r8
  char v3; // r9
  wchar_t *v4; // rax
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+60h] [rbp-9h] BYREF
  STRING Source; // [rsp+70h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D0h] [rbp+67h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v7[1] = L"\\SystemRoot\\Fonts";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  FileHandle = 0LL;
  Source.Buffer = (PCHAR)L"\\";
  IoStatusBlock = 0LL;
  v7[0] = 2359330LL;
  *(_QWORD *)&Source.Length = 262146LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v0) = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
  if ( (int)v0 >= 0 )
  {
    v1 = (struct _STRING *)Win32AllocPoolZInit(400LL, 1986422343LL);
    gpniFontsDirectory = v1;
    if ( v1
      && ((int)QueryNameStringFromHandle(FileHandle, (struct _OBJECT_NAME_INFORMATION *)v1, v2, v3) < 0
       || RtlAppendStringToString(gpniFontsDirectory, &Source) < 0) )
    {
      Win32FreePool(gpniFontsDirectory);
      gpniFontsDirectory = 0LL;
    }
    v4 = (wchar_t *)Win32AllocPoolZInit(520LL, 1986422343LL);
    gpwszFontsDirectory = v4;
    if ( v4 )
    {
      if ( (unsigned int)bAppendSysDirectory(v4, &word_1C02E3794) )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( gpwszFontsDirectory[v5] );
        gcwcFontsDirectory = v5 + 1;
      }
      else
      {
        Win32FreePool(gpwszFontsDirectory);
        gpwszFontsDirectory = 0LL;
        gcwcFontsDirectory = 0;
      }
    }
    ZwClose(FileHandle);
    v0 = Win32AllocPoolZInit(400LL, 1986422343LL);
    gpniScratch = v0;
  }
  return v0;
}
