/*
 * XREFs of ?CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ @ 0x180010E0C
 * Callers:
 *     ?NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z @ 0x18001AC30 (-NotifyObjectCompleted@BatchController@Composition@UI@Windows@@QEAAXPEAUBatchMember@234@@Z.c)
 *     ?SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z @ 0x180024D40 (-SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z.c)
 *     ?Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ @ 0x180024F90 (-Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?BeginNewCycle@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x180080488 (-BeginNewCycle@BatchController@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::UI::Composition::CompositionBatch::CheckCompleted(
        Windows::UI::Composition::CompositionBatch *this)
{
  char result; // al

  result = 0;
  if ( !*((_DWORD *)this + 35) )
  {
    if ( *((_BYTE *)this + 128) )
      return 1;
  }
  return result;
}
