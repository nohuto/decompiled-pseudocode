/*
 * XREFs of ?StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z @ 0x18041A09C
 * Callers:
 *     ?StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z @ 0x18041A4C0 (-StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??DDiyFp@internal@tip_rapidjson@@QEBA?AU012@AEBU012@@Z @ 0x180417570 (--DDiyFp@internal@tip_rapidjson@@QEBA-AU012@AEBU012@@Z.c)
 *     ?ToDouble@DiyFp@internal@tip_rapidjson@@QEBANXZ @ 0x18041A60C (-ToDouble@DiyFp@internal@tip_rapidjson@@QEBANXZ.c)
 */

char __fastcall tip_rapidjson::internal::StrtodDiyFp(
        tip_rapidjson::internal *this,
        const char *a2,
        int a3,
        int a4,
        double *a5)
{
  char v5; // di
  unsigned __int64 v7; // r10
  const char *i; // r11
  const char *v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // ebx
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  int v14; // r15d
  int v15; // ebx
  int v16; // r10d
  __m128i *v17; // rax
  __int64 v18; // r10
  __m128i v19; // xmm0
  unsigned __int64 v20; // r10
  int v21; // r8d
  __int64 v22; // r9
  int v23; // ecx
  int v24; // edx
  int v25; // r11d
  char v26; // cl
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // r10
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  __int128 v33; // [rsp+20h] [rbp-40h] BYREF
  __int64 v34; // [rsp+30h] [rbp-30h] BYREF
  int v35; // [rsp+38h] [rbp-28h]
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  v7 = 0LL;
  for ( i = 0LL; i < a2; v7 = (unsigned int)(*v9 - 48) + 10 * v7 )
  {
    if ( v7 > 0x1999999999999999LL )
      break;
    if ( v7 == 0x1999999999999999LL )
    {
      v9 = (char *)this + (_QWORD)i;
      if ( *((char *)this + (_QWORD)i) > 53 )
        break;
    }
    else
    {
      v9 = &i[(_QWORD)this];
    }
    ++i;
  }
  if ( i < a2 && *((char *)this + (_QWORD)i) >= 53 )
    ++v7;
  _BitScanReverse64(&v10, v7);
  *(_QWORD *)&v33 = v7 << (63 - (unsigned __int8)v10);
  DWORD2(v33) = v10 - 63;
  v11 = a4 + a3 - (_DWORD)i;
  v12 = (unsigned __int64)(i != a2 ? 4 : 0) << (63 - (unsigned __int8)v10);
  v13 = (unsigned int)(v11 + 348) >> 3;
  LODWORD(v10) = `tip_rapidjson::internal::GetCachedPowerByIndex'::`2'::kCachedPowers_E[v13];
  v14 = 8 * v13 - 348;
  v34 = `tip_rapidjson::internal::GetCachedPowerByIndex'::`2'::kCachedPowers_F[v13];
  v35 = v10;
  if ( v14 != v11 )
  {
    if ( __TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                              + (unsigned int)tls_index)
                                                                                            + 16LL) )
    {
      Init_thread_header(&__TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA);
      if ( __TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA == -1 )
      {
        dword_180990E48 = -60;
        `tip_rapidjson::internal::StrtodDiyFp'::`11'::kPow10 = 0xA000000000000000uLL;
        dword_180990E58 = -57;
        qword_180990E50 = 0xC800000000000000uLL;
        qword_180990E60 = 0xFA00000000000000uLL;
        qword_180990E70 = 0x9C40000000000000uLL;
        qword_180990E80 = 0xC350000000000000uLL;
        qword_180990E90 = 0xF424000000000000uLL;
        qword_180990EA0 = 0x9896800000000000uLL;
        dword_180990E68 = -54;
        dword_180990E78 = -50;
        dword_180990E88 = -47;
        dword_180990E98 = -44;
        dword_180990EA8 = -40;
        Init_thread_footer(&__TSS0__L___StrtodDiyFp_internal_tip_rapidjson__YA_NPEBD_K1HPEAN_Z_4HA);
      }
    }
    v15 = v11 - v14;
    if ( (unsigned int)(v15 - 1) > 6 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    v33 = *(_OWORD *)tip_rapidjson::internal::DiyFp::operator*(
                       (unsigned __int64 *)&v33,
                       (__int64)pExceptionObject,
                       (unsigned __int64 *)&`TestControlReporting'::`2'::s_pfnTestControlReporting[2 * v15]);
    if ( (unsigned __int64)&a2[v16] > 0x13 )
      v12 += 4LL;
  }
  v17 = (__m128i *)tip_rapidjson::internal::DiyFp::operator*(
                     (unsigned __int64 *)&v33,
                     (__int64)pExceptionObject,
                     (unsigned __int64 *)&v34);
  v18 = v17->m128i_i64[0];
  v19 = _mm_srli_si128(*v17, 8);
  _BitScanReverse64((unsigned __int64 *)&v17, v17->m128i_i64[0]);
  v20 = v18 << (63 - (unsigned __int8)v17);
  v21 = _mm_cvtsi128_si32(v19) + (_DWORD)v17 - 63;
  v22 = (v12 + (v12 != 0) + 8LL) << (63 - (unsigned __int8)v17);
  v23 = v21 + 64;
  if ( v21 + 64 < -1021 )
  {
    if ( v23 > -1074 )
    {
      v24 = -1074 - v21;
      v25 = -1074 - v21;
      if ( (unsigned int)(-1074 - v23 + 67) < 0x40 )
        goto LABEL_25;
    }
    else
    {
      LOBYTE(v24) = 64;
      v25 = 64;
    }
    v26 = v24 - 60;
    v22 >>= (unsigned __int8)v24 - 60;
    v24 = 60;
    LODWORD(v22) = v22 + 9;
    v20 >>= v26;
    v21 = v25 + v21 - 60;
    goto LABEL_25;
  }
  v24 = 11;
LABEL_25:
  v27 = (unsigned int)v22;
  DWORD2(v33) = v21 + v24;
  *(_QWORD *)&v33 = v20 >> v24;
  if ( 8 * (v20 & ((1LL << v24) - 1)) >= (unsigned __int64)(unsigned int)v22 + 8 * (1LL << ((unsigned __int8)v24 - 1)) )
  {
    v28 = (v20 >> v24) + 1;
    *(_QWORD *)&v33 = v28;
    if ( (v28 & 0x20000000000000LL) != 0 )
    {
      *(_QWORD *)&v33 = v28 >> 1;
      DWORD2(v33) = v21 + v24 + 1;
    }
  }
  *a5 = tip_rapidjson::internal::DiyFp::ToDouble((tip_rapidjson::internal::DiyFp *)&v33);
  if ( v29 - v27 >= v30 || v30 >= v31 )
    return 1;
  return v5;
}
