/*
 * XREFs of ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180062DA4
 * Callers:
 *     ?_Init@ios_base@std@@IEAAXXZ @ 0x180061D88 (-_Init@ios_base@std@@IEAAXXZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18006525C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180022B0C (_CxxThrowException_0.c)
 *     ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x180051FD4 (--0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z.c)
 */

void __fastcall std::ios_base::clear(std::ios_base *this, char a2, char a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // [rsp+20h] [rbp-40h] BYREF
  void ***v6; // [rsp+28h] [rbp-38h]
  _BYTE pExceptionObject[48]; // [rsp+30h] [rbp-30h] BYREF

  v3 = a2 & 0x17;
  *((_DWORD *)this + 4) = v3;
  v4 = *((_DWORD *)this + 5) & v3;
  if ( v4 )
  {
    if ( a3 )
      throw;
    v5 = 1;
    v6 = std::_Error_objects<int>::_Iostream_object;
    if ( (v4 & 4) != 0 )
    {
      std::ios_base::failure::failure(
        (std::ios_base::failure *)pExceptionObject,
        "ios_base::badbit set",
        (const struct std::error_code *)&v5);
      throw (std::ios_base::failure *)pExceptionObject;
    }
    if ( (v4 & 2) != 0 )
    {
      std::ios_base::failure::failure(
        (std::ios_base::failure *)pExceptionObject,
        "ios_base::failbit set",
        (const struct std::error_code *)&v5);
      throw (std::ios_base::failure *)pExceptionObject;
    }
    std::ios_base::failure::failure(
      (std::ios_base::failure *)pExceptionObject,
      "ios_base::eofbit set",
      (const struct std::error_code *)&v5);
    throw (std::ios_base::failure *)pExceptionObject;
  }
}
