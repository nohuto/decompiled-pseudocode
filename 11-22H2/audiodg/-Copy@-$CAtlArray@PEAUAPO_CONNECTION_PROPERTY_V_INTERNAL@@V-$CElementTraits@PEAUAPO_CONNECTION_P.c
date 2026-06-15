/*
 * XREFs of ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x14008EA0C
 * Callers:
 *     ?CancelConnections@CAPONode@@QEAAJXZ @ 0x14008E944 (-CancelConnections@CAPONode@@QEAAJXZ.c)
 * Callees:
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x140012DBC (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTI.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

char __fastcall ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8

  LOBYTE(v5) = ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::SetCount(
                 (__int64)a1,
                 a2[1],
                 a3);
  if ( !(_BYTE)v5 )
    ATL::AtlThrowImpl(-2147024882);
  v6 = a2[1];
  v7 = (_QWORD *)*a1;
  if ( v6 )
  {
    v8 = *a2 - (_QWORD)v7;
    do
    {
      v5 = *(_QWORD *)((char *)v7 + v8);
      *v7++ = v5;
      --v6;
    }
    while ( v6 );
  }
  return v5;
}
