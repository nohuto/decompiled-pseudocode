/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DD650
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DE46C (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E0260 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001E924 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     EngMulDiv @ 0x1C006E450 (EngMulDiv.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  _OWORD *v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  _OWORD *v9; // rbp
  int v10; // r9d
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  bool v14; // sf
  int v15; // r9d
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  INT v19; // esi
  int v20; // esi
  INT v21; // eax
  INT v22; // r8d
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  _OWORD *v27; // rcx

  v2 = (char *)this + 544;
  memset((char *)this + 544, 0, 0x22CuLL);
  v5 = 2LL;
  v6 = (_OWORD *)((char *)this + 684);
  v7 = &gTPThresholds;
  do
  {
    *v6 = *v7;
    v6[1] = v7[1];
    v6[2] = v7[2];
    v6[3] = v7[3];
    v6[4] = v7[4];
    v6[5] = v7[5];
    v6[6] = v7[6];
    v6 += 8;
    v8 = v7[7];
    v7 += 8;
    *(v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  v9 = v2 + 16;
  *v6 = *v7;
  v6[1] = v7[1];
  *((_QWORD *)v6 + 4) = *((_QWORD *)v7 + 4);
  *(_OWORD *)((char *)this + 980) = gTouchPadParameters;
  *(_QWORD *)((char *)this + 996) = *(_QWORD *)&qword_1C0294F10;
  *(_OWORD *)((char *)this + 1004) = gAapState;
  *(_OWORD *)((char *)this + 1020) = xmmword_1C029D990;
  *(_OWORD *)((char *)this + 1036) = xmmword_1C029D9A0;
  *(_OWORD *)((char *)this + 1052) = xmmword_1C029D9B0;
  *(_OWORD *)((char *)this + 1068) = xmmword_1C029D9C0;
  *(_OWORD *)((char *)this + 1084) = xmmword_1C029D9D0;
  *(_DWORD *)v2 = *((_DWORD *)a2 + 192);
  *((_OWORD *)v2 + 1) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 22) = *((_DWORD *)a2 + 238);
  *((_DWORD *)v2 + 3) = *((_DWORD *)gpsi + 497) != 0;
  *((union _LARGE_INTEGER *)v2 + 10) = gliQpcFreq;
  *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 67);
  *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 8) += *((_DWORD *)a2 + 68);
  v10 = *((_DWORD *)v2 + 9) + *((_DWORD *)a2 + 69);
  v11 = *((_DWORD *)v2 + 11);
  v12 = *((_DWORD *)v2 + 8);
  *((_DWORD *)v2 + 9) = v10;
  *((_DWORD *)v2 + 10) -= *((_DWORD *)a2 + 70);
  v13 = v11 - *((_DWORD *)a2 + 71);
  v14 = *((_DWORD *)v2 + 10) - v12 < 0;
  *((_DWORD *)v2 + 11) = v13;
  if ( v14 || v13 - v10 < 0 )
    *((_OWORD *)v2 + 2) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)v2 + 12) += *((_DWORD *)a2 + 72);
  v15 = *((_DWORD *)v2 + 13) + *((_DWORD *)a2 + 73);
  v16 = *((_DWORD *)v2 + 15);
  v17 = *((_DWORD *)v2 + 12);
  *((_DWORD *)v2 + 13) = v15;
  *((_DWORD *)v2 + 14) -= *((_DWORD *)a2 + 74);
  v18 = v16 - *((_DWORD *)a2 + 75);
  v14 = *((_DWORD *)v2 + 14) - v17 < 0;
  *((_DWORD *)v2 + 15) = v18;
  if ( v14 || v18 - v15 < 0 )
    *((_OWORD *)v2 + 3) = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)v2 + 4) = *(_OWORD *)((char *)a2 + 140);
  v19 = *((_DWORD *)a2 + 37);
  v20 = v19 - EngMulDiv(v19, *((_DWORD *)a2 + 76), 100);
  *((_DWORD *)v2 + 16) = v20;
  v21 = EngMulDiv(*((_DWORD *)a2 + 38), 100 - *((_DWORD *)a2 + 77), 100);
  *((_DWORD *)v2 + 17) = v21;
  v22 = v21;
  v23 = *((_DWORD *)a2 + 37);
  v24 = v20;
  if ( v20 >= v23 )
    v24 = *((_DWORD *)a2 + 37);
  if ( v24 <= *((_DWORD *)a2 + 35) )
  {
    v20 = *((_DWORD *)a2 + 35);
  }
  else if ( v20 >= v23 )
  {
    v20 = *((_DWORD *)a2 + 37);
  }
  *((_DWORD *)v2 + 16) = v20;
  v25 = *((_DWORD *)a2 + 38) - ((*((_DWORD *)a2 + 90) & 8) == 0 ? 0x3E8 : 0);
  v26 = v25;
  if ( v22 < v25 )
    v26 = v22;
  if ( v26 <= *((_DWORD *)a2 + 36) )
  {
    v25 = *((_DWORD *)a2 + 36);
  }
  else if ( v22 < v25 )
  {
    v25 = v22;
  }
  *((_DWORD *)v2 + 17) = v25;
  *(_OWORD *)(v2 + 92) = *(_OWORD *)((char *)a2 + 328);
  *(_OWORD *)(v2 + 108) = *(_OWORD *)((char *)a2 + 344);
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a2 + 312)) )
    v9 = v27;
  *(_OWORD *)(v2 + 124) = *v9;
}
