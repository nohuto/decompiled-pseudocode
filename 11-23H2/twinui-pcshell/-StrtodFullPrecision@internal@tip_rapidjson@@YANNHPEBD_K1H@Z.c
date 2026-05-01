/*
 * XREFs of ?StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z @ 0x18041A4C0
 * Callers:
 *     ??$ParseNumber@$0BBA@V?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@V?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@2@@?$GenericReader@U?$UTF8@D@tip_rapidjson@@U12@VCrtAllocator@2@@tip_rapidjson@@AEAAXAEAV?$BasicIStreamWrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@AEAV?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@1@@Z @ 0x1801518A4 (--$ParseNumber@$0BBA@V-$BasicIStreamWrapper@V-$basic_istream@DU-$char_traits@D@std@@@std@@@tip_r.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z @ 0x180419FFC (-StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z.c)
 *     ?StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z @ 0x18041A09C (-StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z.c)
 *     ?StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z @ 0x18041A458 (-StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z.c)
 */

double __fastcall tip_rapidjson::internal::StrtodFullPrecision(
        tip_rapidjson::internal *this,
        double a2,
        tip_rapidjson::internal *a3,
        double *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  double v6; // xmm0_8
  unsigned __int64 v7; // rbx
  int v9; // edi
  int i; // esi
  int v11; // eax
  tip_rapidjson::internal *v13; // rcx
  unsigned __int64 v14; // [rsp+20h] [rbp-38h]
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = (unsigned __int64)a4;
  if ( v6 < 0.0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  if ( !a4 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  if ( tip_rapidjson::internal::StrtodFast(this, a2, (double *)&v16, a4) )
    return *(double *)&v16;
  v9 = a5;
  while ( *(_BYTE *)a3 == 48 && v7 > 1 )
  {
    --v7;
    a3 = (tip_rapidjson::internal *)((char *)a3 + 1);
    --v9;
  }
  for ( i = a6; *((_BYTE *)a3 + v7 - 1) == 48; ++i )
  {
    if ( v7 <= 1 )
      break;
    --v7;
    --v9;
  }
  if ( (int)v7 > 780 )
  {
    v11 = v7 - 780;
    v7 = 780LL;
    i += v11;
    v9 -= v11;
  }
  if ( (int)v7 + i < -324 )
    return 0.0;
  if ( tip_rapidjson::internal::StrtodDiyFp(a3, (const char *)v7, v9, i, (double *)&v16) )
    return *(double *)&v16;
  LODWORD(v14) = i;
  return tip_rapidjson::internal::StrtodBigInteger(v13, a2, (const char *)v7, v9, v14);
}
