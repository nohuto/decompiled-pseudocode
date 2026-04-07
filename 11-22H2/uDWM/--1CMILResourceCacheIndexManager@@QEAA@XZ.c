/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x18005C2E4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x1800691F0 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(struct _RTL_CRITICAL_SECTION *this)
{
  if ( LOBYTE(this[1].DebugInfo) )
  {
    DeleteCriticalSection(this);
    LOBYTE(this[1].DebugInfo) = 0;
  }
}
