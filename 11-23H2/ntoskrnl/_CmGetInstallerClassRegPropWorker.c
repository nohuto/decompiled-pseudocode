/*
 * XREFs of _CmGetInstallerClassRegPropWorker @ 0x14069B808
 * Callers:
 *     _CmGetInstallerClassRegProp @ 0x14069B694 (_CmGetInstallerClassRegProp.c)
 * Callees:
 *     _CmClassPropertyRead @ 0x14020BB18 (_CmClassPropertyRead.c)
 *     _MapCmClassPropertyToRegValue @ 0x14020BBA8 (_MapCmClassPropertyToRegValue.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1406CD9D4 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpOpenPropertiesKey @ 0x1406CDC70 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x140787A24 (_CmOpenInstallerClassRegKey.c)
 */

__int64 __fastcall CmGetInstallerClassRegPropWorker(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        int *a7,
        __int16 a8)
{
  int v8; // ebx
  int v11; // r13d
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r10
  HANDLE v18; // rdx
  const wchar_t *v19; // rax
  int ValueIndirect; // eax
  int v22; // edx
  int v23; // [rsp+20h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v25; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h]

  v8 = 0;
  Handle = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
  {
    v8 = -1073741811;
    goto LABEL_21;
  }
  v11 = *a7;
  if ( !*a7 )
  {
    v12 = 0LL;
    goto LABEL_6;
  }
  v12 = a6;
  if ( !a6 )
    return (unsigned int)-1073741811;
LABEL_6:
  *a7 = 0;
  *a5 = 0;
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v8 = CmOpenInstallerClassRegKey(v17, v13, v15, v16, 33554433, 0, (__int64)&v25, 0LL);
    if ( v8 < 0 )
      goto LABEL_21;
    v17 = a1;
  }
  if ( a4 == 8 || a4 == 13 || (unsigned int)(a4 - 18) < 2 )
  {
    if ( !a3 )
      LODWORD(a3) = (_DWORD)v25;
  }
  else
  {
    v18 = v25;
    LOBYTE(v23) = 0;
    if ( a3 )
      v18 = a3;
    v8 = PnpOpenPropertiesKey(v17, v18, 0LL, 1LL, v23);
    if ( v8 < 0 )
      goto LABEL_20;
    LODWORD(a3) = (_DWORD)Handle;
  }
  v19 = MapCmClassPropertyToRegValue(v14, a4);
  if ( !v19 )
  {
    v8 = -1073741264;
    goto LABEL_21;
  }
  LODWORD(v24) = v11;
  ValueIndirect = PnpCtxRegQueryValueIndirect(
                    a1,
                    (_DWORD)a3,
                    (_DWORD)v19,
                    (unsigned int)&v24 + 4,
                    v12,
                    (__int64)&v24,
                    0LL);
  if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
  {
    if ( (int)(ValueIndirect + 0x80000000) >= 0 && ValueIndirect != -1073741789 )
    {
      v8 = ValueIndirect;
      goto LABEL_21;
    }
    v22 = HIDWORD(v24);
    if ( (HIDWORD(v24) != 1 || (unsigned int)v24 >= 2)
      && (HIDWORD(v24) != 7 || (unsigned int)v24 >= 2)
      && (HIDWORD(v24) != 4 || (_DWORD)v24 == 4) )
    {
      if ( a4 == 8 && (unsigned int)v24 > 0x40 )
      {
        v8 = -1073741595;
      }
      else
      {
        *a7 = v24;
        *a5 = v22;
        if ( ValueIndirect || !v11 )
          v8 = -1073741789;
      }
      goto LABEL_21;
    }
  }
LABEL_20:
  v8 = -1073741275;
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( v25 )
    ZwClose(v25);
  return (unsigned int)v8;
}
