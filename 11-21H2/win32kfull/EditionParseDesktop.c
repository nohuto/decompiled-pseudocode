/*
 * XREFs of EditionParseDesktop @ 0x1C0079050
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C011190C (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 */

__int64 __fastcall EditionParseDesktop(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        char a5,
        int a6,
        UNICODE_STRING *String1,
        _DWORD *a8,
        int a9,
        void **a10)
{
  void **v10; // r14
  _DWORD *v12; // rsi
  unsigned int DesktopEx2; // edi
  __int64 v16; // rcx
  _QWORD *i; // rbx
  __int64 NameInfo; // rax
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  v10 = a10;
  v12 = a8;
  DesktopEx2 = -1073741772;
  *a10 = 0LL;
  if ( v12 && *v12 != gSessionId )
    return 3221225485LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v20);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 2); ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      if ( v12 )
        DesktopEx2 = xxxCreateDesktopEx2(a1, a3, a4, String1, v12[1], v10);
      goto LABEL_12;
    }
    if ( ObQueryNameInfo(i) )
    {
      NameInfo = ObQueryNameInfo(i);
      if ( NameInfo != -8 )
      {
        if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(NameInfo + 8), (a5 & 0x40) != 0) )
          break;
      }
    }
  }
  if ( !v12 )
  {
    DesktopEx2 = 0;
    goto LABEL_11;
  }
  if ( a5 < 0 )
  {
    DesktopEx2 = 0x40000000;
LABEL_11:
    ObfReferenceObject(i);
    *v10 = i;
    goto LABEL_12;
  }
  DesktopEx2 = -1073741771;
LABEL_12:
  if ( !(_DWORD)v20 )
    UserSessionSwitchLeaveCrit(v16);
  return DesktopEx2;
}
