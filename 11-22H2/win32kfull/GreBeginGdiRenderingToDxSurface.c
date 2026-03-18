/*
 * XREFs of GreBeginGdiRenderingToDxSurface @ 0x1C00097F8
 * Callers:
 *     NtGdiBeginGdiRendering @ 0x1C00097E0 (NtGdiBeginGdiRendering.c)
 * Callees:
 *     ?bReset@DC@@QEAAHXZ @ 0x1C000997C (-bReset@DC@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreBeginGdiRenderingToDxSurface(HSURF a1, unsigned int a2, __int64 a3)
{
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rbx
  HDC v10; // rdx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64); // rax
  unsigned int v12; // eax
  _BYTE v13[32]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  DC *v15[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v16[40]; // [rsp+58h] [rbp-28h] BYREF
  char v17; // [rsp+B0h] [rbp+30h] BYREF

  if ( a3 && (int)GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, 0LL) < 0 )
    return 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  SURFREF::SURFREF((SURFREF *)v13, a1);
  v7 = v14;
  v8 = 0;
  if ( v14 )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
      goto LABEL_19;
    if ( !(unsigned int)GreGetObjectOwner(a1, 5LL) )
    {
LABEL_18:
      v7 = v14;
LABEL_19:
      if ( v7 )
        DEC_SHARE_REF_CNT(v7);
      goto LABEL_21;
    }
    v7 = v14;
    if ( v14 )
    {
      v9 = *(_QWORD *)(v14 + 48);
      if ( (*(_DWORD *)(v14 + 116) & 8) == 0 && !*(_QWORD *)(v14 + 224) )
        goto LABEL_19;
      v10 = *(HDC *)(v14 + 160);
      *(_WORD *)(v14 + 102) &= ~0x200u;
      if ( v10 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v15, v10);
        if ( v15[0] )
        {
          v8 = DC::bReset(v15[0]);
          if ( v15[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v15);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v16);
        if ( v8 )
        {
          if ( (*(_DWORD *)(v7 + 116) & 8) != 0 )
          {
            v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 3456);
            v8 = 0;
            if ( v11 )
            {
              v12 = v11(v7 + 24, a2, a3);
              *(_DWORD *)(v7 + 116) |= 0x200u;
              v8 = v12;
            }
          }
        }
      }
      goto LABEL_18;
    }
  }
LABEL_21:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v13);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  return v8;
}
