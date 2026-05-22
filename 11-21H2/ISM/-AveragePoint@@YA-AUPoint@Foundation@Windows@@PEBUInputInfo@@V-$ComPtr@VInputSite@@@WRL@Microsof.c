/*
 * XREFs of ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801B08A0
 * Callers:
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801B09D0 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801B0B70 (-DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x180123EBC (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AveragePoint(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // r9d
  _DWORD *v12; // rbx
  __int64 RelativePoint; // rax
  float v14; // xmm0_4
  float v15; // xmm1_4
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v20; // [rsp+48h] [rbp+10h]

  v20 = a2;
  v19 = 0LL;
  v5 = (_DWORD *)(a1 + 320);
  gsl::details::extent_type<-1>::extent_type<-1>(v18, *(unsigned int *)(a1 + 316), a3, a4);
  if ( v18[0] == -1LL || !v5 && v18[0] )
  {
    _o_terminate(v7, v6, v18[0], v8);
    return AveragePoint_::_1_::dtor_0();
  }
  else
  {
    v9 = &v5[36 * v18[0]];
    v10 = 0;
    v11 = HIDWORD(v19);
    if ( v5 != v9 )
    {
      v12 = v5 + 13;
      v10 = v19;
      do
      {
        v10 += *(v12 - 1);
        v11 += *v12;
        v12 += 36;
      }
      while ( v12 - 13 != v9 );
    }
    LODWORD(v19) = v10 / SLODWORD(v18[0]);
    HIDWORD(v19) = v11 / SLODWORD(v18[0]);
    if ( *a2 )
    {
      RelativePoint = InputSite::GetRelativePoint(*a2, (__int64)v18, (int *)&v19);
      v14 = *(float *)(RelativePoint + 4);
      v15 = *(float *)(RelativePoint + 8);
    }
    else
    {
      v14 = (float)(v10 / SLODWORD(v18[0]));
      v15 = (float)(v11 / SLODWORD(v18[0]));
    }
    v19 = __PAIR64__(LODWORD(v15), LODWORD(v14));
    v16 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v19;
  }
}
