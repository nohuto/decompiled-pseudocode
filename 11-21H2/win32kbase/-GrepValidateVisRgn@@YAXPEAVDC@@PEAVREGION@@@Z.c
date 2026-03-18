/*
 * XREFs of ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001EEA0
 * Callers:
 *     GreValidateVisrgn @ 0x1C002BFA8 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C001B718 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C001E924 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1C001E944 (-bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C001E974 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C001EB64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0020DC0 (HmgShareLockCheck.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C008E64C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D8BE8 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

void __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  _BYTE v12[32]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v13; // [rsp+78h] [rbp+17h]
  tagRECT v14; // [rsp+80h] [rbp+1Fh] BYREF
  __m128i si128; // [rsp+90h] [rbp+2Fh] BYREF

  if ( (*((_DWORD *)a1 + 9) & 0x100000) != 0 )
  {
    v4 = *((_QWORD *)a1 + 6);
    if ( v4 )
    {
      if ( a2 )
      {
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v12);
        v6 = (*((_DWORD *)a1 + 9) & 0x40000) == 0;
        v13 = 0LL;
        if ( v6 )
        {
          v7 = *((_QWORD *)a1 + 62);
        }
        else
        {
          v8 = *((_QWORD *)a1 + 265);
          if ( v8 )
          {
            LOBYTE(v5) = 5;
            v7 = HmgShareLockCheck(v8, v5);
            v13 = v7;
          }
          else
          {
            v7 = *(_QWORD *)(v4 + 2528);
          }
        }
        if ( v7 && ((*(_DWORD *)(v4 + 40) & 0x20000) == 0 || *(int *)(v7 + 112) >= 0) )
        {
          v14 = (tagRECT)*((_OWORD *)a2 + 6);
          if ( (*((_DWORD *)a1 + 9) & 0x5000) != 0x1000 && !ERECTL::bEmpty((ERECTL *)&v14) )
          {
            si128 = _mm_load_si128((const __m128i *)&_xmm);
            if ( !ERECTL::bEqual((ERECTL *)&v14, (const struct ERECTL *)&si128) )
            {
              v6 = (*(_DWORD *)(v9 + 116) & 0x800) == 0;
              v10 = 668LL;
              si128.m128i_i64[0] = 0LL;
              if ( v6 )
                v10 = 56LL;
              si128.m128i_i64[1] = *(_QWORD *)(v10 + v9);
              if ( IsRectEmptyInl(&v14) || !ERECTL::bContain((ERECTL *)&si128, (const struct _RECTL *)&v14) )
              {
                DbgkWerCaptureLiveKernelDump(L"win32k.sys", 400LL, 1LL, a1, v11, a2, 0LL, 0LL, 0);
                ERECTL::vOrder((ERECTL *)&v14);
                ERECTL::operator*=(&v14.left, si128.m128i_i32);
                si128.m128i_i64[0] = (__int64)a2;
                RGNOBJ::vSet((RGNOBJ *)&si128, (struct _RECTL *)&v14);
              }
            }
          }
        }
        SURFREF::~SURFREF((SURFREF *)v12);
      }
    }
  }
}
