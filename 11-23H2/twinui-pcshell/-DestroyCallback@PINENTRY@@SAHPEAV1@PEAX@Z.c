/*
 * XREFs of ?DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z @ 0x180753AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destruct@PINENTRY@@QEAAXXZ @ 0x180753AEC (-Destruct@PINENTRY@@QEAAXXZ.c)
 */

__int64 __fastcall PINENTRY::DestroyCallback(PINENTRY *p, void *pData)
{
  PINENTRY::Destruct(p);
  return 1LL;
}
