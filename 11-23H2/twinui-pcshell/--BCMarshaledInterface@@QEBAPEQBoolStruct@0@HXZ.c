/*
 * XREFs of ??BCMarshaledInterface@@QEBAPEQBoolStruct@0@HXZ @ 0x180126734
 * Callers:
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x180125F3C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMarshaledInterface::operator int CMarshaledInterface::BoolStruct::*(_QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
