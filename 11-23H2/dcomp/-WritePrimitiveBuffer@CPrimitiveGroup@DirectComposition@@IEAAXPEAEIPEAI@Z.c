/*
 * XREFs of ?WritePrimitiveBuffer@CPrimitiveGroup@DirectComposition@@IEAAXPEAEIPEAI@Z @ 0x180033944
 * Callers:
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800FA130 (-GetD2DCommandList@CPrimitiveGroup@DirectComposition@@IEAAJPEAUID2D1DeviceContext@@PEAPEAUID2D1P.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::WritePrimitiveBuffer(
        DirectComposition::CPrimitiveGroup *this,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  int v6; // r12d
  unsigned __int8 *v8; // rsi
  char *v9; // r13
  float v10; // xmm6_4
  char *i; // rax
  int v12; // eax
  unsigned __int8 *v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  char *v22; // r15
  unsigned __int8 *v23; // rbx
  void *v24; // rcx
  _OWORD *v25; // rsi
  _DWORD *v26; // rbx
  __int64 v27; // rax
  __int128 v28; // [rsp+28h] [rbp-99h] BYREF
  __int128 v29; // [rsp+38h] [rbp-89h]
  __int128 v30; // [rsp+48h] [rbp-79h]
  _OWORD v31[6]; // [rsp+58h] [rbp-69h] BYREF
  int v32; // [rsp+B8h] [rbp-9h]

  v4 = 0;
  v6 = (int)a2;
  v8 = a2;
  if ( a4 )
    *a4 = -1;
  v9 = (char *)this + 256;
  v10 = 0.0;
  for ( i = (char *)*((_QWORD *)this + 32); ; i = (char *)*((_QWORD *)v22 + 3) )
  {
    v22 = i - 24;
    if ( i == v9 )
      v22 = 0LL;
    if ( !v22 )
      break;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    memset_0(v31, 0, 0x64uLL);
    (*(void (__fastcall **)(char *, __int128 *, _OWORD *))(*(_QWORD *)v22 + 72LL))(v22, &v28, v31);
    v12 = v32;
    v13 = v8 + 48;
    v14 = v29;
    *(_OWORD *)v8 = v28;
    v15 = v30;
    *((_OWORD *)v8 + 1) = v14;
    *((_OWORD *)v8 + 2) = v15;
    v16 = v31[0];
    *(float *)&v14 = v10 / 65535.0;
    v10 = v10 + 1.0;
    *((_DWORD *)v8 + 10) = v14;
    v8 += 148;
    v17 = v31[1];
    *(_OWORD *)v13 = v16;
    v18 = v31[2];
    *((_OWORD *)v13 + 1) = v17;
    v19 = v31[3];
    *((_OWORD *)v13 + 2) = v18;
    v20 = v31[4];
    *((_OWORD *)v13 + 3) = v19;
    v21 = v31[5];
    *((_OWORD *)v13 + 4) = v20;
    *((_OWORD *)v13 + 5) = v21;
    *((_DWORD *)v13 + 24) = v12;
  }
  if ( *((_DWORD *)this + 60) )
  {
    if ( a4 )
      *a4 = (_DWORD)v8 - v6;
    *((_QWORD *)v8 + 2) = 0LL;
    v23 = v8 + 48;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    v24 = v8 + 48;
    *((_QWORD *)v8 + 5) = 0LL;
    *(_OWORD *)v8 = _xmm;
    *((_QWORD *)v8 + 2) = 1065353216LL;
    *((_DWORD *)v8 + 6) = 0;
    *(_QWORD *)(v8 + 28) = 1065353216LL;
    *((_DWORD *)v8 + 9) = 0;
    v25 = v8 + 148;
    memset_0(v24, 0, 0x64uLL);
    *((_DWORD *)v23 + 24) = -1;
    if ( *((_DWORD *)this + 60) )
    {
      do
      {
        *v25 = 0LL;
        v26 = v25 + 3;
        v25[1] = 0LL;
        v25[2] = 0LL;
        *v25 = *(_OWORD *)(*((_QWORD *)this + 27) + 40LL * v4);
        v27 = *((_QWORD *)this + 27);
        v25 = (_OWORD *)((char *)v25 + 148);
        *(_OWORD *)((char *)v25 - 132) = *(_OWORD *)(v27 + 40LL * v4 + 16);
        *(_QWORD *)((char *)v25 - 116) = *(_QWORD *)(v27 + 40LL * v4 + 32);
        memset_0(v26, 0, 0x64uLL);
        ++v4;
        v26[24] = -1;
      }
      while ( v4 < *((_DWORD *)this + 60) );
    }
  }
}
