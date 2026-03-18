/*
 * XREFs of ?OpenServiceKey@CUmdfSvcConfig@@QEAAJPEBGKPEAPEAX@Z @ 0x1C0086974
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     ?OpenKeyHelper@CUmdfSvcConfig@@AEAAJPEAXPEBU_UNICODE_STRING@@KEPEAPEAX@Z @ 0x1C00868D8 (-OpenKeyHelper@CUmdfSvcConfig@@AEAAJPEAXPEBU_UNICODE_STRING@@KEPEAPEAX@Z.c)
 */

__int64 __fastcall CUmdfSvcConfig::OpenServiceKey(
        CUmdfSvcConfig *this,
        const wchar_t *ServiceName,
        unsigned int RegKeyHandle,
        void **a4)
{
  const wchar_t *v7; // rax
  __int64 v8; // r8
  NTSTATUS appended; // ebx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // bx
  const wchar_t *Pool2; // rax
  wchar_t *v13; // rsi
  unsigned int v14; // r9d
  _UNICODE_STRING regPath; // [rsp+30h] [rbp-28h] BYREF
  void *hServiceKey; // [rsp+68h] [rbp+10h] BYREF

  hServiceKey = 0LL;
  *a4 = 0LL;
  regPath = 0LL;
  if ( ServiceName )
  {
    v7 = ServiceName;
    v8 = 257LL;
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v8;
    }
    while ( v8 );
    appended = v8 == 0 ? 0xC000000D : 0;
    if ( v8 )
    {
      v10 = 2 * (v8 != 0 ? 257 - v8 + 78 : 78);
      if ( v10 < 0x9Cu )
      {
        return (unsigned int)-1073741675;
      }
      else
      {
        v11 = 2 * (v8 != 0 ? 257 - v8 + 78 : 78);
        Pool2 = (const wchar_t *)ExAllocatePool2(64LL, 2LL * v10, 1129532757LL);
        v13 = (wchar_t *)Pool2;
        if ( Pool2 )
        {
          RtlInitUnicodeString(&regPath, Pool2);
          regPath.MaximumLength = v11;
          appended = RtlAppendUnicodeToString(
                       &regPath,
                       L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\WUDF\\Services\\");
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeToString(&regPath, ServiceName);
            if ( appended >= 0 )
            {
              appended = CUmdfSvcConfig::OpenKeyHelper(this, 0LL, &regPath, v14, this->m_AutoClose, &hServiceKey);
              if ( appended >= 0 )
                *a4 = hServiceKey;
            }
          }
          ExFreePoolWithTag(v13, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)appended;
}
