/*
 * XREFs of ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C1708
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C00A705C (DrvGetCurrentDpiInfoFromHDev.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

void __fastcall GetMonitorDpiInfo(__int64 a1, char a2, struct tagRECT *a3, struct _DPI_INFORMATION *a4)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // ecx
  _OWORD v14[6]; // [rsp+20h] [rbp-60h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( (int)DrvGetCurrentDpiInfoFromHDev(a1, (__int64)v14) < 0 )
  {
    v13 = a3->right - a3->left;
    *(_QWORD *)&v14[0] = 0x6400000064LL;
    *((_QWORD *)&v14[0] + 1) = 0x6400000064LL;
    LODWORD(v14[2]) = v13;
    DWORD1(v14[2]) = a3->bottom - a3->top;
    HIDWORD(v14[5]) ^= (BYTE12(v14[5]) ^ (unsigned __int8)(32 * a2)) & 0x20;
    DWORD2(v14[5]) = 1;
  }
  v8 = v14[1];
  *(_OWORD *)a4 = v14[0];
  v9 = v14[2];
  *((_OWORD *)a4 + 1) = v8;
  v10 = v14[3];
  *((_OWORD *)a4 + 2) = v9;
  v11 = v14[4];
  *((_OWORD *)a4 + 3) = v10;
  v12 = v14[5];
  *((_OWORD *)a4 + 4) = v11;
  *((_OWORD *)a4 + 5) = v12;
}
