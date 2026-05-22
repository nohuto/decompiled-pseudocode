/*
 * XREFs of ?DisconnectProxyAtShutdown@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z @ 0x18016C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoProxyImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAVBamoProxyImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x18016A118 (--$_Emplace_reallocate@AEBQEAVBamoProxyImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoProxyImpl@Bamo.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  _BYTE *v4; // rdx
  _BYTE *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a4;
  if ( a4 )
  {
    a4[29] = 1;
    v4 = (_BYTE *)a1[1];
    if ( v4 == (_BYTE *)a1[2] )
    {
      std::vector<Microsoft::BamoImpl::BamoProxyImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoProxyImpl * const &>(
        (__int64)a1,
        v4,
        &v6);
    }
    else
    {
      *(_QWORD *)v4 = a4;
      a1[1] += 8LL;
    }
  }
  return 0LL;
}
