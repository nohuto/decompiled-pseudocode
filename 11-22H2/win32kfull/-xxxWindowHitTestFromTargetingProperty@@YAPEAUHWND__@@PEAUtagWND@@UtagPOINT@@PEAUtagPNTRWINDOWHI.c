/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01E5C0C
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5F80 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C004174C (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121240 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C01E4170 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01E4950 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

HWND __fastcall xxxWindowHitTestFromTargetingProperty(
        unsigned __int64 *a1,
        struct tagPOINT a2,
        __int64 a3,
        int *a4,
        int a5,
        __int64 a6)
{
  HWND v8; // r12
  int v9; // esi
  __int128 *v10; // rcx
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 v16; // r13
  __int64 v17; // rdi
  unsigned int v18; // r14d
  _DWORD *v19; // rdi
  HWND v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct tagWND *v24; // r14
  struct tagPOINT v26; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v27; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v28; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v29; // [rsp+70h] [rbp-90h] BYREF
  int *v30; // [rsp+80h] [rbp-80h]
  _DWORD v31[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B4h] [rbp-4Ch]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  __int128 v40; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-20h]
  struct tagRECT v42; // [rsp+F0h] [rbp-10h] BYREF
  int v43; // [rsp+100h] [rbp+0h] BYREF
  __int64 v44; // [rsp+104h] [rbp+4h]
  __int128 v45; // [rsp+10Ch] [rbp+Ch]
  __int128 v46; // [rsp+11Ch] [rbp+1Ch]
  int v47; // [rsp+12Ch] [rbp+2Ch]

  v30 = a4;
  v26 = a2;
  *(_QWORD *)&v29.left = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (a1[2] == gptiCurrent || a1[33] == gptiCurrent) )
  {
    v40 = 0LL;
    v41 = 0LL;
    ThreadLock(a1, &v40);
    EtwTraceTouchTargetingPointerTargetStart();
    v10 = *(__int128 **)(a3 + 40);
    v11 = *(unsigned __int16 *)(a3 + 8);
    v45 = 0LL;
    v43 = v11;
    v46 = 0LL;
    v44 = *((_QWORD *)v10 + 4);
    v45 = v10[1];
    v46 = *v10;
    v47 = *((_DWORD *)v10 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (__int128 *)&v43, 0, 0, 0LL, 1, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v14, v13, v15);
    v27 = 0LL;
    v16 = (v12 >> 20) & 0xFFF;
    if ( v16 <= 0xFFDu )
    {
      if ( (unsigned int)v16 < *(_DWORD *)(a3 + 64)
        || !*(_QWORD *)(a3 + 56)
        || (*(_DWORD *)(a3 + 176) & 1) != 0
        && (v27.x = v26.x + *(_DWORD *)(a3 + 48),
            v27.y = v26.y + *(_DWORD *)(a3 + 52),
            PtInRect((_DWORD *)(a1[5] + 88), *(_QWORD *)&v27)) )
      {
        v17 = (v12 >> 10) & 0x3FF;
        v27.x = v17;
        if ( (unsigned int)v17 > 0x1FF )
        {
          LODWORD(v17) = v17 - 1024;
          v27.x = v17;
        }
        v18 = v12 & 0x3FF;
        v27.y = v18;
        if ( v18 > 0x1FF )
        {
          v18 -= 1024;
          v27.y = v18;
        }
        if ( (unsigned int)OffsetInContact(v26, *(const struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v27) )
        {
          v26.y += v18;
          v26.x += v17;
          if ( *(_DWORD *)(a3 + 84) )
          {
            v28 = v26;
            LogicalToPhysicalDPIPoint(&v28, &v26, *(unsigned int *)(a1[5] + 288), 0LL);
            v19 = (_DWORD *)(a3 + 32);
            v31[0] = *(_DWORD *)a3;
            v34 = a3 + 32;
            v31[1] = 0;
            v32 = *(_QWORD *)(a3 + 8);
            v33 = *(_QWORD *)(a3 + 16);
            v35 = *(_DWORD *)(a3 + 36);
            v36 = 0;
            v38 = 0LL;
            v37 = 0LL;
            v39 = 0LL;
            v20 = xxxDCEWindowHitTestIndirect((struct tagWND *)a1, v28, 1, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v31);
          }
          else
          {
            v19 = (_DWORD *)(a3 + 32);
            v20 = xxxWindowHitTest2((struct tagWND *)a1, v26, (int *)(a3 + 32), *(_DWORD *)(a3 + 36));
          }
          v8 = v20;
          if ( v20 )
          {
            v24 = (struct tagWND *)ValidateHwnd(v20);
            if ( v24 )
            {
              if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)a1, v21, v22, v23) )
                v16 = 0;
              else
                *v19 = 1;
              v42 = *(struct tagRECT *)*(_QWORD *)&v29.left;
              TransformRectBetweenCoordinateSpaces(&v42, *(_QWORD *)&v29.left, v24, a1);
              v29 = v42;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v24, v16, &v27, 0LL, 1, &v29, 1);
              if ( !v16 || !a1[14] )
                v9 = 0;
              *v30 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
