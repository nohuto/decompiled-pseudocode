/*
 * XREFs of GreGetBitmapDimension @ 0x1C02BFBA8
 * Callers:
 *     NtGdiGetBitmapDimension @ 0x1C02ACD40 (NtGdiGetBitmapDimension.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBitmapDimension(HSURF a1, _QWORD *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  ULONG v6; // ecx
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  char v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  SURFREF::SURFREF((SURFREF *)v8, a1);
  v5 = v9;
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 112) & 0x4000000) == 0 )
      goto LABEL_8;
    if ( a2 )
    {
      v4 = 1;
      *a2 = *(_QWORD *)(v9 + 152);
      goto LABEL_8;
    }
    v6 = 87;
  }
  else
  {
    v6 = 6;
  }
  EngSetLastError(v6);
  v5 = v9;
LABEL_8:
  if ( v5 )
    DEC_SHARE_REF_CNT(v5);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  return v4;
}
