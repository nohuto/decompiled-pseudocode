/*
 * XREFs of xInsertMetricsRFONTOBJ @ 0x1C001ACD8
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02A590C (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C001AEC4 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C001AEF0 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C001AFA4 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C001B030 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z @ 0x1C015FF14 (-ValidateGlyphDataAndBitmap@@YA_NJPEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v3; // r14
  unsigned int v4; // esi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r13
  unsigned int v11; // r12d
  struct _GLYPHDATA *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64, _QWORD, _QWORD, struct _GLYPHDATA *, _QWORD, _DWORD); // rbx
  int v17; // ebx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  unsigned int v20; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int16 v21; // [rsp+48h] [rbp-61h] BYREF
  struct _GLYPHDATA *v22; // [rsp+50h] [rbp-59h]
  _QWORD *v23; // [rsp+58h] [rbp-51h]
  __int64 v24; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v26[4]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  v23 = a2;
  v6 = *(_QWORD *)(v3 + 480);
  if ( (*(_DWORD *)(v3 + 84) & 2) != 0 )
  {
    v21 = a3;
    v20 = 0;
    RFONTOBJ::vXlatGlyphArray(this, &v21, 1u, &v20, 0, 0);
    v7 = v20;
    a2 = v23;
    v3 = *(_QWORD *)this;
  }
  else
  {
    v7 = a3;
  }
  v20 = v7;
  if ( v7 == *(_DWORD *)(v3 + 460) && (v8 = *(_QWORD *)(v6 + 8)) != 0 )
  {
    *a2 = v8;
    return 1LL;
  }
  else
  {
    result = RFONTOBJ::bCheckMetricsCache(this);
    if ( (_DWORD)result )
    {
      v10 = *(_QWORD *)this;
      v11 = (*(_DWORD *)(*(_QWORD *)this + 88LL) == 2) + 1;
      memset(v26, 0, sizeof(v26));
      v12 = (struct _GLYPHDATA *)v26;
      v13 = *(_QWORD *)(v10 + 128);
      v24 = v13;
      if ( !*(_DWORD *)(v10 + 640) )
        v12 = *(struct _GLYPHDATA **)(v3 + 512);
      v14 = *(_QWORD *)(v13 + 88);
      v15 = *(_QWORD *)(v10 + 112);
      v22 = v12;
      v16 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, struct _GLYPHDATA *, _QWORD, _DWORD))(v14 + 2888);
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v25, (struct PFFOBJ *)&v24);
      v17 = v16(v15, v10, v11, v20, v22, 0LL, 0);
      if ( !ValidateGlyphDataAndBitmap(v17, (struct _FONTOBJ *)v10, v11, v22, 0LL) )
        v17 = -1;
      ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v25);
      if ( v17 != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
        {
          v18 = *(_QWORD *)(v3 + 512);
          *(_OWORD *)v18 = v26[0];
          *(_QWORD *)(v18 + 16) = *(_QWORD *)&v26[1];
        }
        v19 = v23;
        **(_QWORD **)(v3 + 512) = 0LL;
        v4 = 1;
        *v19 = *(_QWORD *)(v3 + 512);
        *(_QWORD *)(v3 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      }
      return v4;
    }
  }
  return result;
}
