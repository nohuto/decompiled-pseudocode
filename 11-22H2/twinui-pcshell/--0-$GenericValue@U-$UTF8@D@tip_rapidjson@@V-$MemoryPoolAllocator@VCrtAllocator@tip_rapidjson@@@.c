/*
 * XREFs of ??0?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAA@PEBDIAEAV?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@1@@Z @ 0x180152514
 * Callers:
 *     ?String@?$GenericDocument@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@VCrtAllocator@2@@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180152448 (-String@-$GenericDocument@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 * Callees:
 *     ?Malloc@?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAX_K@Z @ 0x1801525C0 (-Malloc@-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@tip_rapidjson@@QEAAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

_WORD *__fastcall tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>(
        _WORD *a1,
        void *Src,
        size_t Size,
        __int64 a4)
{
  size_t v4; // rbx
  __int64 v7; // rsi
  _WORD *result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)Size;
  *(_OWORD *)a1 = 0LL;
  if ( !Src )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  if ( (unsigned int)Size > 0xD )
  {
    *(_DWORD *)a1 = Size;
    a1[7] = 3077;
    v7 = tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>::Malloc(a4, (unsigned int)(Size + 1));
    *((_QWORD *)a1 + 1) = v7 | *((_QWORD *)a1 + 1) & 0xFFFF000000000000uLL;
  }
  else
  {
    a1[7] = 7173;
    v7 = (__int64)a1;
    *((_BYTE *)a1 + 13) = 13 - Size;
  }
  memcpy_0((void *)v7, Src, v4);
  result = a1;
  *(_BYTE *)(v4 + v7) = 0;
  return result;
}
