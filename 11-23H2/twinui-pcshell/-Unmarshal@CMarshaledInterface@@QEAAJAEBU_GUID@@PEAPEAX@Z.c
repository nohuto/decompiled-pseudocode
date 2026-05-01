/*
 * XREFs of ?Unmarshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0A20
 * Callers:
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x180125F3C (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMarshaledInterface::Unmarshal(CMarshaledInterface *this, const struct _GUID *a2, void **a3)
{
  return CMarshaledInterface::_Unmarshal(this, a2, a3, 0);
}
