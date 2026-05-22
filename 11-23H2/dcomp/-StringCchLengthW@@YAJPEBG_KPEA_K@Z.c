/*
 * XREFs of ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180021CB8
 * Callers:
 *     GetFileName @ 0x18001F148 (GetFileName.c)
 *     GetModernAppId @ 0x18001F368 (GetModernAppId.c)
 *     ?ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z @ 0x180163690 (-ToString@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAG_K@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18016CB10 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 * Callees:
 *     StringLengthWorkerW @ 0x180022D20 (StringLengthWorkerW.c)
 */

HRESULT __fastcall StringCchLengthW(const unsigned __int16 *a1, size_t a2, unsigned __int64 *a3)
{
  HRESULT result; // eax

  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    result = StringLengthWorkerW(a1, a2, a3);
    if ( result >= 0 )
      return result;
  }
  else
  {
    result = -2147024809;
  }
  if ( a3 )
    *a3 = 0LL;
  return result;
}
