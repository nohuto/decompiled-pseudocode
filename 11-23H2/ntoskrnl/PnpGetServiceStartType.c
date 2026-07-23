/*
 * XREFs of PnpGetServiceStartType @ 0x14068F410
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1406CE898 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406CED50 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpGetServiceStartType(int a1, void *a2, _DWORD *a3)
{
  int Value; // ebx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  HANDLE v12; // rcx
  int v13; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  Handle[0] = 0LL;
  *a3 = 4;
  if ( (ExpManufacturingInformation & 1) == 0 )
    goto LABEL_2;
  v8 = qword_140D18460;
  if ( qword_140D18460 )
  {
    if ( qword_140D18460 == -1 )
      goto LABEL_2;
  }
  else
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    else
      LODWORD(v9) = 0;
    v10 = SysCtxRegOpenKey(
            v9,
            -2147483646,
            (unsigned int)L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
            0,
            131097,
            (__int64)&qword_140D18460);
    if ( v10 == -1073741772 )
    {
      qword_140D18460 = -1LL;
      goto LABEL_2;
    }
    if ( v10 < 0 )
      goto LABEL_2;
    v8 = qword_140D18460;
  }
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
  else
    LODWORD(v11) = 0;
  if ( (int)SysCtxRegOpenKey(v11, v8, a1, 0, 131097, (__int64)Handle) >= 0 )
  {
    LODWORD(v15) = 4;
    RegRtlQueryValue(Handle[0], (__int64)&v15);
  }
  v12 = qword_140D18458;
  if ( qword_140D18458 )
  {
    if ( qword_140D18458 == (HANDLE)-1LL )
      goto LABEL_2;
    goto LABEL_29;
  }
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v12 = *(HANDLE *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
  v13 = SysCtxRegOpenKey((_DWORD)v12, qword_140D18460, (unsigned int)L"*Driver", 0, 131097, (__int64)&qword_140D18458);
  if ( v13 == -1073741772 )
  {
    qword_140D18458 = (HANDLE)-1LL;
    goto LABEL_2;
  }
  if ( v13 >= 0 )
  {
    v12 = qword_140D18458;
LABEL_29:
    LODWORD(v15) = 4;
    RegRtlQueryValue(v12, (__int64)&v15);
  }
LABEL_2:
  LODWORD(v15) = 4;
  Value = RegRtlQueryValue(a2, (__int64)&v15);
  if ( Value >= 0 )
  {
    Value = -1073741772;
    *a3 = 4;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)Value;
}
