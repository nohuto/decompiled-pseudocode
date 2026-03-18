/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C00642EC
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0063FF4 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01E3A90 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00588B8 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     EngMulDiv @ 0x1C005A530 (EngMulDiv.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00629A4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x1C00633EC (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C00644A0 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C009C3B0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

void __fastcall CCursorClip::OnDisplayStateChange(__int64 a1, char a2)
{
  struct tagRECT *Reserved; // rbp
  struct tagRECT v4; // xmm1
  struct tagRECT v5; // xmm0
  struct tagRECT v6; // xmm1
  struct tagRECT v7; // xmm0
  struct tagRECT v8; // xmm1
  struct tagRECT v9; // xmm0
  struct tagRECT v10; // xmm0
  struct tagRECT v11; // xmm1
  struct tagRECT v12; // xmm0
  __int64 v13; // rax
  struct tagRECT v14; // xmm0
  char v15; // si
  _DWORD *v16; // r15
  char *v17; // rax
  _QWORD **v18; // rdi
  _QWORD *i; // rcx
  _DWORD *v20; // r14
  int v21; // eax
  _DWORD *v22; // rsi
  int v23; // edi
  _DWORD *v24; // rsi
  int v25; // edi
  struct tagRECT v26; // [rsp+20h] [rbp-2F8h] BYREF
  _OWORD v27[45]; // [rsp+30h] [rbp-2E8h] BYREF

  Reserved = (struct tagRECT *)WPP_MAIN_CB.Reserved;
  CPushLock::AcquireLockExclusive((CPushLock *)((char *)WPP_MAIN_CB.Reserved + 32));
  if ( (a2 & 1) != 0 )
  {
    v15 = 0;
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v26);
    v16 = 0LL;
    v17 = (char *)*((_QWORD *)gpInputConfig + 3);
    if ( !v17 )
      v17 = (char *)gpInputConfig + 32;
    v18 = (_QWORD **)(v17 + 1456);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    for ( i = *v18; ; i = (_QWORD *)*i )
    {
      v20 = 0LL;
      if ( i != v18 )
        v20 = i + 2;
      if ( !v20 )
        break;
      v21 = v20[4];
      if ( (v21 & 1) != 0 )
        v16 = v20;
      if ( (Reserved[4].left & (unsigned __int8)v21 & 2) != 0
        && v20[6] == Reserved[4].right
        && v20[7] == Reserved[4].bottom
        && v20[8] == Reserved[5].left )
      {
        v22 = gpsi;
        v23 = *v20;
        v22[1240] = v23
                  + EngMulDiv(
                      *((_DWORD *)gpsi + 1240) - Reserved[3].left,
                      v20[2] - *v20,
                      Reserved[3].right - Reserved[3].left);
        v24 = gpsi;
        v25 = v20[1];
        v24[1241] = v25
                  + EngMulDiv(
                      *((_DWORD *)gpsi + 1241) - Reserved[3].top,
                      v20[3] - v25,
                      Reserved[3].bottom - Reserved[3].top);
        v15 = 1;
        break;
      }
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
    if ( !v15 )
    {
      if ( v16 )
      {
        *((_DWORD *)gpsi + 1240) = *v16 + (v16[2] - *v16) / 2;
        *((_DWORD *)gpsi + 1241) = v16[1] + (v16[3] - v16[1]) / 2;
      }
      else
      {
        *((_QWORD *)gpsi + 620) = 0LL;
      }
    }
    ExReleaseResourceLite(**(PERESOURCE **)&v26.right);
    KeLeaveCriticalRegion();
  }
  memset(v27, 0, 0xC8uLL);
  v4 = (struct tagRECT)v27[1];
  Reserved[3] = (struct tagRECT)v27[0];
  v5 = (struct tagRECT)v27[2];
  Reserved[4] = v4;
  v6 = (struct tagRECT)v27[3];
  Reserved[5] = v5;
  v7 = (struct tagRECT)v27[4];
  Reserved[6] = v6;
  v8 = (struct tagRECT)v27[5];
  Reserved[7] = v7;
  v9 = (struct tagRECT)v27[6];
  Reserved[8] = v8;
  Reserved[9] = v9;
  Reserved[10] = (struct tagRECT)v27[7];
  v10 = (struct tagRECT)v27[9];
  Reserved[11] = (struct tagRECT)v27[8];
  v11 = (struct tagRECT)v27[10];
  Reserved[12] = v10;
  v12 = (struct tagRECT)v27[11];
  v13 = *(_QWORD *)&v27[12];
  Reserved[13] = v11;
  Reserved[14] = v12;
  *(_QWORD *)&Reserved[15].left = v13;
  v14 = *(struct tagRECT *)InputConfig::Mouse::GetUnionRegion(v27);
  *Reserved = v14;
  v26 = v14;
  CCursorClip::UpdateClipRect(Reserved, &v26);
  LOBYTE(Reserved[17].top) = **(_DWORD **)gpDispInfo > 1u;
  CCursorClip::DeadzoneJumping::RefreshRegions((CCursorClip::DeadzoneJumping *)&Reserved[17].right);
  CPushLock::ReleaseLock((CPushLock *)&Reserved[2]);
}
