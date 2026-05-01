/*
 * XREFs of ?dtoa@internal@tip_rapidjson@@YAPEADNPEADH@Z @ 0x180655F38
 * Callers:
 *     ?WriteDouble@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NN@Z @ 0x180655C44 (-WriteDouble@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z @ 0x1806544BC (-Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z.c)
 *     ?Prettify@internal@tip_rapidjson@@YAPEADPEADHHH@Z @ 0x1806552A0 (-Prettify@internal@tip_rapidjson@@YAPEADPEADHHH@Z.c)
 */

char *__fastcall tip_rapidjson::internal::dtoa(tip_rapidjson::internal *this, double a2, char *a3)
{
  char *v3; // rdx
  double v4; // xmm0_8
  int v5; // edi
  char *v6; // rbx
  double v7; // xmm1_8
  char *result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  char *v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = (int)a3;
  v6 = v3;
  v7 = v4;
  if ( (int)a3 < 1 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v11 = *(char **)&v4;
  if ( (*(_QWORD *)&v4 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    if ( v4 < 0.0 )
    {
      *(_QWORD *)&v7 = *(_QWORD *)&v4 ^ _xmm;
      v6 = v3 + 1;
      *v3 = 45;
    }
    tip_rapidjson::internal::Grisu2(this, v7, (char *)&v11, &v10);
    return tip_rapidjson::internal::Prettify(
             (tip_rapidjson::internal *)v6,
             (char *)(unsigned int)v11,
             (char *)(unsigned int)v10,
             v5);
  }
  else
  {
    if ( (__int64)v11 < 0 )
    {
      *v3 = 45;
      v6 = v3 + 1;
    }
    *(_WORD *)v6 = 11824;
    result = v6 + 3;
    v6[2] = 48;
  }
  return result;
}
