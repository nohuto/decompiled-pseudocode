/*
 * XREFs of ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003E6AC
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x18003DE98 (--1CDWMDisplay@@AEAA@XZ.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003E7C0 (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003E864 (-IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ??0CDWMDisplay@@AEAA@AEBV0@@Z @ 0x1800BBAD0 (--0CDWMDisplay@@AEAA@AEBV0@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BBB94 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800BBC64 (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CDWMDisplaySet::IsEquivalentRotated(CDWMDisplaySet *this, const struct CDWMDisplaySet *a2)
{
  bool IsEquivalentTo; // bl
  CDWMDisplay *v5; // r15
  char v6; // r8
  __int64 v7; // r10
  int v8; // r14d
  int v9; // ecx
  char v11; // si
  __int128 v12; // xmm6
  const struct CDWMDisplay *v13; // r10
  int v14; // edx
  __m256i v15; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+60h] [rbp-A8h]
  __int128 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v20[56]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v21; // [rsp+C0h] [rbp-48h]
  int v22; // [rsp+144h] [rbp+3Ch]
  int v23; // [rsp+148h] [rbp+40h]
  int v24; // [rsp+160h] [rbp+58h]

  memset(&v16.m256i_u64[1], 0, 24);
  IsEquivalentTo = 0;
  v17 = 0;
  memset(&v15.m256i_u64[1], 0, 24);
  v16.m256i_i32[0] = 0;
  if ( *((_DWORD *)this + 16) == *((_DWORD *)a2 + 16)
    && (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(this, &v16.m256i_u64[1]) >= 0
    && (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(a2, &v15.m256i_u64[1]) >= 0
    && v17 == 1
    && v16.m256i_i32[0] == 1 )
  {
    v5 = *(CDWMDisplay **)v16.m256i_i64[1];
    if ( CDWMDisplay::IsRenderTargetEquivalentTo(
           *(CDWMDisplay **)v16.m256i_i64[1],
           *(const struct CDWMDisplay **)v15.m256i_i64[1]) )
    {
      v8 = *((_DWORD *)v5 + 54);
      v9 = *(_DWORD *)(v7 + 216);
      if ( v8 != v9 )
      {
        v19 = *((_OWORD *)this + 1);
        v11 = 0;
        if ( ((v8 - 2) & 0xFFFFFFFD) == 0 )
          v11 = v6;
        if ( ((v9 - 2) & 0xFFFFFFFD) == 0 )
          v11 ^= v6;
        if ( v11 )
        {
          LODWORD(v18) = *((_DWORD *)a2 + 5);
          DWORD1(v18) = *((_DWORD *)a2 + 4);
          DWORD2(v18) = *((_DWORD *)a2 + 7);
          HIDWORD(v18) = *((_DWORD *)a2 + 6);
          v12 = v18;
        }
        else
        {
          v12 = *((_OWORD *)a2 + 1);
          v18 = v12;
        }
        if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(&v19, &v18) )
        {
          CDWMDisplay::CDWMDisplay((CDWMDisplay *)v20, v13);
          v24 = v8;
          if ( v11 )
          {
            v21 = v12;
            v14 = v22;
            v22 = v23;
            v23 = v14;
          }
          IsEquivalentTo = CDWMDisplay::IsEquivalentTo(v5, (const struct CDWMDisplay *)v20);
          CDWMDisplay::~CDWMDisplay((CDWMDisplay *)v20);
        }
      }
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v15.m256i_i64[1]);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v16.m256i_i64[1]);
  return IsEquivalentTo;
}
