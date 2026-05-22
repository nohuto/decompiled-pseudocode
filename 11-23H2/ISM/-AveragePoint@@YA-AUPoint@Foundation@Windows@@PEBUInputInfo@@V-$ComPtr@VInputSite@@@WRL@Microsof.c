/*
 * XREFs of ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801CECD8
 * Callers:
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801CEE10 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801CEFB0 (-DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180059188 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x18013EE9C (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
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
  int v13; // r10d
  __int64 RelativePoint; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v21; // [rsp+58h] [rbp+28h]
  __int64 v22; // [rsp+60h] [rbp+30h]

  v21 = a2;
  v20 = 0LL;
  v22 = 0LL;
  v5 = (_DWORD *)(a1 + 320);
  gsl::details::extent_type<-1>::extent_type<-1>(v19, *(unsigned int *)(a1 + 316), a3, a4);
  if ( v19[0] == -1LL || !v5 && v19[0] )
  {
    _o_terminate(v7, v6, v19[0], v8);
    return AveragePoint_::_1_::dtor_0();
  }
  else
  {
    v9 = &v5[36 * v19[0]];
    v10 = 0;
    v11 = HIDWORD(v20);
    if ( v5 != v9 )
    {
      v12 = v5 + 13;
      v10 = v20;
      do
      {
        v10 += *(v12 - 1);
        v11 += *v12;
        v12 += 36;
      }
      while ( v12 - 13 != v9 );
    }
    v13 = v10 / SLODWORD(v19[0]);
    LODWORD(v20) = v10 / SLODWORD(v19[0]);
    HIDWORD(v20) = v11 / SLODWORD(v19[0]);
    if ( *a2 )
    {
      RelativePoint = InputSite::GetRelativePoint(*a2, (__int64)v19, (int *)&v20);
      v15 = *(float *)(RelativePoint + 4);
      *(float *)&v22 = v15;
      v16 = *(float *)(RelativePoint + 8);
    }
    else
    {
      v15 = (float)v13;
      *(float *)&v22 = (float)v13;
      v16 = (float)(v11 / SLODWORD(v19[0]));
    }
    *((float *)&v22 + 1) = v16;
    v20 = __PAIR64__(LODWORD(v16), LODWORD(v15));
    v17 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v20;
  }
}
