/*
 * XREFs of ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C01425D8
 * Callers:
 *     NtGdiGetPerBandInfo @ 0x1C0142530 (NtGdiGetPerBandInfo.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BB70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetPerBandInfo(HDC a1, struct _PERBANDINFO *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, struct _PERBANDINFO *); // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  a2->bRepeatThisBand = 0;
  v3 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v8) )
  {
    v4 = *(_QWORD *)(v8[0] + 496LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v8[0] + 48LL);
      if ( *(_QWORD *)(v5 + 2536) )
      {
        if ( (*(_DWORD *)(v4 + 112) & 0x2000000) != 0 )
        {
          v6 = *(__int64 (__fastcall **)(__int64, struct _PERBANDINFO *))(v5 + 3264);
          if ( v6 )
          {
            v3 = v6(v4 + 24, a2);
            if ( v3 == -1 )
              v3 = -1;
          }
          else
          {
            v3 = 0;
          }
        }
      }
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v9);
  return v3;
}
