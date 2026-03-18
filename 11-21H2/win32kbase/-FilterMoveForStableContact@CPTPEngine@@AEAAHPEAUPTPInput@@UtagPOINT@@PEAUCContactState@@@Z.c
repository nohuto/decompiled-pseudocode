/*
 * XREFs of ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C0201120
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01FF558 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C02007A8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01FF270 (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall CPTPEngine::FilterMoveForStableContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        struct CContactState *a4)
{
  __int64 v7; // rbp
  int v8; // ecx
  char v9; // dl
  char v10; // r8
  int v11; // ecx
  bool v12; // al
  bool v13; // di
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  BOOL v16; // r8d
  int v17; // eax
  bool v18; // cl

  if ( (*((_DWORD *)this + 67) & 0x80u) == 0 )
    return 0LL;
  v7 = *(_QWORD *)a2;
  if ( a3 )
  {
    v8 = *(_DWORD *)a4;
    v9 = 1;
LABEL_6:
    if ( (v8 & 0x4000000) == 0 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v8 = *(_DWORD *)a4;
  v9 = 0;
  if ( (*(_DWORD *)a4 & 0x4000000) == 0 )
  {
    v8 |= 0x4000000u;
    *(_DWORD *)a4 = v8;
    *((_QWORD *)a4 + 15) = *(_QWORD *)a2;
    goto LABEL_6;
  }
LABEL_7:
  if ( v9 )
  {
    v10 = 1;
LABEL_10:
    *(_DWORD *)a4 = v8 & 0xFBFFFFFF;
    goto LABEL_11;
  }
LABEL_9:
  v10 = 0;
  if ( v9 )
    goto LABEL_10;
LABEL_11:
  v11 = *((_DWORD *)this + 984);
  v12 = (v11 & 1) != 0 && *((_QWORD *)a4 + 9) <= *((_QWORD *)this + 468);
  if ( (v11 & 0x20000000) != 0 || v12 )
  {
    v13 = 0;
    if ( v10 )
      v13 = v7 - *((_QWORD *)a4 + 15) >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 79) / 0x3E8;
  }
  else
  {
    v13 = 0;
  }
  v14 = v7 - *((_QWORD *)a4 + 14);
  v15 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 78) / 0x3E8;
  v16 = CPTPEngine::CrossedTPMoveFilteringThreshold(this, a4, *(struct tagPOINT *)((char *)a4 + 8));
  v17 = *(_DWORD *)a4;
  v18 = (*(_DWORD *)a4 & 0x8000000) != 0 && v14 < v15 && !v16;
  if ( v13 )
  {
    *((_QWORD *)a4 + 7) = *((_QWORD *)a4 + 1);
    *((_QWORD *)a4 + 8) = *(_QWORD *)((char *)a2 + 28);
    *(_DWORD *)a4 = v17 | 0x8000000;
    *((_QWORD *)a4 + 14) = v7;
  }
  else if ( !v18 )
  {
    *(_DWORD *)a4 = v17 & 0xF7FFFFFF;
    return 0LL;
  }
  return 1LL;
}
