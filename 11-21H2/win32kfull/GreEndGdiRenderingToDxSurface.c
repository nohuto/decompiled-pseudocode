/*
 * XREFs of GreEndGdiRenderingToDxSurface @ 0x1C00FF9EC
 * Callers:
 *     NtGdiEndGdiRendering @ 0x1C00FF9B0 (NtGdiEndGdiRendering.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreEndGdiRenderingToDxSurface(HSURF a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // edx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64); // rax
  _BYTE v14[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]
  char v16; // [rsp+90h] [rbp+18h] BYREF

  v6 = a2;
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, a2);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
  SURFREF::SURFREF((SURFREF *)v14, a1);
  v8 = v15;
  v9 = 0;
  if ( v15 )
  {
    if ( ((unsigned int)a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v8 = v15;
        if ( !v15 )
          goto LABEL_15;
        v10 = *(_QWORD *)(v15 + 48);
        v11 = *(_DWORD *)(v15 + 116) & 8;
        if ( !v11 && !*(_QWORD *)(v15 + 224) )
          goto LABEL_13;
        v9 = 1;
        *(_WORD *)(v15 + 102) |= 0x200u;
        if ( v11 )
        {
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v10 + 3464);
          v9 = 0;
          if ( v12 )
            v9 = v12(v8 + 24, v6, a4, a3);
        }
      }
      v8 = v15;
    }
LABEL_13:
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
  }
LABEL_15:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
  return v9;
}
