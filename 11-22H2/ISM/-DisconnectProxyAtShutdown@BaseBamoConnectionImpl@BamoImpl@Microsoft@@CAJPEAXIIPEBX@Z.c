/*
 * XREFs of ?DisconnectProxyAtShutdown@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z @ 0x1800C1250
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoProxyImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAVBamoProxyImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800C0468 (--$_Emplace_reallocate@AEBQEAVBamoProxyImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoProxyImpl@Bamo.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown(
        const void **a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  _BYTE *v4; // rdx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _BYTE *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a4;
  if ( a4 )
  {
    a4[29] = 1;
    v4 = a1[1];
    if ( v4 == a1[2] )
    {
      try
      {
        std::vector<Microsoft::BamoImpl::BamoProxyImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoProxyImpl * const &>(
          a1,
          v4,
          &v8);
      }
      catch ( ... )
      {
        wil::details::in1diag3::FailFast_CaughtException(
          retaddr,
          (void *)0x869,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v5);
      }
    }
    else
    {
      *(_QWORD *)v4 = a4;
      a1[1] = (char *)a1[1] + 8;
    }
  }
  return 0LL;
}
