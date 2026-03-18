/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0206590
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C0101328 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C02049E0 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C02052C8 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

__int64 __fastcall xxxWindowHitTestFromTargetingProperty(
        unsigned __int64 *a1,
        struct tagPOINT a2,
        __int64 a3,
        int *a4,
        int a5,
        __int64 a6)
{
  __int64 v8; // r12
  int v9; // esi
  __int128 *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int16 v15; // r13
  __int64 v16; // rdi
  unsigned int v17; // r14d
  _DWORD *v18; // rdi
  __int64 v19; // rax
  struct tagWND *v20; // r14
  struct tagPOINT v22; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v23; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v24; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v25; // [rsp+70h] [rbp-90h] BYREF
  int *v26; // [rsp+80h] [rbp-80h]
  _DWORD v27[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B4h] [rbp-4Ch]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int128 v36; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h]
  struct tagRECT v38; // [rsp+F0h] [rbp-10h] BYREF
  int v39; // [rsp+100h] [rbp+0h] BYREF
  __int64 v40; // [rsp+104h] [rbp+4h]
  __int128 v41; // [rsp+10Ch] [rbp+Ch]
  __int128 v42; // [rsp+11Ch] [rbp+1Ch]
  int v43; // [rsp+12Ch] [rbp+2Ch]

  v26 = a4;
  v22 = a2;
  *(_QWORD *)&v25.left = a6;
  v8 = 0LL;
  v9 = 1;
  *a4 = 1;
  if ( a5 == 1 && (a1[2] == gptiCurrent || a1[33] == gptiCurrent) )
  {
    v36 = 0LL;
    v37 = 0LL;
    ThreadLock((__int64)a1, (__int64 *)&v36);
    EtwTraceTouchTargetingPointerTargetStart();
    v10 = *(__int128 **)(a3 + 40);
    v39 = *(unsigned __int16 *)(a3 + 8);
    v40 = *((_QWORD *)v10 + 4);
    v41 = v10[1];
    v42 = *v10;
    v43 = *((_DWORD *)v10 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v11 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (__int64)&v39, 0, 0, 0LL, 1, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v13, v12, v14);
    v23 = 0LL;
    v15 = (v11 >> 20) & 0xFFF;
    if ( v15 <= 0xFFDu )
    {
      if ( (unsigned int)v15 < *(_DWORD *)(a3 + 64)
        || !*(_QWORD *)(a3 + 56)
        || (*(_DWORD *)(a3 + 176) & 1) != 0
        && (v23.x = v22.x + *(_DWORD *)(a3 + 48),
            v23.y = v22.y + *(_DWORD *)(a3 + 52),
            PtInRect((_DWORD *)(a1[5] + 88), *(_QWORD *)&v23)) )
      {
        v16 = (v11 >> 10) & 0x3FF;
        v23.x = v16;
        if ( (unsigned int)v16 > 0x1FF )
        {
          LODWORD(v16) = v16 - 1024;
          v23.x = v16;
        }
        v17 = v11 & 0x3FF;
        v23.y = v17;
        if ( v17 > 0x1FF )
        {
          v17 -= 1024;
          v23.y = v17;
        }
        if ( (unsigned int)OffsetInContact(v22, *(const struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v23) )
        {
          v22.y += v17;
          v22.x += v16;
          if ( *(_DWORD *)(a3 + 84) )
          {
            v24 = v22;
            LogicalToPhysicalDPIPoint(&v24, &v22, *(unsigned int *)(a1[5] + 288), 0LL);
            v18 = (_DWORD *)(a3 + 32);
            v27[0] = *(_DWORD *)a3;
            v30 = a3 + 32;
            v27[1] = 0;
            v28 = *(_QWORD *)(a3 + 8);
            v29 = *(_QWORD *)(a3 + 16);
            v31 = *(_DWORD *)(a3 + 36);
            v32 = 0;
            v34 = 0LL;
            v33 = 0LL;
            v35 = 0LL;
            v19 = xxxDCEWindowHitTestIndirect((struct tagWND *)a1, v24, 1, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v27);
          }
          else
          {
            v18 = (_DWORD *)(a3 + 32);
            v19 = (__int64)xxxWindowHitTest2((const struct tagWND *)a1, v22, (int *)(a3 + 32), *(_DWORD *)(a3 + 36));
          }
          v8 = v19;
          if ( v19 )
          {
            v20 = (struct tagWND *)ValidateHwnd(v19);
            if ( v20 )
            {
              if ( (unsigned int)IsCompositionInputWindow((const struct tagWND *)a1) )
                v15 = 0;
              else
                *v18 = 1;
              v38 = *(struct tagRECT *)*(_QWORD *)&v25.left;
              TransformRectBetweenCoordinateSpaces(&v38, *(_QWORD *)&v25.left, v20, a1);
              v25 = v38;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v20, v15, &v23, 0LL, 1, &v25, 1);
              if ( !v15 || !a1[14] )
                v9 = 0;
              *v26 = v9;
            }
          }
        }
      }
    }
  }
  return v8;
}
