/*
 * XREFs of ?GetDouble@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBANXZ @ 0x1806543F4
 * Callers:
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653130 (--$process@V-$NameValuePair@AEAM@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V-$NameValuePair@A.c)
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653354 (--$process@V-$NameValuePair@AEAM@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V-$NameValuePair@AEAI@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

double __fastcall tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetDouble(
        _WORD *a1)
{
  __int16 v1; // ax
  __int64 v3; // rcx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[7];
  if ( (v1 & 0x10) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  if ( (v1 & 0x200) != 0 )
    return *(double *)a1;
  if ( (v1 & 0x20) != 0 )
    return (double)*(int *)a1;
  if ( (v1 & 0x40) != 0 )
    return (double)*(int *)a1;
  if ( (v1 & 0x80u) != 0 )
    return (double)(int)*(_QWORD *)a1;
  if ( (v1 & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v3 = *(_QWORD *)a1;
  if ( v3 < 0 )
    return (double)(int)(v3 & 1 | ((unsigned __int64)v3 >> 1)) + (double)(int)(v3 & 1 | ((unsigned __int64)v3 >> 1));
  else
    return (double)(int)v3;
}
