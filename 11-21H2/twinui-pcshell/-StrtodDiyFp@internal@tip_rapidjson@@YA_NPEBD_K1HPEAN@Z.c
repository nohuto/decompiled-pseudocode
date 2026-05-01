/*
 * XREFs of ?StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z @ 0x1803502F0
 * Callers:
 *     ?StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z @ 0x180350720 (-StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??DDiyFp@internal@tip_rapidjson@@QEBA?AU012@AEBU012@@Z @ 0x18034D37C (--DDiyFp@internal@tip_rapidjson@@QEBA-AU012@AEBU012@@Z.c)
 *     ?ToDouble@DiyFp@internal@tip_rapidjson@@QEBANXZ @ 0x18035086C (-ToDouble@DiyFp@internal@tip_rapidjson@@QEBANXZ.c)
 */

char __fastcall tip_rapidjson::internal::StrtodDiyFp(
        tip_rapidjson::internal *this,
        const char *a2,
        int a3,
        int a4,
        double *a5)
{
  char v5; // bl
  unsigned __int64 v9; // r10
  const char *v10; // r11
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  int v13; // edi
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // r15d
  int v17; // edi
  int v18; // r10d
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // r10
  __m128i v21; // xmm0
  int v22; // edx
  unsigned __int64 v23; // r10
  int v24; // r8d
  int v25; // eax
  __int64 v26; // r9
  int v27; // edx
  unsigned __int64 v28; // r10
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // r10
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  int v35; // ecx
  __int128 v36; // [rsp+20h] [rbp-40h] BYREF
  __int128 v37; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    while ( v9 <= 0x1999999999999999LL )
    {
      if ( v9 == 0x1999999999999999LL && *((char *)this + (_QWORD)v10) > 53 )
        goto LABEL_8;
      v11 = (unsigned int)(*((char *)this + (_QWORD)v10++) - 48);
      v9 = v11 + 10 * v9;
      if ( v10 >= a2 )
        goto LABEL_9;
    }
    if ( *((char *)this + (_QWORD)v10) < 53 )
      goto LABEL_9;
LABEL_8:
    ++v9;
  }
LABEL_9:
  _BitScanReverse64(&v12, v9);
  *(_QWORD *)&v36 = v9 << (63 - (unsigned __int8)v12);
  DWORD2(v36) = v12 - 63;
  v13 = a4 + a3 - (_DWORD)v10;
  v14 = (unsigned __int64)(v10 != a2 ? 4 : 0) << (63 - (unsigned __int8)v12);
  v15 = (unsigned int)(v13 + 348) >> 3;
  LODWORD(v12) = `tip_rapidjson::internal::GetCachedPowerByIndex'::`2'::kCachedPowers_E[v15];
  v16 = 8 * v15 - 348;
  *(_QWORD *)&v37 = `tip_rapidjson::internal::GetCachedPowerByIndex'::`2'::kCachedPowers_F[v15];
  DWORD2(v37) = v12;
  if ( v16 != v13 )
  {
    if ( __TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA[0] > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                                 + (unsigned int)tls_index)
                                                                                               + 16LL) )
    {
      Init_thread_header(__TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA);
      if ( __TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA[0] == -1 )
      {
        dword_1807B5F58 = -60;
        `tip_rapidjson::internal::StrtodDiyFp'::`11'::kPow10 = 0xA000000000000000uLL;
        dword_1807B5F68 = -57;
        qword_1807B5F60 = 0xC800000000000000uLL;
        qword_1807B5F70 = 0xFA00000000000000uLL;
        qword_1807B5F80 = 0x9C40000000000000uLL;
        qword_1807B5F90 = 0xC350000000000000uLL;
        qword_1807B5FA0 = 0xF424000000000000uLL;
        qword_1807B5FB0 = 0x9896800000000000uLL;
        dword_1807B5F78 = -54;
        dword_1807B5F88 = -50;
        dword_1807B5F98 = -47;
        dword_1807B5FA8 = -44;
        dword_1807B5FB8 = -40;
        Init_thread_footer(__TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA);
      }
    }
    v17 = v13 - v16;
    if ( (unsigned int)(v17 - 1) > 6 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    v36 = *(_OWORD *)tip_rapidjson::internal::DiyFp::operator*(
                       (unsigned __int64 *)&v36,
                       (__int64)pExceptionObject,
                       (unsigned __int64 *)&__TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA[4 * v17]);
    if ( (unsigned __int64)&a2[v18] > 0x13 )
      v14 += 4LL;
  }
  v19 = (unsigned __int64 *)tip_rapidjson::internal::DiyFp::operator*(
                              (unsigned __int64 *)&v36,
                              (__int64)pExceptionObject,
                              (unsigned __int64 *)&v37);
  v20 = *v19;
  v21 = *(__m128i *)v19;
  _BitScanReverse64((unsigned __int64 *)&v19, *v19);
  v22 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
  v23 = v20 << (63 - (unsigned __int8)v19);
  *(_QWORD *)&v37 = v23;
  v24 = v22 + (_DWORD)v19 - 63;
  DWORD2(v37) = v24;
  v36 = v37;
  v25 = v24 + 64;
  v26 = (v14 + (v14 != 0) + 8LL) << ((unsigned __int8)v22 - (unsigned __int8)v24);
  if ( v24 + 64 < -1021 )
  {
    if ( v25 > -1074 )
    {
      v27 = -1010 - v25;
      if ( (unsigned int)(-1010 - v25 + 3) < 0x40 )
        goto LABEL_18;
    }
    else
    {
      v27 = 64;
    }
    v35 = v27 - 60;
    v26 >>= (unsigned __int8)v27 - 60;
    v27 = 60;
    LODWORD(v26) = v26 + 9;
    v28 = v23 >> v35;
    v24 = v35 + DWORD2(v36);
    goto LABEL_19;
  }
  v27 = 11;
LABEL_18:
  v28 = v36;
LABEL_19:
  v29 = (unsigned int)v26;
  DWORD2(v36) = v24 + v27;
  *(_QWORD *)&v36 = v28 >> v27;
  if ( 8 * (v28 & ((1LL << v27) - 1)) >= (unsigned __int64)(unsigned int)v26 + 8 * (1LL << ((unsigned __int8)v27 - 1)) )
  {
    v30 = (v28 >> v27) + 1;
    *(_QWORD *)&v36 = v30;
    if ( (v30 & 0x20000000000000LL) != 0 )
    {
      *(_QWORD *)&v36 = v30 >> 1;
      DWORD2(v36) = v24 + v27 + 1;
    }
  }
  *a5 = tip_rapidjson::internal::DiyFp::ToDouble((tip_rapidjson::internal::DiyFp *)&v36);
  if ( v31 - v29 >= v32 || v32 >= v33 )
    return 1;
  return v5;
}
