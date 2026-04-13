/*
 * XREFs of ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x180040BD0
 * Callers:
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18002B230 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1800456E0 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     <none>
 */

__int64 wil::details::StringCchPrintfA(wil::details *this, char *a2, const char *a3, const char *a4, ...)
{
  unsigned int v5; // ebx
  char *v6; // rdi
  int v7; // eax
  const char *ArgList; // [rsp+68h] [rbp+20h] BYREF

  ArgList = a4;
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v6 = a2 - 1;
    v5 = 0;
    v7 = _vsnprintf_s((char *const)this, (const size_t)a2, (const size_t)(a2 - 1), a3, (va_list)&ArgList);
    if ( v7 < 0 || v7 > (unsigned __int64)v6 )
    {
      *((_BYTE *)this + (_QWORD)v6) = 0;
      return (unsigned int)-2147024774;
    }
    else if ( (char *)v7 == v6 )
    {
      *((_BYTE *)this + (_QWORD)v6) = 0;
    }
  }
  else
  {
    v5 = -2147024809;
    if ( a2 )
      *(_BYTE *)this = 0;
  }
  return v5;
}
