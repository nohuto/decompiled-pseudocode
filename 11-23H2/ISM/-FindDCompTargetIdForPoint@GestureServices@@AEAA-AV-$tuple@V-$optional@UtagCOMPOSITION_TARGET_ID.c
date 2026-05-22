/*
 * XREFs of ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18006055C
 * Callers:
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180060694 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180059188 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800A0290 (-terminate@details@gsl@@YAXXZ.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800FF9F4 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

__int64 __fastcall GestureServices::FindDCompTargetIdForPoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5)
{
  int v5; // r15d
  gsl::details *v9; // rcx
  const RECT *v10; // rdi
  const RECT *v11; // r12
  __int128 *v12; // rdx
  __int128 *v13; // r8
  int v14; // r9d
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  int v17; // edx
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // xmm0_8
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a4;
  if ( (_DWORD)a4 )
  {
    gsl::details::extent_type<-1>::extent_type<-1>(v22, (unsigned int)a4, a3, a4);
    if ( v22[0] == -1LL || !a5 && v22[0] )
    {
      gsl::details::terminate(v9);
      JUMPOUT(0x18006068DLL);
    }
    v10 = *(const RECT **)(a1 + 112);
    v11 = *(const RECT **)(a1 + 120);
    while ( v10 != v11 )
    {
      if ( PtInRect(v10, (POINT)a3) )
      {
        v12 = a5;
        v13 = (__int128 *)((char *)a5 + 28 * v22[0]);
        if ( a5 != v13 )
        {
          v14 = v10[1].left & 2;
          while ( !v14 || !(unsigned __int8)operator==(&v10[2].top, v12) || v10[2].bottom != *((_DWORD *)v12 + 5) )
          {
            v12 = (__int128 *)((char *)v12 + 28);
            if ( v12 == v13 )
              goto LABEL_14;
          }
          v15 = *v12;
          v16 = *((_QWORD *)v12 + 2);
          v17 = *((_DWORD *)v12 + 6);
          *(_QWORD *)a2 = v10 + 3;
          *(_OWORD *)(a2 + 8) = v15;
          *(_QWORD *)(a2 + 24) = v16;
          *(_DWORD *)(a2 + 32) = v17;
          goto LABEL_16;
        }
      }
LABEL_14:
      v10 = (const RECT *)((char *)v10 + 200);
    }
    if ( v5 == 1 )
    {
      v18 = *a5;
      v19 = *((_DWORD *)a5 + 6);
      v20 = *((_QWORD *)a5 + 2);
      *(_QWORD *)a2 = &Src;
      *(_OWORD *)(a2 + 8) = v18;
      *(_QWORD *)(a2 + 24) = v20;
      *(_DWORD *)(a2 + 32) = v19;
LABEL_16:
      *(_BYTE *)(a2 + 36) = 1;
      return a2;
    }
  }
  *(_QWORD *)a2 = &Src;
  *(_BYTE *)(a2 + 36) = 0;
  return a2;
}
