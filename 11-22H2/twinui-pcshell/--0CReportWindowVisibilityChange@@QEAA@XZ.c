/*
 * XREFs of ??0CReportWindowVisibilityChange@@QEAA@XZ @ 0x1801AADD8
 * Callers:
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x1801AAD08 (--0CIAMGlobals@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CReportWindowVisibilityChange *__fastcall CReportWindowVisibilityChange::CReportWindowVisibilityChange(
        CReportWindowVisibilityChange *this)
{
  _DWORD *v1; // rsi
  char v3; // di
  DWORD v5; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v1 = (_DWORD *)((char *)this + 76);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  v3 = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 9) = 1;
  v5 = 4;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\ICoreWindow",
         L"VisibilityDelay",
         0x20000018u,
         0LL,
         (char *)this + 76,
         &v5) )
  {
    *v1 = 1000;
    v3 = 0;
  }
  *((_BYTE *)this + 72) = v3;
  return this;
}
