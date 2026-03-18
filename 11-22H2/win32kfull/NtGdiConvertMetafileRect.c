/*
 * XREFs of NtGdiConvertMetafileRect @ 0x1C02D08D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiConvertMetafileRect(HDC a1, ULONG64 a2)
{
  _OWORD *v2; // rdi
  __int128 *v3; // rax
  unsigned int v4; // ebx
  FIX v5; // edx
  FIX v6; // ecx
  FIX v7; // eax
  FIX v8; // r8d
  FIX v9; // r9d
  FIX v10; // eax
  FIX v11; // r9d
  HDC v13[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v14[6]; // [rsp+38h] [rbp-60h] BYREF
  ULONG64 v15; // [rsp+68h] [rbp-30h] BYREF
  FIX v16; // [rsp+70h] [rbp-28h]
  FIX v17; // [rsp+74h] [rbp-24h]
  __int128 v18; // [rsp+78h] [rbp-20h] BYREF

  v2 = (_OWORD *)a2;
  v13[0] = a1;
  v15 = a2;
  v18 = 0LL;
  v3 = (__int128 *)a2;
  if ( a2 >= MmUserProbeAddress )
    v3 = (__int128 *)MmUserProbeAddress;
  v18 = *v3;
  v4 = 2;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( !v14[0] )
    goto LABEL_18;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)v14, 516);
  if ( !v13[0] || !EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct _POINTL *)&v18, (struct _POINTFIX *)&v15, 2uLL) )
    goto LABEL_18;
  v5 = v15;
  v6 = v16;
  if ( (int)v15 > v16 )
  {
    v7 = v15;
    v5 = v16;
    LODWORD(v15) = v16;
    v6 = v7;
  }
  v8 = HIDWORD(v15);
  v9 = v17;
  if ( SHIDWORD(v15) > v17 )
  {
    v10 = HIDWORD(v15);
    v8 = v17;
    HIDWORD(v15) = v17;
    v9 = v10;
  }
  v16 = v6 - 16;
  v11 = v9 - 16;
  v17 = v11;
  if ( v6 - 16 < v5 || v11 < v8 )
    v4 = 1;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)v14, 1026);
  if ( v13[0] && EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct _POINTFIX *)&v15, (struct _POINTL *)&v18, 2uLL) )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (_OWORD *)MmUserProbeAddress;
    *v2 = v18;
  }
  else
  {
LABEL_18:
    v4 = 0;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  if ( !v4 )
    EngSetLastError(0x57u);
  return v4;
}
