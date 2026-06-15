/*
 * XREFs of ??_E?$_Ref_count@VCStreamConnectionImpl@CMonitorManager@@@std@@UEAAPEAXI@Z @ 0x18012C160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count<CMonitorManager::CStreamConnectionImpl>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
